#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCJGNLLAHEM;
namespace System { class Object; }

#define DCJGNLLAHEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1720E0)
#define DCJGNLLAHEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E172110)
#define DCJGNLLAHEM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E172120)

inline static constexpr unsigned int DCJGNLLAHEM___c_TypeDefinitionIndex = 28852;

	class DCJGNLLAHEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCJGNLLAHEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGNLLAHEM___C_CTOR_OFFSET))(this);
		}

		::DCJGNLLAHEM* __cctor_b__33_0()
		{
			return ((::DCJGNLLAHEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGNLLAHEM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
