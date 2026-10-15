#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class PingPongEnemyGroupEventBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OHGHFGFIEFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C993CE0)

inline static constexpr unsigned int OHGHFGFIEFD_TypeDefinitionIndex = 42965;

	class OHGHFGFIEFD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::PingPongEnemyGroupEventBase*>* PMIFFBHOOOO; // 0x10
		::System::UInt32 FALHGPLBOMC; // 0x18
		::System::UInt32 LLDCHLHNADA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGHFGFIEFD_CTOR_OFFSET))(this);
		}

	};
