#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOOAMCPDPCE;
class GLAKFODMCPH;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define JOLOHGEILFH_AFDPHIEAGPC_OFFSET UNITYSDK_OFFSET(0x1B4E3140)
#define JOLOHGEILFH_APGEIPBCJOK_OFFSET UNITYSDK_OFFSET(0x1B4E3A10)
#define JOLOHGEILFH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B4E3820)
#define JOLOHGEILFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E3A80)
#define JOLOHGEILFH_DPAPDILDIHM_OFFSET UNITYSDK_OFFSET(0x1B4E35C0)
#define JOLOHGEILFH_FJINMDCADOJ_OFFSET UNITYSDK_OFFSET(0x1B4E3890)
#define JOLOHGEILFH_IHEFKMIMGMB_OFFSET UNITYSDK_OFFSET(0x1B4E3920)
#define JOLOHGEILFH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B4E3970)
#define JOLOHGEILFH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B4E3690)
#define JOLOHGEILFH_LOGCHOFEDMC_OFFSET UNITYSDK_OFFSET(0x1B4E3290)
#define JOLOHGEILFH_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1B4E35D0)

inline static constexpr unsigned int JOLOHGEILFH_TypeDefinitionIndex = 79661;

	class JOLOHGEILFH : public ::System::Object
	{
	public:
		::EOOAMCPDPCE* IMEPGKKCOMD; // 0x10
		::RPG::GameCore::GameEntity* EENKEBPDHCN; // 0x18
		::Entitas::IEntity* KAKEIDJDNHJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLOHGEILFH_CTOR_OFFSET))(this);
		}

		::System::Boolean AFDPHIEAGPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLOHGEILFH_AFDPHIEAGPC_OFFSET))(this);
		}

		::UnityEngine::GameObject* LOGCHOFEDMC()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLOHGEILFH_LOGCHOFEDMC_OFFSET))(this);
		}

		::UnityEngine::GameObject* DPAPDILDIHM()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLOHGEILFH_DPAPDILDIHM_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLOHGEILFH_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::Entitas::IEntity* a1, ::GLAKFODMCPH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::GLAKFODMCPH*))((::PBYTE)hIl2Cpp + JOLOHGEILFH_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLOHGEILFH_CLEAR_OFFSET))(this);
		}

		::System::Void FJINMDCADOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLOHGEILFH_FJINMDCADOJ_OFFSET))(this);
		}

		::System::Void IHEFKMIMGMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLOHGEILFH_IHEFKMIMGMB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOLOHGEILFH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void APGEIPBCJOK(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + JOLOHGEILFH_APGEIPBCJOK_OFFSET))(this, a1, a2);
		}

	};
