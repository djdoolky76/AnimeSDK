#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/MazeBuffType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GBCCMPLLDPG;
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class LineUpContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JPNGDCPJGDE_AJOBBFCIJML_OFFSET UNITYSDK_OFFSET(0xB2CB520)
#define JPNGDCPJGDE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB2CCA40)
#define JPNGDCPJGDE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB2CCB30)
#define JPNGDCPJGDE_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CCC00)
#define JPNGDCPJGDE_DAFDHOOINJN_OFFSET UNITYSDK_OFFSET(0xB2CBCD0)
#define JPNGDCPJGDE_DHIIFNBMFCD_OFFSET UNITYSDK_OFFSET(0xB2CC620)
#define JPNGDCPJGDE_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB2CB490)
#define JPNGDCPJGDE_ELCMHIHKOPK_OFFSET UNITYSDK_OFFSET(0xB2CB6F0)
#define JPNGDCPJGDE_EOEKDGBEMAI_OFFSET UNITYSDK_OFFSET(0xB2CBC80)
#define JPNGDCPJGDE_GPCOECCLKOF_OFFSET UNITYSDK_OFFSET(0xB2CB3F0)
#define JPNGDCPJGDE_KCBOHNKCBFP_OFFSET UNITYSDK_OFFSET(0xB2CC2C0)
#define JPNGDCPJGDE_KKBBFAIDFHP_OFFSET UNITYSDK_OFFSET(0xB2CC980)
#define JPNGDCPJGDE_MLMNLODIAPP_OFFSET UNITYSDK_OFFSET(0xB2CBF80)
#define JPNGDCPJGDE_NABIIPFCFFB_OFFSET UNITYSDK_OFFSET(0xB2CB9A0)
#define JPNGDCPJGDE_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB2CB290)
#define JPNGDCPJGDE_OCNMAKONNMG_OFFSET UNITYSDK_OFFSET(0xB2CB4D0)

	class JPNGDCPJGDE : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MazeBuffType, ::GBCCMPLLDPG*>* JGONPKEDAOJ; // 0x60
		::RPG::GameCore::BattleLineupData* PACMMOGOOHK; // 0x68
		::RPG::GameCore::LineUpContext* JFFEIFGLOJK; // 0x70
		// static const ::System::String* LMNEDOFDCCD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGDCPJGDE_CTOR_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGDCPJGDE_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGDCPJGDE_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void OCNMAKONNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGDCPJGDE_OCNMAKONNMG_OFFSET))(this);
		}

		::System::Void GPCOECCLKOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGDCPJGDE_GPCOECCLKOF_OFFSET))(this);
		}

		::System::Void AJOBBFCIJML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGDCPJGDE_AJOBBFCIJML_OFFSET))(this);
		}

		::System::Void ELCMHIHKOPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGDCPJGDE_ELCMHIHKOPK_OFFSET))(this);
		}

		::System::Void NABIIPFCFFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGDCPJGDE_NABIIPFCFFB_OFFSET))(this);
		}

		::System::Void EOEKDGBEMAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGDCPJGDE_EOEKDGBEMAI_OFFSET))(this);
		}

		::System::Void KCBOHNKCBFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGDCPJGDE_KCBOHNKCBFP_OFFSET))(this);
		}

		::System::Void DHIIFNBMFCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGDCPJGDE_DHIIFNBMFCD_OFFSET))(this);
		}

		::System::Void DAFDHOOINJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGDCPJGDE_DAFDHOOINJN_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* MLMNLODIAPP(::Il2CppArray<::RPG::GameCore::FixPoint>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + JPNGDCPJGDE_MLMNLODIAPP_OFFSET))(this, a1, a2);
		}

		::System::Void KKBBFAIDFHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPNGDCPJGDE_KKBBFAIDFHP_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGDCPJGDE_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGDCPJGDE_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
