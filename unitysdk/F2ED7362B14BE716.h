#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F2ED7362B14BE716_F89FD0521BEFAE9A.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Base::ABTestPlatform::Const { class ABTestRequestParam; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F2ED7362B14BE716_A6C491ACE9185BA6_OFFSET UNITYSDK_OFFSET(0x3A82C00)
#define F2ED7362B14BE716_A816257FDD277773_OFFSET UNITYSDK_OFFSET(0x3A84020)
#define F2ED7362B14BE716_A927E0772EC7829D_OFFSET UNITYSDK_OFFSET(0x3A84CE0)
#define F2ED7362B14BE716_A959627E27D60312_OFFSET UNITYSDK_OFFSET(0x3A831E0)
#define F2ED7362B14BE716_AAA6423F72D3F6CE_OFFSET UNITYSDK_OFFSET(0x3A836E0)
#define F2ED7362B14BE716_AC1FD96A2261648A_OFFSET UNITYSDK_OFFSET(0x3A82E30)
#define F2ED7362B14BE716_AC39695106279B61_OFFSET UNITYSDK_OFFSET(0x3A85200)
#define F2ED7362B14BE716_AE93ED57D5A91E9C_OFFSET UNITYSDK_OFFSET(0x3A83E60)
#define F2ED7362B14BE716_E4435E7EFF0B44E9_OFFSET UNITYSDK_OFFSET(0x3A84D50)
#define F2ED7362B14BE716_E5D9D9982F3A4ED6_OFFSET UNITYSDK_OFFSET(0x3A83C30)
#define F2ED7362B14BE716_F499CC75D46B5F05_OFFSET UNITYSDK_OFFSET(0x3A83A30)
#define F2ED7362B14BE716_F4BB930EBDB55DBB_OFFSET UNITYSDK_OFFSET(0x3A842F0)
#define F2ED7362B14BE716_F5D4F023F4820EE6_OFFSET UNITYSDK_OFFSET(0x3A839B0)
#define F2ED7362B14BE716_F8E1F98EC512FA41_OFFSET UNITYSDK_OFFSET(0x3A82D90)
#define F2ED7362B14BE716__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A85770)
#define F2ED7362B14BE716__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F2ED7362B14BE716_TypeDefinitionIndex = 12033;

class F2ED7362B14BE716 : public ::System::Object
{
public:
	static ::F2ED7362B14BE716** StaticGet_EE999965A1D2099B()
	{
		return (::F2ED7362B14BE716**)Il2CppClass::FromTypeDefinitionIndex(F2ED7362B14BE716_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void E4435E7EFF0B44E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2ED7362B14BE716_E4435E7EFF0B44E9_OFFSET))(this);
	}

	::System::Void A816257FDD277773(::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + F2ED7362B14BE716_A816257FDD277773_OFFSET))(this, E04D2BE64FCE9814, B083BE7841B347C4);
	}

	::System::Void A927E0772EC7829D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2ED7362B14BE716_A927E0772EC7829D_OFFSET))(this);
	}

	::System::Void F5D4F023F4820EE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2ED7362B14BE716_F5D4F023F4820EE6_OFFSET))(this);
	}

	::System::Void AC39695106279B61(::MiHoYo::SDK::NetworkResponseModel* E225F8A5D4C22E30)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + F2ED7362B14BE716_AC39695106279B61_OFFSET))(this, E225F8A5D4C22E30);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2ED7362B14BE716__CTOR_OFFSET))(this);
	}

	::System::Void E5D9D9982F3A4ED6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2ED7362B14BE716_E5D9D9982F3A4ED6_OFFSET))(this);
	}

	::System::Void F499CC75D46B5F05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2ED7362B14BE716_F499CC75D46B5F05_OFFSET))(this);
	}

	::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam* AC1FD96A2261648A()
	{
		return ((::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + F2ED7362B14BE716_AC1FD96A2261648A_OFFSET))(this);
	}

	::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam* F8E1F98EC512FA41(::F2ED7362B14BE716_F89FD0521BEFAE9A F43D8AE9152BE827)
	{
		return ((::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam*(*)(::PVOID, ::F2ED7362B14BE716_F89FD0521BEFAE9A))((::PBYTE)hIl2Cpp + F2ED7362B14BE716_F8E1F98EC512FA41_OFFSET))(this, F43D8AE9152BE827);
	}

	::System::Void F4BB930EBDB55DBB(::System::Collections::Generic::List_1<::System::Object*>* A92488C34DD34AC7, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + F2ED7362B14BE716_F4BB930EBDB55DBB_OFFSET))(this, A92488C34DD34AC7, E04D2BE64FCE9814);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F2ED7362B14BE716__CCTOR_OFFSET))();
	}

	::System::String* A6C491ACE9185BA6(::System::String* E4BEDD740DCBB8D6, ::System::String* AF94CBD00018A704)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + F2ED7362B14BE716_A6C491ACE9185BA6_OFFSET))(this, E4BEDD740DCBB8D6, AF94CBD00018A704);
	}

	::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam* AAA6423F72D3F6CE()
	{
		return ((::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + F2ED7362B14BE716_AAA6423F72D3F6CE_OFFSET))(this);
	}

	::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam* A959627E27D60312()
	{
		return ((::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + F2ED7362B14BE716_A959627E27D60312_OFFSET))(this);
	}

	::System::Void AE93ED57D5A91E9C(::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + F2ED7362B14BE716_AE93ED57D5A91E9C_OFFSET))(this, E04D2BE64FCE9814);
	}
};
