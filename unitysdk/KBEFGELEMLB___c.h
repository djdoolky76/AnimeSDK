#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBEFGELEMLB;
namespace System { class Object; }

#define KBEFGELEMLB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7ED550)
#define KBEFGELEMLB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7ED590)
#define KBEFGELEMLB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7ED5A0)

inline static constexpr unsigned int KBEFGELEMLB___c_TypeDefinitionIndex = 32055;

	class KBEFGELEMLB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBEFGELEMLB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEFGELEMLB___C_CTOR_OFFSET))(this);
		}

		::KBEFGELEMLB* __cctor_b__33_0()
		{
			return ((::KBEFGELEMLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEFGELEMLB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
