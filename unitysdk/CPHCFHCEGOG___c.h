#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPHCFHCEGOG;
namespace System { class Object; }

#define CPHCFHCEGOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E111630)
#define CPHCFHCEGOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E111670)
#define CPHCFHCEGOG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E111680)

inline static constexpr unsigned int CPHCFHCEGOG___c_TypeDefinitionIndex = 28534;

	class CPHCFHCEGOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F2D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPHCFHCEGOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHCFHCEGOG___C_CTOR_OFFSET))(this);
		}

		::CPHCFHCEGOG* __cctor_b__38_0()
		{
			return ((::CPHCFHCEGOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHCFHCEGOG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
