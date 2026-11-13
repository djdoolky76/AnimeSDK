#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class DADHNMAGKMP;
namespace RPG::Client::Prop { class ChasePuzzleBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_ADBOLFIKLCI_OFFSET UNITYSDK_OFFSET(0x1BFD6680)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFD6CE0)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_DISABLE_OFFSET UNITYSDK_OFFSET(0x1BFD6570)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BFD63B0)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_DNIPOMCOHHI_OFFSET UNITYSDK_OFFSET(0x1BFD61D0)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_ENABLE_OFFSET UNITYSDK_OFFSET(0x1BFD6400)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_INIT_OFFSET UNITYSDK_OFFSET(0x1BFD5FF0)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_REGISTERTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1BFD6040)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_UNREGISTERTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1BFD6300)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChasePuzzleArea_TypeDefinitionIndex = 80955;

	class ChasePuzzleArea : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* uniqueName; // 0x18
		::System::String* levelAreaAnchorName; // 0x20
		::Il2CppArray<::System::Object*>* triggerInfos; // 0x28
		::RPG::Client::Prop::ChasePuzzleBoard* MIPPNCGOJNM; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::ChasePuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChasePuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_INIT_OFFSET))(this, a1);
		}

		::System::Void RegisterTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_REGISTERTRIGGERS_OFFSET))(this);
		}

		::System::Void UnregisterTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_UNREGISTERTRIGGERS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_DISPOSE_OFFSET))(this);
		}

		::System::Void Enable(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_ENABLE_OFFSET))(this, a1);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_DISABLE_OFFSET))(this);
		}

		::DADHNMAGKMP* DNIPOMCOHHI(::System::Int32 a1)
		{
			return ((::DADHNMAGKMP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_DNIPOMCOHHI_OFFSET))(this, a1);
		}

		::System::Void ADBOLFIKLCI(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_ADBOLFIKLCI_OFFSET))(this, a1, a2);
		}

	};
}
