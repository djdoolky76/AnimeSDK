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

#define GPEFGMHKCFK_ALKOAGMGIIO_OFFSET UNITYSDK_OFFSET(0x15B52B20)
#define GPEFGMHKCFK_BLGNPEBOIJE_OFFSET UNITYSDK_OFFSET(0x15B52D80)
#define GPEFGMHKCFK_CTOR_OFFSET UNITYSDK_OFFSET(0x15B525A0)
#define GPEFGMHKCFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B525C0)
#define GPEFGMHKCFK_FNCPKIDNNPE_OFFSET UNITYSDK_OFFSET(0x15B52AC0)
#define GPEFGMHKCFK_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x15B52EE0)
#define GPEFGMHKCFK_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x15B52E90)
#define GPEFGMHKCFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B52770)
#define GPEFGMHKCFK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B52E40)
#define GPEFGMHKCFK_TICK_OFFSET UNITYSDK_OFFSET(0x15B52710)
#define GPEFGMHKCFK___SETTEXTURE_B__6_0_OFFSET UNITYSDK_OFFSET(0x15B52F30)
#define GPEFGMHKCFK___SETTEXTURE_B__6_1_OFFSET UNITYSDK_OFFSET(0x15B52FC0)

inline static constexpr unsigned int GPEFGMHKCFK_TypeDefinitionIndex = 58466;

	class GPEFGMHKCFK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PropComponent* BCCLENOIOBD; // 0x20
		::RPG::Client::RogueGambleBaseFunc* NFMNKFPMDDB; // 0x28
		::RPG::GameCore::RogueGambleLoadShowTex* OFKGLJOAMLD; // 0x30
		::System::UInt32 LDKFBCDPHJD; // 0x38
		::System::UInt32 FBJCMAAHKIP; // 0x3C
		::System::Boolean MJGDFAHFDDF; // 0x40
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
