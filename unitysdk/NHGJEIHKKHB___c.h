#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHGJEIHKKHB;
namespace System { class Object; }

#define NHGJEIHKKHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAEE000)
#define NHGJEIHKKHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAEE030)
#define NHGJEIHKKHB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EAEE040)

inline static constexpr unsigned int NHGJEIHKKHB___c_TypeDefinitionIndex = 33202;

	class NHGJEIHKKHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x647B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHGJEIHKKHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJEIHKKHB___C_CTOR_OFFSET))(this);
		}

		::NHGJEIHKKHB* __cctor_b__38_0()
		{
			return ((::NHGJEIHKKHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJEIHKKHB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
