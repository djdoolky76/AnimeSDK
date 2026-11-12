#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNHLAKBNPCB;
namespace System { class Object; }

#define KNHLAKBNPCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBDFAE0)
#define KNHLAKBNPCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBDFB20)
#define KNHLAKBNPCB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FBDFB30)

inline static constexpr unsigned int KNHLAKBNPCB___c_TypeDefinitionIndex = 35607;

	class KNHLAKBNPCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CEF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNHLAKBNPCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHLAKBNPCB___C_CTOR_OFFSET))(this);
		}

		::KNHLAKBNPCB* __cctor_b__18_0()
		{
			return ((::KNHLAKBNPCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHLAKBNPCB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
