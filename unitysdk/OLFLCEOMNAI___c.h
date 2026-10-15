#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OLFLCEOMNAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBF00C90)
#define OLFLCEOMNAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBF00CD0)
#define OLFLCEOMNAI___C__GETCASEFILEAUTO_B__26_0_OFFSET UNITYSDK_OFFSET(0xBF00CE0)
#define OLFLCEOMNAI___C__GETCASEFILEAUTO_B__26_1_OFFSET UNITYSDK_OFFSET(0xBF00D00)

inline static constexpr unsigned int OLFLCEOMNAI___c_TypeDefinitionIndex = 82259;

	class OLFLCEOMNAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C7B0);
		}

		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C7B8);
		}

		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C7C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLFLCEOMNAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFLCEOMNAI___C_CTOR_OFFSET))(this);
		}

		::System::String* _GetCaseFileAuto_b__26_0(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OLFLCEOMNAI___C__GETCASEFILEAUTO_B__26_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetCaseFileAuto_b__26_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OLFLCEOMNAI___C__GETCASEFILEAUTO_B__26_1_OFFSET))(this, a1);
		}

	};
