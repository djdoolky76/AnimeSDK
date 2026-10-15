#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/VersusBarReasonTipType.h"
#include "unitysdk/System/Nullable_1.h"
class BBDFGMBNDGD;
class KNKPLOGICFO;
class PHJHLADKIAJ;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define GEGMKAEMMBC_BDIMMJOLPBI_OFFSET UNITYSDK_OFFSET(0x159CA510)
#define GEGMKAEMMBC_CTOR_OFFSET UNITYSDK_OFFSET(0x159CA2F0)
#define GEGMKAEMMBC_DEMECKNOAKO_OFFSET UNITYSDK_OFFSET(0x159CAA80)
#define GEGMKAEMMBC_DPIENBEMOEE_OFFSET UNITYSDK_OFFSET(0x159CADA0)
#define GEGMKAEMMBC_EHPLKLDIOMP_OFFSET UNITYSDK_OFFSET(0x159CA380)
#define GEGMKAEMMBC_FKDPAGBEHFD_OFFSET UNITYSDK_OFFSET(0x159CA7E0)
#define GEGMKAEMMBC_FNFBPFAOELN_OFFSET UNITYSDK_OFFSET(0x159CAE20)
#define GEGMKAEMMBC_HABFIFCKMKG_OFFSET UNITYSDK_OFFSET(0x159CA4B0)
#define GEGMKAEMMBC_IAALPPGKDGL_OFFSET UNITYSDK_OFFSET(0x159CAAF0)
#define GEGMKAEMMBC_KFGMGMKLOPC_OFFSET UNITYSDK_OFFSET(0x159CA770)
#define GEGMKAEMMBC_MEHDBJDMKLL_OFFSET UNITYSDK_OFFSET(0x159CAC90)
#define GEGMKAEMMBC_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x159CA570)
#define GEGMKAEMMBC_NPBLGGGDOLB_OFFSET UNITYSDK_OFFSET(0x159CAB40)
#define GEGMKAEMMBC__ONBIND_OFFSET UNITYSDK_OFFSET(0x159C9F40)
#define GEGMKAEMMBC__ONTICK_OFFSET UNITYSDK_OFFSET(0x159CABA0)

inline static constexpr unsigned int GEGMKAEMMBC_TypeDefinitionIndex = 72218;

	class GEGMKAEMMBC : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedText* MGLLOBIABHB; // 0x60
		::RPG::Client::LocalizedText* AGNIJEOAICD; // 0x68
		::KNKPLOGICFO* IJAJOGNGEIK; // 0x70
		::System::String* LEKIAIJOMKH; // 0x78
		::System::String* PKCDBNPCKDC; // 0x80
		::UnityEngine::Animation* KCOAILOHDND; // 0x88
		::PHJHLADKIAJ* FHEMCAFOIKG; // 0x90
		::System::String* DFGNANDJMGI; // 0x98
		::System::String* AIDCMKDAINN; // 0xA0
		::RPG::Client::RPGAnimationEvent* LHMIOEDNCAJ; // 0xA8
		::System::UInt32 ELCICNFBCDI; // 0xB0
		::System::Single KIPAGNCANAJ; // 0xB4
		static ::System::Nullable_1<::System::Single>* StaticGet_OIBFIMDCDNL()
		{
			return (::System::Nullable_1<::System::Single>*)UnitySDK::FromName("", "GEGMKAEMMBC")->GetStaticField(0x14470);
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
