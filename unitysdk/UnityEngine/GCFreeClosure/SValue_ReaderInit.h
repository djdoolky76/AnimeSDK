#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_GCFREECLOSURE_SVALUE_READERINIT_CCTOR_OFFSET UNITYSDK_OFFSET(0x2069D800)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_READERINIT_DOINIT_OFFSET UNITYSDK_OFFSET(0x2069DF30)

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int SValue_ReaderInit_TypeDefinitionIndex = 4469;

	class SValue_ReaderInit : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_READERINIT_CCTOR_OFFSET))();
		}

		static ::System::Void DoInit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_READERINIT_DOINIT_OFFSET))();
		}

	};
}
