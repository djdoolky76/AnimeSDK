#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJELONPOIAG;
namespace System { class Object; }

#define BJELONPOIAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDDB820)
#define BJELONPOIAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDB860)
#define BJELONPOIAG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DDDB870)

inline static constexpr unsigned int BJELONPOIAG___c_TypeDefinitionIndex = 28174;

	class BJELONPOIAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJELONPOIAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJELONPOIAG___C_CTOR_OFFSET))(this);
		}

		::BJELONPOIAG* __cctor_b__33_0()
		{
			return ((::BJELONPOIAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJELONPOIAG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
