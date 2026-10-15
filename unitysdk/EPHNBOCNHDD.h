#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define EPHNBOCNHDD_CLEAR_OFFSET UNITYSDK_OFFSET(0x155D4DD0)
#define EPHNBOCNHDD_CTOR_OFFSET UNITYSDK_OFFSET(0x155D4E20)

inline static constexpr unsigned int EPHNBOCNHDD_TypeDefinitionIndex = 55518;

	class EPHNBOCNHDD : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* IEDIIFJOOGF; // 0x10
		::System::UInt32 HOCMHABKLGJ; // 0x18
		::System::UInt32 HCDEOKNIGKG; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHNBOCNHDD_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHNBOCNHDD_CLEAR_OFFSET))(this);
		}

	};
