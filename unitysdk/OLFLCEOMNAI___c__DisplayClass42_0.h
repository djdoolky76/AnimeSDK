#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class HFCOGLIEHFB;
namespace System { class String; }

#define OLFLCEOMNAI___C__DISPLAYCLASS42_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBEFFDB0)
#define OLFLCEOMNAI___C__DISPLAYCLASS42_0__GETASYNCOPERATION_B__0_OFFSET UNITYSDK_OFFSET(0xBF00D80)

inline static constexpr unsigned int OLFLCEOMNAI___c__DisplayClass42_0_TypeDefinitionIndex = 82262;

	class OLFLCEOMNAI___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFLCEOMNAI___C__DISPLAYCLASS42_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAsyncOperation_b__0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::HFCOGLIEHFB*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::HFCOGLIEHFB*>))((::PBYTE)hIl2Cpp + OLFLCEOMNAI___C__DISPLAYCLASS42_0__GETASYNCOPERATION_B__0_OFFSET))(this, a1);
		}

	};
