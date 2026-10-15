#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STAGEHARMONYTARGETLIGHTGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0xE993020)

	class StageHarmonyTargetLightGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* targetLightIndexGroup; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTARGETLIGHTGROUP_CTOR_OFFSET))(this);
		}

	};
