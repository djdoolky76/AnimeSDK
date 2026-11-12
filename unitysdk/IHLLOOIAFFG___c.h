#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHLLOOIAFFG;
namespace System { class Object; }

#define IHLLOOIAFFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F987D10)
#define IHLLOOIAFFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F987D50)
#define IHLLOOIAFFG___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x1F987D60)

inline static constexpr unsigned int IHLLOOIAFFG___c_TypeDefinitionIndex = 31922;

	class IHLLOOIAFFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHLLOOIAFFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLLOOIAFFG___C_CTOR_OFFSET))(this);
		}

		::IHLLOOIAFFG* __cctor_b__83_0()
		{
			return ((::IHLLOOIAFFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLLOOIAFFG___C___CCTOR_B__83_0_OFFSET))(this);
		}

	};
