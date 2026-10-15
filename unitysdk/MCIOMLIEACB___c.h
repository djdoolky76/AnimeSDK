#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCIOMLIEACB;
namespace System { class Object; }

#define MCIOMLIEACB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CB370)
#define MCIOMLIEACB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CB3B0)
#define MCIOMLIEACB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9CB3C0)

inline static constexpr unsigned int MCIOMLIEACB___c_TypeDefinitionIndex = 31973;

	class MCIOMLIEACB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A4E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCIOMLIEACB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIOMLIEACB___C_CTOR_OFFSET))(this);
		}

		::MCIOMLIEACB* __cctor_b__28_0()
		{
			return ((::MCIOMLIEACB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIOMLIEACB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
