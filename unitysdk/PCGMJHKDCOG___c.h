#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCGMJHKDCOG;
namespace System { class Object; }

#define PCGMJHKDCOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEDBDC0)
#define PCGMJHKDCOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDBE00)
#define PCGMJHKDCOG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DEDBE10)

inline static constexpr unsigned int PCGMJHKDCOG___c_TypeDefinitionIndex = 29929;

	class PCGMJHKDCOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EC50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCGMJHKDCOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGMJHKDCOG___C_CTOR_OFFSET))(this);
		}

		::PCGMJHKDCOG* __cctor_b__38_0()
		{
			return ((::PCGMJHKDCOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGMJHKDCOG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
