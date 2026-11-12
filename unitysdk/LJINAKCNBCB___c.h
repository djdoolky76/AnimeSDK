#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJINAKCNBCB;
namespace System { class Object; }

#define LJINAKCNBCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCA4860)
#define LJINAKCNBCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCA48A0)
#define LJINAKCNBCB___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FCA48B0)

inline static constexpr unsigned int LJINAKCNBCB___c_TypeDefinitionIndex = 33616;

	class LJINAKCNBCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x398C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJINAKCNBCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJINAKCNBCB___C_CTOR_OFFSET))(this);
		}

		::LJINAKCNBCB* __cctor_b__43_0()
		{
			return ((::LJINAKCNBCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJINAKCNBCB___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
