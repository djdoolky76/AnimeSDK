#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }

#define OGLMFCFKJGI_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C95EE10)
#define OGLMFCFKJGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C95EF40)
#define OGLMFCFKJGI_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C95EE70)
#define OGLMFCFKJGI_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C95EF00)

inline static constexpr unsigned int OGLMFCFKJGI_TypeDefinitionIndex = 43323;

	class OGLMFCFKJGI : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::Int32>* DHMGJGKEPJE; // 0x10
		::System::Boolean GKLHMOLJJDJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLMFCFKJGI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLMFCFKJGI_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLMFCFKJGI_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLMFCFKJGI_ONRECYCLE_OFFSET))(this);
		}

	};
