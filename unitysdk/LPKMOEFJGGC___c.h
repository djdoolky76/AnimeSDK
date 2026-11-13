#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPKMOEFJGGC;
namespace System { class Object; }

#define LPKMOEFJGGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBAAE60)
#define LPKMOEFJGGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBAAEA0)
#define LPKMOEFJGGC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FBAAEB0)

inline static constexpr unsigned int LPKMOEFJGGC___c_TypeDefinitionIndex = 35953;

	class LPKMOEFJGGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPKMOEFJGGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKMOEFJGGC___C_CTOR_OFFSET))(this);
		}

		::LPKMOEFJGGC* __cctor_b__33_0()
		{
			return ((::LPKMOEFJGGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKMOEFJGGC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
