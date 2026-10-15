#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OBJANKHLNGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8A7B0)
#define OBJANKHLNGO_IKLFLLHAODA_OFFSET UNITYSDK_OFFSET(0x1EC8A5E0)
#define OBJANKHLNGO_JFIAEFHJCEP_OFFSET UNITYSDK_OFFSET(0x1EC89E10)
#define OBJANKHLNGO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1EC8A620)

	class OBJANKHLNGO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::HashSet_1<::System::Object*>*>* LKPPOEGEPIG; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Object*>* FNBNFCIKKEA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJANKHLNGO_CTOR_OFFSET))(this);
		}

		::System::Void JFIAEFHJCEP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBJANKHLNGO_JFIAEFHJCEP_OFFSET))(this, a1);
		}

		::System::Void IKLFLLHAODA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJANKHLNGO_IKLFLLHAODA_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJANKHLNGO_KHGIKBFDLFB_OFFSET))(this);
		}

	};
