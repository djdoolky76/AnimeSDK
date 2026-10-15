#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class DGDCNMMBMKA;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPGTools { class MonoTimelineEffect; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define OGBPMPBLDNK_ACANHBHDLCF_OFFSET UNITYSDK_OFFSET(0xBE49A40)
#define OGBPMPBLDNK_AFGHLIMKEAC_OFFSET UNITYSDK_OFFSET(0xBE498D0)
#define OGBPMPBLDNK_AIEFNNDECKO_OFFSET UNITYSDK_OFFSET(0xBE49B80)
#define OGBPMPBLDNK_CONECKKGNJM_OFFSET UNITYSDK_OFFSET(0xBE49DE0)
#define OGBPMPBLDNK_CTOR_OFFSET UNITYSDK_OFFSET(0xBE4A9A0)
#define OGBPMPBLDNK_DCDJFENHLKE_OFFSET UNITYSDK_OFFSET(0xBE49D60)
#define OGBPMPBLDNK_EAMEBOCOFDA_OFFSET UNITYSDK_OFFSET(0xBE4A5A0)
#define OGBPMPBLDNK_FCGPPFGOFPE_OFFSET UNITYSDK_OFFSET(0xBE49DA0)
#define OGBPMPBLDNK_GBAHDJFPPBC_OFFSET UNITYSDK_OFFSET(0xBE49BF0)
#define OGBPMPBLDNK_HLNLBFKMBDC_OFFSET UNITYSDK_OFFSET(0xBE49F70)
#define OGBPMPBLDNK_IAAPEHELMHK_OFFSET UNITYSDK_OFFSET(0xBE49C50)
#define OGBPMPBLDNK_JGJFEPPABOP_OFFSET UNITYSDK_OFFSET(0xBE49590)
#define OGBPMPBLDNK_JKGFAGBNLAC_OFFSET UNITYSDK_OFFSET(0xBE4A040)
#define OGBPMPBLDNK_JMLJNLBMHKM_OFFSET UNITYSDK_OFFSET(0xBE49CD0)
#define OGBPMPBLDNK_LFMIMNGALID_OFFSET UNITYSDK_OFFSET(0xBE49480)
#define OGBPMPBLDNK_MGAJCJPEKGL_OFFSET UNITYSDK_OFFSET(0xBE4A780)
#define OGBPMPBLDNK_NOELJCEPAPE_OFFSET UNITYSDK_OFFSET(0xBE49750)
#define OGBPMPBLDNK_PDDANNNEDAL_OFFSET UNITYSDK_OFFSET(0xBE4A4A0)

inline static constexpr unsigned int OGBPMPBLDNK_TypeDefinitionIndex = 48070;

	class OGBPMPBLDNK : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffectPluginFollow* CDIMAMFFGMM; // 0x10
		::System::String* BJCBMNHOAGO; // 0x18
		::UnityEngine::Transform* ACNOFONLALP; // 0x20
		::System::String* GFNAPNFFGPJ; // 0x28
		::System::String* CDEEHGCEOKN; // 0x30
		::RPGTools::MonoTimelineEffect* ICFIFHFPCJB; // 0x38
		::UnityEngine::Object* NCPNKDBIINJ; // 0x40
		::DGDCNMMBMKA* PGNKDKLMBJJ; // 0x48
		::UnityEngine::Transform* CIMHBBGGADG; // 0x50
		::RPG::Client::MonoEffect* HJBEGIDAMBP; // 0x58
		::System::Boolean HEOAJBPIPAH; // 0x60
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 LJDEHCKDLHF; // 0x64
		::UnityEngine::Vector3 BJFMJCJELPC; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_CTOR_OFFSET))(this);
		}

		::System::Void LFMIMNGALID(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_LFMIMNGALID_OFFSET))(this, a1, a2);
		}

		::System::Void ACANHBHDLCF(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_ACANHBHDLCF_OFFSET))(this, a1, a2);
		}

		::System::Void IAAPEHELMHK(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_IAAPEHELMHK_OFFSET))(this, a1, a2);
		}

		::System::Boolean JMLJNLBMHKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_JMLJNLBMHKM_OFFSET))(this);
		}

		::System::Void DCDJFENHLKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_DCDJFENHLKE_OFFSET))(this);
		}

		::System::Void FCGPPFGOFPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_FCGPPFGOFPE_OFFSET))(this);
		}

		::DGDCNMMBMKA* JGJFEPPABOP()
		{
			return ((::DGDCNMMBMKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_JGJFEPPABOP_OFFSET))(this);
		}

		::System::Boolean NOELJCEPAPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_NOELJCEPAPE_OFFSET))(this);
		}

		::System::Void AFGHLIMKEAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_AFGHLIMKEAC_OFFSET))(this);
		}

		::UnityEngine::GameObject* CONECKKGNJM()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_CONECKKGNJM_OFFSET))(this);
		}

		::System::Void JKGFAGBNLAC(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_JKGFAGBNLAC_OFFSET))(this, a1);
		}

		::System::Void EAMEBOCOFDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_EAMEBOCOFDA_OFFSET))(this);
		}

		::System::Void PDDANNNEDAL(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_PDDANNNEDAL_OFFSET))(this, a1);
		}

		::System::Void HLNLBFKMBDC(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_HLNLBFKMBDC_OFFSET))(this, a1);
		}

		::System::Boolean MGAJCJPEKGL(::UnityEngine::Component* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_MGAJCJPEKGL_OFFSET))(this, a1);
		}

		::System::Void AIEFNNDECKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_AIEFNNDECKO_OFFSET))(this);
		}

		::System::Void GBAHDJFPPBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBPMPBLDNK_GBAHDJFPPBC_OFFSET))(this);
		}

	};
