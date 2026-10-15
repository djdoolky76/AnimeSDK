#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCFCFDIFPFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C6030)

inline static constexpr unsigned int JCFCFDIFPFB_TypeDefinitionIndex = 36910;

	class JCFCFDIFPFB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* LDBICDOGOJE; // 0x10
		::System::UInt64 DKGFAKFBDDD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFCFDIFPFB_CTOR_OFFSET))(this);
		}

	};
