#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPGNLIEPKCA;
namespace System { class Object; }

#define FPGNLIEPKCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6F6DE0)
#define FPGNLIEPKCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6F6E20)
#define FPGNLIEPKCA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F6F6E30)

inline static constexpr unsigned int FPGNLIEPKCA___c_TypeDefinitionIndex = 30438;

	class FPGNLIEPKCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPGNLIEPKCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGNLIEPKCA___C_CTOR_OFFSET))(this);
		}

		::FPGNLIEPKCA* __cctor_b__28_0()
		{
			return ((::FPGNLIEPKCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGNLIEPKCA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
