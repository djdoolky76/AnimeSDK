#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGJFAFONDHN;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define AANBMDMHDLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18C81FD0)
#define AANBMDMHDLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18C82000)
#define AANBMDMHDLE___C__POSTINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0x18C82010)
#define AANBMDMHDLE___C__POSTINIT_B__6_1_OFFSET UNITYSDK_OFFSET(0x18C82020)

inline static constexpr unsigned int AANBMDMHDLE___c_TypeDefinitionIndex = 50439;

	class AANBMDMHDLE___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::GGJFAFONDHN*>** StaticGet___9__6_1()
		{
			return (::System::Action_1<::GGJFAFONDHN*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37680);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37688);
		}

		static ::System::Action_1<::GGJFAFONDHN*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::GGJFAFONDHN*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AANBMDMHDLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANBMDMHDLE___C_CTOR_OFFSET))(this);
		}

		::System::Void _PostInit_b__6_0(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + AANBMDMHDLE___C__POSTINIT_B__6_0_OFFSET))(this, a1);
		}

		::System::Void _PostInit_b__6_1(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + AANBMDMHDLE___C__POSTINIT_B__6_1_OFFSET))(this, a1);
		}

	};
