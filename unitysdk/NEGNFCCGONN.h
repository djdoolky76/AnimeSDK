#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolHashSet_1; }

#define NEGNFCCGONN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9279A0)
#define NEGNFCCGONN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C927B40)
#define NEGNFCCGONN_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C927A20)
#define NEGNFCCGONN_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C927B00)

inline static constexpr unsigned int NEGNFCCGONN_TypeDefinitionIndex = 43499;

	class NEGNFCCGONN : public ::System::Object
	{
	public:
		::RPG::PoolHashSet_1<::System::Int32>* CFBAAMFMIJE; // 0x10
		::RPG::PoolHashSet_1<::System::Int32>* JDBNDOAKIDC; // 0x18
		::System::Boolean IPKICAFDKEP; // 0x20
		::System::Boolean DHGJDNMJBMF; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNFCCGONN_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNFCCGONN_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNFCCGONN_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNFCCGONN_ONRECYCLE_OFFSET))(this);
		}

	};
