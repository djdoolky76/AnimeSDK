#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
template <typename T1, typename T2> class F34A365CFD193D25;

#define A531398FC2C812D9_A9699C33A1E617F1_OFFSET UNITYSDK_OFFSET(0x3D1F8E0)
#define A531398FC2C812D9_B9EA4AD769BFE85F_OFFSET UNITYSDK_OFFSET(0x3D1F820)
#define A531398FC2C812D9__CCTOR_OFFSET UNITYSDK_OFFSET(0x3D1F970)
#define A531398FC2C812D9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A531398FC2C812D9_TypeDefinitionIndex = 10910;

class A531398FC2C812D9 : public ::System::Object
{
public:
	static ::F34A365CFD193D25<::System::String*, ::System::Object*>** StaticGet_F570209FBAD27AAD()
	{
		return (::F34A365CFD193D25<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(A531398FC2C812D9_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::String* F79B4D487F303AB2; // 0x10

	::System::Object* B9EA4AD769BFE85F(::System::String* F79B4D487F303AB2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A531398FC2C812D9_B9EA4AD769BFE85F_OFFSET))(this, F79B4D487F303AB2);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A531398FC2C812D9__CTOR_OFFSET))(this);
	}

	::System::Void A9699C33A1E617F1(::System::Object* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + A531398FC2C812D9_A9699C33A1E617F1_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A531398FC2C812D9__CCTOR_OFFSET))();
	}
};
