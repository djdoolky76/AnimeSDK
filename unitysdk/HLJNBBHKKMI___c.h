#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HLJNBBHKKMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x198A5A20)
#define HLJNBBHKKMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x198A5A60)
#define HLJNBBHKKMI___C__INITCUSTOMERSERVICES_B__3_0_OFFSET UNITYSDK_OFFSET(0x198A5A70)

inline static constexpr unsigned int HLJNBBHKKMI___c_TypeDefinitionIndex = 79937;

	class HLJNBBHKKMI___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19C60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19C68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLJNBBHKKMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJNBBHKKMI___C_CTOR_OFFSET))(this);
		}

		::System::Void _InitCustomerServices_b__3_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HLJNBBHKKMI___C__INITCUSTOMERSERVICES_B__3_0_OFFSET))(this, a1);
		}

	};
