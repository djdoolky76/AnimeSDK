#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JECNOELJLKO;
namespace System { class Object; }

#define JECNOELJLKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20431CB0)
#define JECNOELJLKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20431CF0)
#define JECNOELJLKO___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x20431D00)

inline static constexpr unsigned int JECNOELJLKO___c_TypeDefinitionIndex = 29327;

	class JECNOELJLKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DA10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JECNOELJLKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECNOELJLKO___C_CTOR_OFFSET))(this);
		}

		::JECNOELJLKO* __cctor_b__53_0()
		{
			return ((::JECNOELJLKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECNOELJLKO___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
