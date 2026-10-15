#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHLLOOIAFFG;
namespace System { class Object; }

#define IHLLOOIAFFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E654DA0)
#define IHLLOOIAFFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E654DE0)
#define IHLLOOIAFFG___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x1E654DF0)

inline static constexpr unsigned int IHLLOOIAFFG___c_TypeDefinitionIndex = 31009;

	class IHLLOOIAFFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E560);
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
