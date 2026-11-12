#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNPPCJMODAB;
namespace System { class Object; }

#define HNPPCJMODAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8E1CA0)
#define HNPPCJMODAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E1CE0)
#define HNPPCJMODAB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F8E1CF0)

inline static constexpr unsigned int HNPPCJMODAB___c_TypeDefinitionIndex = 31876;

	class HNPPCJMODAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNPPCJMODAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPPCJMODAB___C_CTOR_OFFSET))(this);
		}

		::HNPPCJMODAB* __cctor_b__18_0()
		{
			return ((::HNPPCJMODAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPPCJMODAB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
