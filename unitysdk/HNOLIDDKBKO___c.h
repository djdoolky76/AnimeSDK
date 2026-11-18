#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMFAHGEFDFJ;
namespace System { template <typename T> class Predicate_1; }

#define HNOLIDDKBKO___C_LMJLFACFKCD_OFFSET UNITYSDK_OFFSET(0x17A60630)
#define HNOLIDDKBKO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A605E0)
#define HNOLIDDKBKO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A60620)

inline static constexpr unsigned int HNOLIDDKBKO___c_TypeDefinitionIndex = 65216;

class HNOLIDDKBKO___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::AMFAHGEFDFJ*>** StaticGet___9__5_1()
	{
		return (::System::Predicate_1<::AMFAHGEFDFJ*>**)Il2CppClass::FromTypeDefinitionIndex(HNOLIDDKBKO___c_TypeDefinitionIndex)->GetStaticField(0x32270);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HNOLIDDKBKO___c_TypeDefinitionIndex)->GetStaticField(0x32278);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNOLIDDKBKO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOLIDDKBKO___C__CTOR_OFFSET))(this);
	}

	::System::Boolean LMJLFACFKCD(::AMFAHGEFDFJ* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::AMFAHGEFDFJ*))((::PBYTE)hIl2Cpp + HNOLIDDKBKO___C_LMJLFACFKCD_OFFSET))(this, LJBPECKCCEA);
	}
};
