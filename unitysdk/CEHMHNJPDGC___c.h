#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEHMHNJPDGC;
namespace System { class Object; }

#define CEHMHNJPDGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F35A490)
#define CEHMHNJPDGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F35A4D0)
#define CEHMHNJPDGC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F35A4E0)

inline static constexpr unsigned int CEHMHNJPDGC___c_TypeDefinitionIndex = 30233;

	class CEHMHNJPDGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E1C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEHMHNJPDGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHMHNJPDGC___C_CTOR_OFFSET))(this);
		}

		::CEHMHNJPDGC* __cctor_b__33_0()
		{
			return ((::CEHMHNJPDGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHMHNJPDGC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
