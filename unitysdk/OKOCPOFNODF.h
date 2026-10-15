#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADBMFDNMBIJ.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKOCPOFNODF_CTOR_OFFSET UNITYSDK_OFFSET(0xBEEB8B0)

inline static constexpr unsigned int OKOCPOFNODF_TypeDefinitionIndex = 57755;

	class OKOCPOFNODF : public ::System::Object
	{
	public:
		::ADBMFDNMBIJ CFKOIAGCFDA; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* FMCJJBALBEN; // 0x28
		::ADBMFDNMBIJ LKFNPPCHCII; // 0x30
		::ADBMFDNMBIJ KIPAGNCANAJ; // 0x48
		::ADBMFDNMBIJ FMIINGDFPKN; // 0x60
		::System::String* OENAMINOLLF; // 0x78
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x80
		::System::Boolean BBBAJEEMOIE; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOCPOFNODF_CTOR_OFFSET))(this);
		}

	};
