#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJCOLAEIJFM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EFGMIPLHEMN_CTOR_OFFSET UNITYSDK_OFFSET(0x13A4BDA0)
#define EFGMIPLHEMN_KNBILEGKBKF_OFFSET UNITYSDK_OFFSET(0x13A4BD30)
#define EFGMIPLHEMN_NJMDNKDJCDG_OFFSET UNITYSDK_OFFSET(0x13A4BCA0)

inline static constexpr unsigned int EFGMIPLHEMN_TypeDefinitionIndex = 57452;

	class EFGMIPLHEMN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* CCBPJFHKOGM; // 0x10
		::System::Boolean OFLMCLABBLC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGMIPLHEMN_CTOR_OFFSET))(this);
		}

		::System::Void NJMDNKDJCDG(::HJCOLAEIJFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJCOLAEIJFM*))((::PBYTE)hIl2Cpp + EFGMIPLHEMN_NJMDNKDJCDG_OFFSET))(this, a1);
		}

		::System::Void KNBILEGKBKF(::HJCOLAEIJFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJCOLAEIJFM*))((::PBYTE)hIl2Cpp + EFGMIPLHEMN_KNBILEGKBKF_OFFSET))(this, a1);
		}

	};
