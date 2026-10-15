#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFCOGLIEHFB;
namespace System { class String; }
namespace System::Collections::Generic { class KeyValuePair; }

#define OLFLCEOMNAI___C__DISPLAYCLASS42_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF07370)
#define OLFLCEOMNAI___C__DISPLAYCLASS42_0__GETASYNCOPERATION_B__0_OFFSET UNITYSDK_OFFSET(0xBF08340)

inline static constexpr unsigned int OLFLCEOMNAI___c__DisplayClass42_0_TypeDefinitionIndex = 82263;

	class OLFLCEOMNAI___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFLCEOMNAI___C__DISPLAYCLASS42_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAsyncOperation_b__0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + OLFLCEOMNAI___C__DISPLAYCLASS42_0__GETASYNCOPERATION_B__0_OFFSET))(this, a1);
		}

	};
