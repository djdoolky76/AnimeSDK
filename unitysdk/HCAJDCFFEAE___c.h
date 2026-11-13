#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCAJDCFFEAE;
namespace System { class Object; }

#define HCAJDCFFEAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200B3980)
#define HCAJDCFFEAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200B39C0)
#define HCAJDCFFEAE___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x200B39D0)

inline static constexpr unsigned int HCAJDCFFEAE___c_TypeDefinitionIndex = 26986;

	class HCAJDCFFEAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCAJDCFFEAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAJDCFFEAE___C_CTOR_OFFSET))(this);
		}

		::HCAJDCFFEAE* __cctor_b__58_0()
		{
			return ((::HCAJDCFFEAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAJDCFFEAE___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
