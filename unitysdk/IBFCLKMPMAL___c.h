#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBFCLKMPMAL;
namespace System { class Object; }

#define IBFCLKMPMAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203AD570)
#define IBFCLKMPMAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203AD5A0)
#define IBFCLKMPMAL___C___CCTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x203AD5B0)

inline static constexpr unsigned int IBFCLKMPMAL___c_TypeDefinitionIndex = 35023;

	class IBFCLKMPMAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBFCLKMPMAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFCLKMPMAL___C_CTOR_OFFSET))(this);
		}

		::IBFCLKMPMAL* __cctor_b__36_0()
		{
			return ((::IBFCLKMPMAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFCLKMPMAL___C___CCTOR_B__36_0_OFFSET))(this);
		}

	};
