#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/B8586E816E688A32.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AD8ADF060E5AA10D_B013CC445A3716A7_OFFSET UNITYSDK_OFFSET(0x4267910)
#define AD8ADF060E5AA10D_F88D4ACD44A72851_OFFSET UNITYSDK_OFFSET(0x42674B0)
#define AD8ADF060E5AA10D_FFA93115E7068ED1_OFFSET UNITYSDK_OFFSET(0x42676F0)
#define AD8ADF060E5AA10D__CCTOR_OFFSET UNITYSDK_OFFSET(0x4267B40)

inline static constexpr unsigned int AD8ADF060E5AA10D_TypeDefinitionIndex = 13807;

class AD8ADF060E5AA10D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_FFE18A1698E842D6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AD8ADF060E5AA10D_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::A418C49FA6A8C1F7::B8586E816E688A32>** StaticGet_AB76F266D8CA8896()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::A418C49FA6A8C1F7::B8586E816E688A32>**)Il2CppClass::FromTypeDefinitionIndex(AD8ADF060E5AA10D_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AD8ADF060E5AA10D__CCTOR_OFFSET))();
	}

	static ::System::Void FFA93115E7068ED1(::System::Type* FED784FF9530A296, ::System::Int32& F2BEFED1494357EF, ::System::Int32& ED43E31B6A7BF8BD)
	{
		return ((::System::Void(*)(::System::Type*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + AD8ADF060E5AA10D_FFA93115E7068ED1_OFFSET))(FED784FF9530A296, F2BEFED1494357EF, ED43E31B6A7BF8BD);
	}

	static ::System::Int32 F88D4ACD44A72851(::System::Type* FED784FF9530A296, ::System::String* FC1D29B360A1527E)
	{
		return ((::System::Int32(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + AD8ADF060E5AA10D_F88D4ACD44A72851_OFFSET))(FED784FF9530A296, FC1D29B360A1527E);
	}

	static ::A418C49FA6A8C1F7::B8586E816E688A32 B013CC445A3716A7(::System::Type* F4EBAE5592197189)
	{
		return ((::A418C49FA6A8C1F7::B8586E816E688A32(*)(::System::Type*))((::PBYTE)hIl2Cpp + AD8ADF060E5AA10D_B013CC445A3716A7_OFFSET))(F4EBAE5592197189);
	}
};
