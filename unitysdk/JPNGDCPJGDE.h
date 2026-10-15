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

#define JPNGDCPJGDE_AJOBBFCIJML_OFFSET UNITYSDK_OFFSET(0xB2C4AF0)
#define JPNGDCPJGDE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB2C6010)
#define JPNGDCPJGDE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB2C6100)
#define JPNGDCPJGDE_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C61D0)
#define JPNGDCPJGDE_DAFDHOOINJN_OFFSET UNITYSDK_OFFSET(0xB2C52A0)
#define JPNGDCPJGDE_DHIIFNBMFCD_OFFSET UNITYSDK_OFFSET(0xB2C5BF0)
#define JPNGDCPJGDE_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB2C4A60)
#define JPNGDCPJGDE_ELCMHIHKOPK_OFFSET UNITYSDK_OFFSET(0xB2C4CC0)
#define JPNGDCPJGDE_EOEKDGBEMAI_OFFSET UNITYSDK_OFFSET(0xB2C5250)
#define JPNGDCPJGDE_GPCOECCLKOF_OFFSET UNITYSDK_OFFSET(0xB2C49C0)
#define JPNGDCPJGDE_KCBOHNKCBFP_OFFSET UNITYSDK_OFFSET(0xB2C5890)
#define JPNGDCPJGDE_KKBBFAIDFHP_OFFSET UNITYSDK_OFFSET(0xB2C5F50)
#define JPNGDCPJGDE_MLMNLODIAPP_OFFSET UNITYSDK_OFFSET(0xB2C5550)
#define JPNGDCPJGDE_NABIIPFCFFB_OFFSET UNITYSDK_OFFSET(0xB2C4F70)
#define JPNGDCPJGDE_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB2C4860)
#define JPNGDCPJGDE_OCNMAKONNMG_OFFSET UNITYSDK_OFFSET(0xB2C4AA0)

inline static constexpr unsigned int JPNGDCPJGDE_TypeDefinitionIndex = 71616;

	class JPNGDCPJGDE : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LineUpContext* JFFEIFGLOJK; // 0x60
		::RPG::GameCore::BattleLineupData* PACMMOGOOHK; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MazeBuffType, ::GBCCMPLLDPG*>* JGONPKEDAOJ; // 0x70
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
