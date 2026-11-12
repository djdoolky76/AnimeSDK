#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCJNPKDDKDK;
namespace System { class Object; }

#define BCJNPKDDKDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBCD990)
#define BCJNPKDDKDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBCD9D0)
#define BCJNPKDDKDK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FBCD9E0)

inline static constexpr unsigned int BCJNPKDDKDK___c_TypeDefinitionIndex = 27019;

	class BCJNPKDDKDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCJNPKDDKDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNPKDDKDK___C_CTOR_OFFSET))(this);
		}

		::BCJNPKDDKDK* __cctor_b__33_0()
		{
			return ((::BCJNPKDDKDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNPKDDKDK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
