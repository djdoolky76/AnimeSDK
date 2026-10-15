#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/VersusBarReasonTipType.h"
class BBDFGMBNDGD;
class KNKPLOGICFO;
class PHJHLADKIAJ;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Nullable; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define GEGMKAEMMBC_BDIMMJOLPBI_OFFSET UNITYSDK_OFFSET(0x159D5B20)
#define GEGMKAEMMBC_CTOR_OFFSET UNITYSDK_OFFSET(0x159D5900)
#define GEGMKAEMMBC_DEMECKNOAKO_OFFSET UNITYSDK_OFFSET(0x159D6090)
#define GEGMKAEMMBC_DPIENBEMOEE_OFFSET UNITYSDK_OFFSET(0x159D63C0)
#define GEGMKAEMMBC_EHPLKLDIOMP_OFFSET UNITYSDK_OFFSET(0x159D5990)
#define GEGMKAEMMBC_FKDPAGBEHFD_OFFSET UNITYSDK_OFFSET(0x159D5DF0)
#define GEGMKAEMMBC_FNFBPFAOELN_OFFSET UNITYSDK_OFFSET(0x159D6440)
#define GEGMKAEMMBC_HABFIFCKMKG_OFFSET UNITYSDK_OFFSET(0x159D5AC0)
#define GEGMKAEMMBC_IAALPPGKDGL_OFFSET UNITYSDK_OFFSET(0x159D6110)
#define GEGMKAEMMBC_KFGMGMKLOPC_OFFSET UNITYSDK_OFFSET(0x159D5D80)
#define GEGMKAEMMBC_MEHDBJDMKLL_OFFSET UNITYSDK_OFFSET(0x159D62B0)
#define GEGMKAEMMBC_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x159D5B80)
#define GEGMKAEMMBC_NPBLGGGDOLB_OFFSET UNITYSDK_OFFSET(0x159D6160)
#define GEGMKAEMMBC__ONBIND_OFFSET UNITYSDK_OFFSET(0x159D5560)
#define GEGMKAEMMBC__ONTICK_OFFSET UNITYSDK_OFFSET(0x159D61C0)

inline static constexpr unsigned int GEGMKAEMMBC_TypeDefinitionIndex = 72219;

	class GEGMKAEMMBC : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* KCOAILOHDND; // 0x60
		::RPG::Client::RPGAnimationEvent* LHMIOEDNCAJ; // 0x68
		::System::String* DFGNANDJMGI; // 0x70
		::PHJHLADKIAJ* FHEMCAFOIKG; // 0x78
		::RPG::Client::LocalizedText* MGLLOBIABHB; // 0x80
		::System::String* AIDCMKDAINN; // 0x88
		::System::String* PKCDBNPCKDC; // 0x90
		::KNKPLOGICFO* IJAJOGNGEIK; // 0x98
		::System::String* LEKIAIJOMKH; // 0xA0
		::RPG::Client::LocalizedText* AGNIJEOAICD; // 0xA8
		::System::UInt32 ELCICNFBCDI; // 0xB0
		::System::Single KIPAGNCANAJ; // 0xB4
		static ::System::Nullable** StaticGet_OIBFIMDCDNL()
		{
			return (::System::Nullable**)UnitySDK::FromName("", "GEGMKAEMMBC")->GetStaticField(0x13630);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGMKAEMMBC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGMKAEMMBC__ONBIND_OFFSET))(this);
		}

		::System::Void HABFIFCKMKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGMKAEMMBC_HABFIFCKMKG_OFFSET))(this);
		}

		::System::Void BDIMMJOLPBI(::PHJHLADKIAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHJHLADKIAJ*))((::PBYTE)hIl2Cpp + GEGMKAEMMBC_BDIMMJOLPBI_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::BBDFGMBNDGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBDFGMBNDGD*))((::PBYTE)hIl2Cpp + GEGMKAEMMBC_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::String* KFGMGMKLOPC(::RPG::GameCore::VersusBarReasonTipType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::VersusBarReasonTipType))((::PBYTE)hIl2Cpp + GEGMKAEMMBC_KFGMGMKLOPC_OFFSET))(this, a1);
		}

		::System::Void FKDPAGBEHFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGMKAEMMBC_FKDPAGBEHFD_OFFSET))(this);
		}

		::System::Void NPBLGGGDOLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGMKAEMMBC_NPBLGGGDOLB_OFFSET))(this);
		}

		::System::Void EHPLKLDIOMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGMKAEMMBC_EHPLKLDIOMP_OFFSET))(this);
		}

		::System::Void IAALPPGKDGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGMKAEMMBC_IAALPPGKDGL_OFFSET))(this);
		}

		::KNKPLOGICFO* DEMECKNOAKO()
		{
			return ((::KNKPLOGICFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGMKAEMMBC_DEMECKNOAKO_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEGMKAEMMBC__ONTICK_OFFSET))(this, a1);
		}

		::System::Void MEHDBJDMKLL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEGMKAEMMBC_MEHDBJDMKLL_OFFSET))(this, a1);
		}

		::System::Single DPIENBEMOEE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGMKAEMMBC_DPIENBEMOEE_OFFSET))(this);
		}

		::System::Void FNFBPFAOELN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEGMKAEMMBC_FNFBPFAOELN_OFFSET))(this, a1);
		}

	};
