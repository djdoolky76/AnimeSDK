#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FeverTimeStatisticsType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class BJOFJDKIOPG;
class DIKAEHJFGEE_BHFMPBCKOBK;
class EKFMIDBJDIA;
class OJEANLINGCJ;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DIKAEHJFGEE_BCKIGFAFKMF_OFFSET UNITYSDK_OFFSET(0xF20DBC0)
#define DIKAEHJFGEE_BCPIJEJGMAH_OFFSET UNITYSDK_OFFSET(0xF20D600)
#define DIKAEHJFGEE_CDBPONPNIII_OFFSET UNITYSDK_OFFSET(0xF20E470)
#define DIKAEHJFGEE_CHBIFIEMDGG_OFFSET UNITYSDK_OFFSET(0xF20D750)
#define DIKAEHJFGEE_CTOR_OFFSET UNITYSDK_OFFSET(0xF20B930)
#define DIKAEHJFGEE_DFMHAIHKHPA_OFFSET UNITYSDK_OFFSET(0xF20DCF0)
#define DIKAEHJFGEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF20BAC0)
#define DIKAEHJFGEE_FGPNIDIKFBL_OFFSET UNITYSDK_OFFSET(0xF20C5C0)
#define DIKAEHJFGEE_FLANOOLKIPG_OFFSET UNITYSDK_OFFSET(0xF20BC50)
#define DIKAEHJFGEE_GFOAIEHPDOE_OFFSET UNITYSDK_OFFSET(0xF20DC70)
#define DIKAEHJFGEE_HMMJBBPPPMM_OFFSET UNITYSDK_OFFSET(0xF20CE40)
#define DIKAEHJFGEE_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xF20E5D0)
#define DIKAEHJFGEE_JCENEFMLLIL_OFFSET UNITYSDK_OFFSET(0xF20C540)
#define DIKAEHJFGEE_KMCEBLCMDEM_OFFSET UNITYSDK_OFFSET(0xF20D250)
#define DIKAEHJFGEE_OABNIAJOHMB_OFFSET UNITYSDK_OFFSET(0xF20D430)

inline static constexpr unsigned int DIKAEHJFGEE_TypeDefinitionIndex = 57606;

	class DIKAEHJFGEE : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MDLFIFLPDNI; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* PCMHFKGCOIH; // 0x18
		::Il2CppArray<::System::UInt32>* ACJHDPPIILB; // 0x20
		::RPG::GameCore::FeverTimeStatisticsType GMCNLFICNOB; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint AAJDLMFKGMA; // 0x30
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FeverTimeStatisticsType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FeverTimeStatisticsType))((::PBYTE)hIl2Cpp + DIKAEHJFGEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKAEHJFGEE_DISPOSE_OFFSET))(this);
		}

		::OJEANLINGCJ* FLANOOLKIPG()
		{
			return ((::OJEANLINGCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKAEHJFGEE_FLANOOLKIPG_OFFSET))(this);
		}

		::BJOFJDKIOPG* FGPNIDIKFBL()
		{
			return ((::BJOFJDKIOPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKAEHJFGEE_FGPNIDIKFBL_OFFSET))(this);
		}

		::System::Void HMMJBBPPPMM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DIKAEHJFGEE_HMMJBBPPPMM_OFFSET))(this, a1);
		}

		::System::Void BCPIJEJGMAH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DIKAEHJFGEE_BCPIJEJGMAH_OFFSET))(this, a1);
		}

		::System::Void CHBIFIEMDGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKAEHJFGEE_CHBIFIEMDGG_OFFSET))(this);
		}

		::System::Void BCKIGFAFKMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKAEHJFGEE_BCKIGFAFKMF_OFFSET))(this);
		}

		::System::Void OABNIAJOHMB(::DIKAEHJFGEE_BHFMPBCKOBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIKAEHJFGEE_BHFMPBCKOBK*))((::PBYTE)hIl2Cpp + DIKAEHJFGEE_OABNIAJOHMB_OFFSET))(this, a1);
		}

		::System::Void KMCEBLCMDEM(::DIKAEHJFGEE_BHFMPBCKOBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIKAEHJFGEE_BHFMPBCKOBK*))((::PBYTE)hIl2Cpp + DIKAEHJFGEE_KMCEBLCMDEM_OFFSET))(this, a1);
		}

		::System::Void DFMHAIHKHPA(::System::Object* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DIKAEHJFGEE_DFMHAIHKHPA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 CDBPONPNIII(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIKAEHJFGEE_CDBPONPNIII_OFFSET))(this, a1);
		}

		::RPG::GameCore::FeverTimeStatisticsType JBIOGKPHKKC()
		{
			return ((::RPG::GameCore::FeverTimeStatisticsType(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKAEHJFGEE_JBIOGKPHKKC_OFFSET))(this);
		}

		::DIKAEHJFGEE_BHFMPBCKOBK* JCENEFMLLIL()
		{
			return ((::DIKAEHJFGEE_BHFMPBCKOBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKAEHJFGEE_JCENEFMLLIL_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GFOAIEHPDOE()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKAEHJFGEE_GFOAIEHPDOE_OFFSET))(this);
		}

	};
