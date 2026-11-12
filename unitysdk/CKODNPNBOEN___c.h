#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKODNPNBOEN;
namespace System { class Object; }

#define CKODNPNBOEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3C0AF0)
#define CKODNPNBOEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C0B30)
#define CKODNPNBOEN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F3C0B40)

inline static constexpr unsigned int CKODNPNBOEN___c_TypeDefinitionIndex = 25563;

	class CKODNPNBOEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKODNPNBOEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODNPNBOEN___C_CTOR_OFFSET))(this);
		}

		::CKODNPNBOEN* __cctor_b__33_0()
		{
			return ((::CKODNPNBOEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODNPNBOEN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
