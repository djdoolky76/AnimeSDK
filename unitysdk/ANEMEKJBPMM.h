#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define ANEMEKJBPMM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DA1FB00)
#define ANEMEKJBPMM_CMJOPOOKNPG_OFFSET UNITYSDK_OFFSET(0x1DA1FB50)
#define ANEMEKJBPMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1FC40)
#define ANEMEKJBPMM_GCBAEEAJNGH_OFFSET UNITYSDK_OFFSET(0x1DA1FBD0)

inline static constexpr unsigned int ANEMEKJBPMM_TypeDefinitionIndex = 44231;

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
