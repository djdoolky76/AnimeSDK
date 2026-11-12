#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGMNKINFKFH.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ODKBNDCMMPB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC69E3C0)
#define ODKBNDCMMPB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC69E3F0)
#define ODKBNDCMMPB___C__INITCOMPONENT_B__0_0_OFFSET UNITYSDK_OFFSET(0xC69E400)

inline static constexpr unsigned int ODKBNDCMMPB___c_TypeDefinitionIndex = 58877;

	class ODKBNDCMMPB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66E90);
		}

		static ::System::Func_2<::DGMNKINFKFH, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::DGMNKINFKFH, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66E98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODKBNDCMMPB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _InitComponent_b__0_0(::DGMNKINFKFH a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::DGMNKINFKFH))((::PBYTE)hIl2Cpp + ODKBNDCMMPB___C__INITCOMPONENT_B__0_0_OFFSET))(this, a1);
		}

	};
