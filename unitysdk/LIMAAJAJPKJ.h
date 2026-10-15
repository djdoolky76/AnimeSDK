#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class LIMAAJAJPKJ;
namespace RPG::GameCore { class BaseModifierInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIMAAJAJPKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D9D90)
#define LIMAAJAJPKJ_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D9D40)
#define LIMAAJAJPKJ_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D9CF0)
#define LIMAAJAJPKJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB6D9C10)

inline static constexpr unsigned int LIMAAJAJPKJ_TypeDefinitionIndex = 56598;

	class LIMAAJAJPKJ : public ::CMPGEAFHHDC
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* MAOOGNLNKIB; // 0x18
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
		::RPG::GameCore::BaseModifierInstance* CEAGEFBHKDH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMAAJAJPKJ_CTOR_OFFSET))(this);
		}

		::LIMAAJAJPKJ* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2, ::RPG::GameCore::BaseModifierInstance* a3)
		{
			return ((::LIMAAJAJPKJ*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::Object*>*, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + LIMAAJAJPKJ_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMAAJAJPKJ_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMAAJAJPKJ_GETEVENTTYPE_OFFSET))(this);
		}

	};
