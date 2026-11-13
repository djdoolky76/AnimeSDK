#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FARMGUIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA8710)

namespace RPG::Client
{
	inline static constexpr unsigned int FarmGuide_TypeDefinitionIndex = 67523;

	class FarmGuide : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* NeedMaterials; // 0x10
		::System::UInt32 FarmID; // 0x18
		::System::Boolean ExistingInvalidItem; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMGUIDE_CTOR_OFFSET))(this);
		}

	};
}
