#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOBFOKCKPKB;
namespace System { class Object; }

#define LOBFOKCKPKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCDE520)
#define LOBFOKCKPKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCDE560)
#define LOBFOKCKPKB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FCDE570)

inline static constexpr unsigned int LOBFOKCKPKB___c_TypeDefinitionIndex = 28264;

	class LOBFOKCKPKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOBFOKCKPKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFOKCKPKB___C_CTOR_OFFSET))(this);
		}

		::LOBFOKCKPKB* __cctor_b__33_0()
		{
			return ((::LOBFOKCKPKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFOKCKPKB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
