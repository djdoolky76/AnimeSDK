#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKLLJAMLBCB;
namespace System { class Object; }

#define NKLLJAMLBCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB2E250)
#define NKLLJAMLBCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB2E290)
#define NKLLJAMLBCB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB2E2A0)

inline static constexpr unsigned int NKLLJAMLBCB___c_TypeDefinitionIndex = 34360;

	class NKLLJAMLBCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKLLJAMLBCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLLJAMLBCB___C_CTOR_OFFSET))(this);
		}

		::NKLLJAMLBCB* __cctor_b__28_0()
		{
			return ((::NKLLJAMLBCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLLJAMLBCB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
