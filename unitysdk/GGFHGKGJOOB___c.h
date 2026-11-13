#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGFHGKGJOOB;
namespace System { class Object; }

#define GGFHGKGJOOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20265930)
#define GGFHGKGJOOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20265970)
#define GGFHGKGJOOB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x20265980)

inline static constexpr unsigned int GGFHGKGJOOB___c_TypeDefinitionIndex = 29761;

	class GGFHGKGJOOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDBD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGFHGKGJOOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFHGKGJOOB___C_CTOR_OFFSET))(this);
		}

		::GGFHGKGJOOB* __cctor_b__33_0()
		{
			return ((::GGFHGKGJOOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFHGKGJOOB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
