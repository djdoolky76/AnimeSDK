#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OPBJFMHDNNE;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OPBJFMHDNNE_CLEAR_OFFSET UNITYSDK_OFFSET(0xBF9FFA0)
#define OPBJFMHDNNE_CTOR_OFFSET UNITYSDK_OFFSET(0xBFA0090)
#define OPBJFMHDNNE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBFA0040)
#define OPBJFMHDNNE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBF9FFF0)
#define OPBJFMHDNNE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBF9FF20)

inline static constexpr unsigned int OPBJFMHDNNE_TypeDefinitionIndex = 54086;

	class OPBJFMHDNNE : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* MMILCIBMANG; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* JNBNPOCLPPH; // 0x20
		::RPG::GameCore::GameEntity* JMBICLAHCNG; // 0x28
		::RPG::GameCore::FixPoint GELAMLPPBKE; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBJFMHDNNE_CTOR_OFFSET))(this);
		}

		::OPBJFMHDNNE* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::OPBJFMHDNNE*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OPBJFMHDNNE_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBJFMHDNNE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBJFMHDNNE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBJFMHDNNE_GETEVENTTYPE_OFFSET))(this);
		}

	};
