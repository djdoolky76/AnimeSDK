#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define HIIBKHBAJOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19031880)
#define HIIBKHBAJOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x190318C0)
#define HIIBKHBAJOI___C__CREATEITEM_B__1_0_OFFSET UNITYSDK_OFFSET(0x190318D0)
#define HIIBKHBAJOI___C__CREATEITEM_B__1_1_OFFSET UNITYSDK_OFFSET(0x19031970)
#define HIIBKHBAJOI___C__CREATEITEM_B__1_2_OFFSET UNITYSDK_OFFSET(0x19031A10)

inline static constexpr unsigned int HIIBKHBAJOI___c_TypeDefinitionIndex = 67481;

	class HIIBKHBAJOI___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::String*>** StaticGet___9__1_1()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC0C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC0C8);
		}

		static ::System::Func_1<::System::String*>** StaticGet___9__1_2()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC0D0);
		}

		static ::System::Func_1<::System::String*>** StaticGet___9__1_0()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC0D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIIBKHBAJOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIBKHBAJOI___C_CTOR_OFFSET))(this);
		}

		::System::String* _CreateItem_b__1_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIBKHBAJOI___C__CREATEITEM_B__1_0_OFFSET))(this);
		}

		::System::String* _CreateItem_b__1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIBKHBAJOI___C__CREATEITEM_B__1_1_OFFSET))(this);
		}

		::System::String* _CreateItem_b__1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIBKHBAJOI___C__CREATEITEM_B__1_2_OFFSET))(this);
		}

	};
