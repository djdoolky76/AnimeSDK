#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAIEHPEHGIO;
namespace System { class Object; }

#define BAIEHPEHGIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20579780)
#define BAIEHPEHGIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205797C0)
#define BAIEHPEHGIO___C___CCTOR_B__41_0_OFFSET UNITYSDK_OFFSET(0x205797D0)

inline static constexpr unsigned int BAIEHPEHGIO___c_TypeDefinitionIndex = 31112;

	class BAIEHPEHGIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAIEHPEHGIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIEHPEHGIO___C_CTOR_OFFSET))(this);
		}

		::BAIEHPEHGIO* __cctor_b__41_0()
		{
			return ((::BAIEHPEHGIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIEHPEHGIO___C___CCTOR_B__41_0_OFFSET))(this);
		}

	};
