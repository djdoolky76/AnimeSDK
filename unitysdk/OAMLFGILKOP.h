#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OAMLFGILKOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C979430)

inline static constexpr unsigned int OAMLFGILKOP_TypeDefinitionIndex = 42235;

	class OAMLFGILKOP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* AOHKIBKGEGO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMLFGILKOP_CTOR_OFFSET))(this);
		}

	};
