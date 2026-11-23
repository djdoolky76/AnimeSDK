#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/System/Object.h"

class AC845DBFA49DFB18;
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E940CF21EA68CD35_FEED204C746A0846_A46C4318CBCB0C48_OFFSET UNITYSDK_OFFSET(0x3C20120)
#define E940CF21EA68CD35_FEED204C746A0846__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C20270)
#define E940CF21EA68CD35_FEED204C746A0846__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E940CF21EA68CD35_FEED204C746A0846_TypeDefinitionIndex = 11471;

class E940CF21EA68CD35_FEED204C746A0846 : public ::System::Object
{
public:
	static ::E940CF21EA68CD35_FEED204C746A0846** StaticGet_FB0A7EB463FA294A()
	{
		return (::E940CF21EA68CD35_FEED204C746A0846**)Il2CppClass::FromTypeDefinitionIndex(E940CF21EA68CD35_FEED204C746A0846_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_1<::System::Collections::Generic::Dictionary_2<::B07850EA97DBB75A<::System::Type*, ::System::String*>, ::AC845DBFA49DFB18*>*>** StaticGet_E992BCAF09211331()
	{
		return (::System::Func_1<::System::Collections::Generic::Dictionary_2<::B07850EA97DBB75A<::System::Type*, ::System::String*>, ::AC845DBFA49DFB18*>*>**)Il2CppClass::FromTypeDefinitionIndex(E940CF21EA68CD35_FEED204C746A0846_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E940CF21EA68CD35_FEED204C746A0846__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E940CF21EA68CD35_FEED204C746A0846__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::B07850EA97DBB75A<::System::Type*, ::System::String*>, ::AC845DBFA49DFB18*>* A46C4318CBCB0C48()
	{
		return ((::System::Collections::Generic::Dictionary_2<::B07850EA97DBB75A<::System::Type*, ::System::String*>, ::AC845DBFA49DFB18*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E940CF21EA68CD35_FEED204C746A0846_A46C4318CBCB0C48_OFFSET))(this);
	}
};
