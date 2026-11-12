#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJKPJIBNPHC;
namespace System { class Object; }

#define BJKPJIBNPHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F16A900)
#define BJKPJIBNPHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F16A940)
#define BJKPJIBNPHC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F16A950)

inline static constexpr unsigned int BJKPJIBNPHC___c_TypeDefinitionIndex = 35344;

	class BJKPJIBNPHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BB20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJKPJIBNPHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKPJIBNPHC___C_CTOR_OFFSET))(this);
		}

		::BJKPJIBNPHC* __cctor_b__33_0()
		{
			return ((::BJKPJIBNPHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKPJIBNPHC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
