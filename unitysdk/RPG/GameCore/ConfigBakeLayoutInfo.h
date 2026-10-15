#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BakeLayoutTypeId.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConfigBakeLayoutInfo; }
namespace System { class String; }

#define RPG_GAMECORE_CONFIGBAKELAYOUTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D4980)
#define RPG_GAMECORE_CONFIGBAKELAYOUTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D47B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigBakeLayoutInfo_TypeDefinitionIndex = 16447;

	class ConfigBakeLayoutInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::RPG::GameCore::BakeLayoutTypeId TypeId; // 0x18
		::System::Int32 Offset; // 0x1C
		::Il2CppArray<::System::String*>* Dependency; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGBAKELAYOUTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConfigBakeLayoutInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConfigBakeLayoutInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGBAKELAYOUTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
