#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BICNOEEBFNC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGAGHNJOKHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90D670)

inline static constexpr unsigned int LGAGHNJOKHI_TypeDefinitionIndex = 43190;

	class LGAGHNJOKHI : public ::System::Object
	{
	public:
		::BICNOEEBFNC* MPBILLMIJFB; // 0x10
		::BICNOEEBFNC* PACHKOJNGDM; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::BICNOEEBFNC*>* HJLNFLFCKJP; // 0x20
		::BICNOEEBFNC* APIKHHFLDJE; // 0x28
		::BICNOEEBFNC* MKOJHNDJAJC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAGHNJOKHI_CTOR_OFFSET))(this);
		}

	};
