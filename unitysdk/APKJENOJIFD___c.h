#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APKJENOJIFD;
namespace System { class Object; }

#define APKJENOJIFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64BEE0)
#define APKJENOJIFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64BF20)
#define APKJENOJIFD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E64BF30)

inline static constexpr unsigned int APKJENOJIFD___c_TypeDefinitionIndex = 29955;

	class APKJENOJIFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AB20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APKJENOJIFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKJENOJIFD___C_CTOR_OFFSET))(this);
		}

		::APKJENOJIFD* __cctor_b__18_0()
		{
			return ((::APKJENOJIFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + APKJENOJIFD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
