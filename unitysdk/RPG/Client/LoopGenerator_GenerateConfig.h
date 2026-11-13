#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOOPGENERATOR_GENERATECONFIG_DJPEJOPFANL_OFFSET UNITYSDK_OFFSET(0x3E388D0)
#define RPG_CLIENT_LOOPGENERATOR_GENERATECONFIG_GFJEPOCNAPC_OFFSET UNITYSDK_OFFSET(0x3E388C0)
#define RPG_CLIENT_LOOPGENERATOR_GENERATECONFIG_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0x3E388E0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerator_GenerateConfig_TypeDefinitionIndex = 75087;

	struct alignas(8) LoopGenerator_GenerateConfig
	{
		::System::Single Speed; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* GroupWeightPairs; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* SliderTemplates; // 0x20
		::System::Void GFJEPOCNAPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_GENERATECONFIG_GFJEPOCNAPC_OFFSET))(this);
		}

		::System::Void DJPEJOPFANL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_GENERATECONFIG_DJPEJOPFANL_OFFSET))(this);
		}

		::System::Void KJMDJMBNCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_GENERATECONFIG_KJMDJMBNCPE_OFFSET))(this);
		}

	};
}
