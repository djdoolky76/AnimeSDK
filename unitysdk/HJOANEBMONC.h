#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapDataKey; }

#define HJOANEBMONC_FCBFEPHADCF_1_OFFSET UNITYSDK_OFFSET(0x15D26EB0)
#define HJOANEBMONC_FCBFEPHADCF_2_OFFSET UNITYSDK_OFFSET(0x15D26C10)
#define HJOANEBMONC_FCBFEPHADCF_OFFSET UNITYSDK_OFFSET(0x15D26BA0)

inline static constexpr unsigned int HJOANEBMONC_TypeDefinitionIndex = 62937;

	class HJOANEBMONC : public ::System::Object
	{
	public:
		static ::System::Boolean FCBFEPHADCF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HJOANEBMONC_FCBFEPHADCF_OFFSET))(a1);
		}

		static ::System::Boolean FCBFEPHADCF_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HJOANEBMONC_FCBFEPHADCF_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean FCBFEPHADCF_2(::RPG::Client::MapDataKey* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + HJOANEBMONC_FCBFEPHADCF_2_OFFSET))(a1);
		}

	};
