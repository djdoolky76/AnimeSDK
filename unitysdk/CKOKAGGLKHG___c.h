#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKOKAGGLKHG;
namespace System { class Object; }

#define CKOKAGGLKHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2059B620)
#define CKOKAGGLKHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2059B660)
#define CKOKAGGLKHG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2059B670)

inline static constexpr unsigned int CKOKAGGLKHG___c_TypeDefinitionIndex = 26145;

	class CKOKAGGLKHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12D70);
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
