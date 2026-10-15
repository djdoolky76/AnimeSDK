#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OEIJDDBIPAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7CD380)

	class OEIJDDBIPAJ : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HIBLIGLMHAJ; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* PHFKNDDKJEL; // 0x18
		::System::UInt32 LHHJFMMCBAF; // 0x20
		::System::UInt32 PJBALOHGFHF; // 0x24
		::System::UInt32 HLOEMIJPOKH; // 0x28
		::System::UInt32 EGLKIIIECCN; // 0x2C
		::System::UInt64 EMPJEDJFLMM; // 0x30
		::System::UInt32 PFFOFPKNCDB; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIJDDBIPAJ_CTOR_OFFSET))(this);
		}

	};
