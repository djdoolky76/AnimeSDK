#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBDOJBJDMOI;
namespace System { class Object; }

#define KBDOJBJDMOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7EC290)
#define KBDOJBJDMOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7EC2C0)
#define KBDOJBJDMOI___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E7EC2D0)

inline static constexpr unsigned int KBDOJBJDMOI___c_TypeDefinitionIndex = 33900;

	class KBDOJBJDMOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xECD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBDOJBJDMOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDOJBJDMOI___C_CTOR_OFFSET))(this);
		}

		::KBDOJBJDMOI* __cctor_b__53_0()
		{
			return ((::KBDOJBJDMOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDOJBJDMOI___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
