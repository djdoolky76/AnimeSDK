#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCJNPKDDKDK;
namespace System { class Object; }

#define BCJNPKDDKDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E909620)
#define BCJNPKDDKDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E909660)
#define BCJNPKDDKDK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E909670)

inline static constexpr unsigned int BCJNPKDDKDK___c_TypeDefinitionIndex = 26488;

	class BCJNPKDDKDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BB50);
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
