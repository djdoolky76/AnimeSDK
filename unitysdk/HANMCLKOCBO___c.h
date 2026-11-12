#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HANMCLKOCBO;
namespace System { class Object; }

#define HANMCLKOCBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F81F830)
#define HANMCLKOCBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F81F870)
#define HANMCLKOCBO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F81F880)

inline static constexpr unsigned int HANMCLKOCBO___c_TypeDefinitionIndex = 32391;

	class HANMCLKOCBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FB50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HANMCLKOCBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANMCLKOCBO___C_CTOR_OFFSET))(this);
		}

		::HANMCLKOCBO* __cctor_b__33_0()
		{
			return ((::HANMCLKOCBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANMCLKOCBO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
