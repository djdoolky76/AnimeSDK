#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnumConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_JSONENUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D773250)
#define RPG_GAMECORE_JSONENUMCONFIG_JAPINLEGNMI_OFFSET UNITYSDK_OFFSET(0x1D773260)
#define RPG_GAMECORE_JSONENUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D773170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonEnumConfig_TypeDefinitionIndex = 17123;

	class JsonEnumConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Values; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _ValueToStringMap; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::JsonEnumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::JsonEnumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::String* JAPINLEGNMI(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMCONFIG_JAPINLEGNMI_OFFSET))(this, a1);
		}

	};
}
