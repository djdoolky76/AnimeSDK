#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EDBLBIFDKAA;
namespace System { template <typename T> class Comparison_1; }

#define IONDIMENNEN___C_OEHLOMCAJGN_OFFSET UNITYSDK_OFFSET(0x1ACC4840)
#define IONDIMENNEN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACC47F0)
#define IONDIMENNEN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC4830)

inline static constexpr unsigned int IONDIMENNEN___c_TypeDefinitionIndex = 41847;

class IONDIMENNEN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IONDIMENNEN___c_TypeDefinitionIndex)->GetStaticField(0x3B400);
	}
	static ::System::Comparison_1<::EDBLBIFDKAA*>** StaticGet___9__22_0()
	{
		return (::System::Comparison_1<::EDBLBIFDKAA*>**)Il2CppClass::FromTypeDefinitionIndex(IONDIMENNEN___c_TypeDefinitionIndex)->GetStaticField(0x3B408);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IONDIMENNEN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONDIMENNEN___C__CTOR_OFFSET))(this);
	}

	::System::Int32 OEHLOMCAJGN(::EDBLBIFDKAA* EJCBEJMGFAJ, ::EDBLBIFDKAA* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::EDBLBIFDKAA*, ::EDBLBIFDKAA*))((::PBYTE)hIl2Cpp + IONDIMENNEN___C_OEHLOMCAJGN_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
