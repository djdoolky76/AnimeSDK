#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/System/Attribute.h"

class F08677DD76453A70;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F5C6C8817D95C192_ABD1FB5C50876BE4_OFFSET UNITYSDK_OFFSET(0x269BCD0)
#define F5C6C8817D95C192_FBD08428AD1DE417_OFFSET UNITYSDK_OFFSET(0x269BDD0)
#define F5C6C8817D95C192__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F5C6C8817D95C192_TypeDefinitionIndex = 6476;

class F5C6C8817D95C192 : public ::System::Attribute
{
public:
	static ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::B07850EA97DBB75A<::System::Boolean, ::System::Boolean>>** StaticGet_FEF76B33F1CC3DA7()
	{
		return (::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::B07850EA97DBB75A<::System::Boolean, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(F5C6C8817D95C192_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Boolean F7D2BEAD763FDC81; // 0x10
	::System::Boolean FD30EB030853A2A4; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5C6C8817D95C192__CTOR_OFFSET))(this);
	}

	static ::B07850EA97DBB75A<::System::Boolean, ::System::Boolean> ABD1FB5C50876BE4(::F08677DD76453A70* ACDE58E97E37D13C)
	{
		return ((::B07850EA97DBB75A<::System::Boolean, ::System::Boolean>(*)(::F08677DD76453A70*))((::PBYTE)hIl2Cpp + F5C6C8817D95C192_ABD1FB5C50876BE4_OFFSET))(ACDE58E97E37D13C);
	}

	static ::System::Void FBD08428AD1DE417(::E2DE926113CB084F F564B9A293C703ED, ::System::Boolean B06F86FFF438B163, ::System::Boolean A1DF3F581D97E421)
	{
		return ((::System::Void(*)(::E2DE926113CB084F, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + F5C6C8817D95C192_FBD08428AD1DE417_OFFSET))(F564B9A293C703ED, B06F86FFF438B163, A1DF3F581D97E421);
	}
};
