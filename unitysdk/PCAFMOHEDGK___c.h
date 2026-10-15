#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCAFMOHEDGK;
namespace System { class Object; }

#define PCAFMOHEDGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED3060)
#define PCAFMOHEDGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DED30A0)
#define PCAFMOHEDGK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DED30B0)

inline static constexpr unsigned int PCAFMOHEDGK___c_TypeDefinitionIndex = 32536;

	class PCAFMOHEDGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCAFMOHEDGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCAFMOHEDGK___C_CTOR_OFFSET))(this);
		}

		::PCAFMOHEDGK* __cctor_b__33_0()
		{
			return ((::PCAFMOHEDGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCAFMOHEDGK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
