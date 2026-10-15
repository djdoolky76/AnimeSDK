#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class HKOEAOPNEAC;
namespace RPG::Client { class RogueGambleBaseFunc; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RogueGambleLoadShowTex; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GPEFGMHKCFK_ALKOAGMGIIO_OFFSET UNITYSDK_OFFSET(0x15B47160)
#define GPEFGMHKCFK_BLGNPEBOIJE_OFFSET UNITYSDK_OFFSET(0x15B473C0)
#define GPEFGMHKCFK_CTOR_OFFSET UNITYSDK_OFFSET(0x15B46BE0)
#define GPEFGMHKCFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B46C00)
#define GPEFGMHKCFK_FNCPKIDNNPE_OFFSET UNITYSDK_OFFSET(0x15B47100)
#define GPEFGMHKCFK_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x15B47520)
#define GPEFGMHKCFK_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x15B474D0)
#define GPEFGMHKCFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B46DB0)
#define GPEFGMHKCFK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B47480)
#define GPEFGMHKCFK_TICK_OFFSET UNITYSDK_OFFSET(0x15B46D50)
#define GPEFGMHKCFK___SETTEXTURE_B__6_0_OFFSET UNITYSDK_OFFSET(0x15B47570)
#define GPEFGMHKCFK___SETTEXTURE_B__6_1_OFFSET UNITYSDK_OFFSET(0x15B47600)

inline static constexpr unsigned int GPEFGMHKCFK_TypeDefinitionIndex = 58466;

	class GPEFGMHKCFK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PropComponent* BCCLENOIOBD; // 0x20
		::RPG::GameCore::RogueGambleLoadShowTex* OFKGLJOAMLD; // 0x28
		::RPG::Client::RogueGambleBaseFunc* NFMNKFPMDDB; // 0x30
		::System::UInt32 LDKFBCDPHJD; // 0x38
		::System::Boolean MJGDFAHFDDF; // 0x3C
		::System::Byte _padding0[0x3];
		::System::UInt32 FBJCMAAHKIP; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueGambleLoadShowTex* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueGambleLoadShowTex*))((::PBYTE)hIl2Cpp + GPEFGMHKCFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEFGMHKCFK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPEFGMHKCFK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEFGMHKCFK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void FNCPKIDNNPE(::HKOEAOPNEAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKOEAOPNEAC*))((::PBYTE)hIl2Cpp + GPEFGMHKCFK_FNCPKIDNNPE_OFFSET))(this, a1);
		}

		::System::Void BLGNPEBOIJE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPEFGMHKCFK_BLGNPEBOIJE_OFFSET))(this, a1);
		}

		::System::Void ALKOAGMGIIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEFGMHKCFK_ALKOAGMGIIO_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEFGMHKCFK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GPEFGMHKCFK_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
		}

		::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GPEFGMHKCFK_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
		}

		::System::Void __SetTexture_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEFGMHKCFK___SETTEXTURE_B__6_0_OFFSET))(this);
		}

		::System::Void __SetTexture_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEFGMHKCFK___SETTEXTURE_B__6_1_OFFSET))(this);
		}

	};
