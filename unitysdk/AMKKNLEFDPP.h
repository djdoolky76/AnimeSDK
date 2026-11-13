#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGLMFCFKJGI;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define AMKKNLEFDPP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D874390)
#define AMKKNLEFDPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D874560)
#define AMKKNLEFDPP_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1D8744D0)
#define AMKKNLEFDPP_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1D874520)

inline static constexpr unsigned int AMKKNLEFDPP_TypeDefinitionIndex = 44305;

	class AMKKNLEFDPP : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::Int32, ::OGLMFCFKJGI*>* CMNGBMONJLE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKKNLEFDPP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKKNLEFDPP_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKKNLEFDPP_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKKNLEFDPP_ONRECYCLE_OFFSET))(this);
		}

	};
