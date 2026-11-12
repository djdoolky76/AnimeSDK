#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAIEHPEHGIO;
namespace System { class Object; }

#define BAIEHPEHGIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA741F0)
#define BAIEHPEHGIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA74230)
#define BAIEHPEHGIO___C___CCTOR_B__41_0_OFFSET UNITYSDK_OFFSET(0x1FA74240)

inline static constexpr unsigned int BAIEHPEHGIO___c_TypeDefinitionIndex = 31112;

	class BAIEHPEHGIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3ECB0);
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
