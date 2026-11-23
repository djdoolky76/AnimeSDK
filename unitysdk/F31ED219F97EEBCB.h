#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F31ED219F97EEBCB_A89D0647875204E7_OFFSET UNITYSDK_OFFSET(0x3A9A1F0)
#define F31ED219F97EEBCB_ACF1EA5462DF35A5_OFFSET UNITYSDK_OFFSET(0x3A99DD0)
#define F31ED219F97EEBCB_B6C0084383398C61_OFFSET UNITYSDK_OFFSET(0x3A99C80)
#define F31ED219F97EEBCB_B85EDC039BF35861_OFFSET UNITYSDK_OFFSET(0x3A9A2C0)
#define F31ED219F97EEBCB_B9757D926DCA12C9_OFFSET UNITYSDK_OFFSET(0x3A9A3E0)
#define F31ED219F97EEBCB_BF11CBAE15BE2E8A_OFFSET UNITYSDK_OFFSET(0x3A9A500)
#define F31ED219F97EEBCB_FBE40FE7690003C5_OFFSET UNITYSDK_OFFSET(0x3A9A650)
#define F31ED219F97EEBCB__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A9A7A0)
#define F31ED219F97EEBCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F31ED219F97EEBCB_TypeDefinitionIndex = 12035;

class F31ED219F97EEBCB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_ED114265B0167CBC()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(F31ED219F97EEBCB_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_A99F9B719E600480()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(F31ED219F97EEBCB_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::String** StaticGet_BFDA48DFC4A8AB79()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(F31ED219F97EEBCB_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::String** StaticGet_F55EF6C471FEBE9C()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(F31ED219F97EEBCB_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F31ED219F97EEBCB__CTOR_OFFSET))(this);
	}

	static ::System::String* FBE40FE7690003C5()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + F31ED219F97EEBCB_FBE40FE7690003C5_OFFSET))();
	}

	static ::Il2CppArray<::System::String*>* A89D0647875204E7()
	{
		return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + F31ED219F97EEBCB_A89D0647875204E7_OFFSET))();
	}

	static ::System::String* B9757D926DCA12C9()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + F31ED219F97EEBCB_B9757D926DCA12C9_OFFSET))();
	}

	static ::System::String* BF11CBAE15BE2E8A()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + F31ED219F97EEBCB_BF11CBAE15BE2E8A_OFFSET))();
	}

	static ::System::String* B85EDC039BF35861()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + F31ED219F97EEBCB_B85EDC039BF35861_OFFSET))();
	}

	static ::System::String* B6C0084383398C61()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + F31ED219F97EEBCB_B6C0084383398C61_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F31ED219F97EEBCB__CCTOR_OFFSET))();
	}

	static ::System::Void ACF1EA5462DF35A5()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F31ED219F97EEBCB_ACF1EA5462DF35A5_OFFSET))();
	}
};
