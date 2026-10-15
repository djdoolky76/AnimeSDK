#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKOKAGGLKHG;
namespace System { class Object; }

#define CKOKAGGLKHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C13D0)
#define CKOKAGGLKHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C1410)
#define CKOKAGGLKHG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E0C1420)

inline static constexpr unsigned int CKOKAGGLKHG___c_TypeDefinitionIndex = 25648;

	class CKOKAGGLKHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x199B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKOKAGGLKHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOKAGGLKHG___C_CTOR_OFFSET))(this);
		}

		::CKOKAGGLKHG* __cctor_b__33_0()
		{
			return ((::CKOKAGGLKHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOKAGGLKHG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
