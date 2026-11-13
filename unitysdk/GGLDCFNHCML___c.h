#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGLDCFNHCML;
namespace System { class Object; }

#define GGLDCFNHCML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2026E590)
#define GGLDCFNHCML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2026E5D0)
#define GGLDCFNHCML___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x2026E5E0)

inline static constexpr unsigned int GGLDCFNHCML___c_TypeDefinitionIndex = 27349;

	class GGLDCFNHCML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGLDCFNHCML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLDCFNHCML___C_CTOR_OFFSET))(this);
		}

		::GGLDCFNHCML* __cctor_b__32_0()
		{
			return ((::GGLDCFNHCML*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLDCFNHCML___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
