#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCGFCHPPIDH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBNBNGDAAGC_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF5A90)

	class PBNBNGDAAGC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::CCGFCHPPIDH*>* Datas; // 0x10
		::System::Int32 Version; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNBNGDAAGC_CTOR_OFFSET))(this);
		}

	};
