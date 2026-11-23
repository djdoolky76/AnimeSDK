#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E5FF7FE527FABB79_BCF68E454C0089E1_OFFSET UNITYSDK_OFFSET(0x3F2C060)
#define E5FF7FE527FABB79__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F2C180)

inline static constexpr unsigned int E5FF7FE527FABB79_TypeDefinitionIndex = 19821;

class E5FF7FE527FABB79 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_F251DE3D54055B30()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(E5FF7FE527FABB79_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::System::Int32>*>** StaticGet_B55B55FC70BBC95D()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(E5FF7FE527FABB79_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void BCF68E454C0089E1(::System::Type* A288CB28FC2A6DA3, ::System::Func_1<::System::Int32>* EF4E5DB9FE253199)
	{
		return ((::System::Void(*)(::System::Type*, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + E5FF7FE527FABB79_BCF68E454C0089E1_OFFSET))(A288CB28FC2A6DA3, EF4E5DB9FE253199);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E5FF7FE527FABB79__CCTOR_OFFSET))();
	}
};
