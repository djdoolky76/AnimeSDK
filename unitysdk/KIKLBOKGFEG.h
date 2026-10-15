#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropRuntimeReplaceArtPrefab; }
namespace RPG::GameCore { class TaskContext; }

#define KIKLBOKGFEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB432730)
#define KIKLBOKGFEG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB432760)

inline static constexpr unsigned int KIKLBOKGFEG_TypeDefinitionIndex = 58345;

	class KIKLBOKGFEG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropRuntimeReplaceArtPrefab* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropRuntimeReplaceArtPrefab*))((::PBYTE)hIl2Cpp + KIKLBOKGFEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKLBOKGFEG_ONTASKBEGIN_OFFSET))(this);
		}

	};
