#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DACBBLDKCFF;
class FKNABMFHPCN;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DACBBLDKCFF___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBC330)
#define DACBBLDKCFF___C__DISPLAYCLASS6_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0xDFBC560)
#define DACBBLDKCFF___C__DISPLAYCLASS6_0__CREATE_B__1_OFFSET UNITYSDK_OFFSET(0xDFBC590)

	class DACBBLDKCFF___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* sortedExamIDs; // 0x10
		::DACBBLDKCFF* __4__this; // 0x18
		::System::UInt32 currentExamID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACBBLDKCFF___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::FKNABMFHPCN* _Create_b__0(::System::UInt32 a1)
		{
			return ((::FKNABMFHPCN*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DACBBLDKCFF___C__DISPLAYCLASS6_0__CREATE_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _Create_b__1(::FKNABMFHPCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNABMFHPCN*))((::PBYTE)hIl2Cpp + DACBBLDKCFF___C__DISPLAYCLASS6_0__CREATE_B__1_OFFSET))(this, a1);
		}

	};
