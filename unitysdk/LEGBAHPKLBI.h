#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTargetAssetPreloadState; }
namespace RPG::GameCore { class TaskContext; }

#define LEGBAHPKLBI_CTOR_OFFSET UNITYSDK_OFFSET(0xBEE7D50)
#define LEGBAHPKLBI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEE7D80)
#define LEGBAHPKLBI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEE7DC0)

inline static constexpr unsigned int LEGBAHPKLBI_TypeDefinitionIndex = 56771;

	class LEGBAHPKLBI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetAssetPreloadState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetAssetPreloadState*))((::PBYTE)hIl2Cpp + LEGBAHPKLBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGBAHPKLBI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGBAHPKLBI_ONTASKBEGIN_OFFSET))(this);
		}

	};
