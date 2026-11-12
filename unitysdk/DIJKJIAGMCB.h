#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class HMMHDEKAHEA;

#define DIJKJIAGMCB_CTOR_OFFSET UNITYSDK_OFFSET(0xF970CC0)
#define DIJKJIAGMCB_FJBMPHLOABF_OFFSET UNITYSDK_OFFSET(0xF970B80)
#define DIJKJIAGMCB_START_OFFSET UNITYSDK_OFFSET(0xF970A90)
#define DIJKJIAGMCB_STOP_OFFSET UNITYSDK_OFFSET(0xF970B30)

inline static constexpr unsigned int DIJKJIAGMCB_TypeDefinitionIndex = 68611;

	class DIJKJIAGMCB : public ::BHPMNMMGLHI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJKJIAGMCB_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJKJIAGMCB_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJKJIAGMCB_STOP_OFFSET))(this);
		}

		::System::Void FJBMPHLOABF(::System::UInt16 a1, ::HMMHDEKAHEA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::HMMHDEKAHEA*))((::PBYTE)hIl2Cpp + DIJKJIAGMCB_FJBMPHLOABF_OFFSET))(this, a1, a2);
		}

	};
