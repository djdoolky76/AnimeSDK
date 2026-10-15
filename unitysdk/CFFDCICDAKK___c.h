#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFFDCICDAKK;
namespace System { class Object; }

#define CFFDCICDAKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E074240)
#define CFFDCICDAKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E074280)
#define CFFDCICDAKK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E074290)

inline static constexpr unsigned int CFFDCICDAKK___c_TypeDefinitionIndex = 29499;

	class CFFDCICDAKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFFDCICDAKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFDCICDAKK___C_CTOR_OFFSET))(this);
		}

		::CFFDCICDAKK* __cctor_b__23_0()
		{
			return ((::CFFDCICDAKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFDCICDAKK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
