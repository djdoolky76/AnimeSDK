#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGJFAFONDHN;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define AANBMDMHDLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB0D1F40)
#define AANBMDMHDLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB0D1F70)
#define AANBMDMHDLE___C__POSTINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0xB0D1F80)
#define AANBMDMHDLE___C__POSTINIT_B__6_1_OFFSET UNITYSDK_OFFSET(0xB0D1F90)

inline static constexpr unsigned int AANBMDMHDLE___c_TypeDefinitionIndex = 49363;

	class AANBMDMHDLE___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::GGJFAFONDHN*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::GGJFAFONDHN*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D0C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D0C8);
		}

		static ::System::Action_1<::GGJFAFONDHN*>** StaticGet___9__6_1()
		{
			return (::System::Action_1<::GGJFAFONDHN*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D0D0);
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
