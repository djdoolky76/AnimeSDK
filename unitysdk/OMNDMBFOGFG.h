#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMNDMBFOGFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96FC10)

inline static constexpr unsigned int OMNDMBFOGFG_TypeDefinitionIndex = 43785;

	class OMNDMBFOGFG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* CAFKGHLKCEJ; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* ELDOPKCIKNE; // 0x18
		::System::Int32 MGELBDHFOIJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNDMBFOGFG_CTOR_OFFSET))(this);
		}

	};
