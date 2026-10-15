#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGLMFCFKJGI;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define AMKKNLEFDPP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8700A0)
#define AMKKNLEFDPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8702C0)
#define AMKKNLEFDPP_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C870210)
#define AMKKNLEFDPP_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C870280)

inline static constexpr unsigned int AMKKNLEFDPP_TypeDefinitionIndex = 43324;

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
