#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define ANEMEKJBPMM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C89E4B0)
#define ANEMEKJBPMM_CMJOPOOKNPG_OFFSET UNITYSDK_OFFSET(0x1C89E500)
#define ANEMEKJBPMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C89E5F0)
#define ANEMEKJBPMM_GCBAEEAJNGH_OFFSET UNITYSDK_OFFSET(0x1C89E580)

	class ANEMEKJBPMM : public ::System::Object
	{
	public:
		::UnityEngine::Bounds HFCEGBIDIME; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEMEKJBPMM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEMEKJBPMM_CLEAR_OFFSET))(this);
		}

		::System::UInt32 CMJOPOOKNPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEMEKJBPMM_CMJOPOOKNPG_OFFSET))(this);
		}

		::UnityEngine::Bounds GCBAEEAJNGH()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEMEKJBPMM_GCBAEEAJNGH_OFFSET))(this);
		}

	};
