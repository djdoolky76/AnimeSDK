#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLMAAHDFLGC;
namespace System { class Object; }

#define NLMAAHDFLGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA2BFB0)
#define NLMAAHDFLGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA2BFF0)
#define NLMAAHDFLGC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FA2C000)

inline static constexpr unsigned int NLMAAHDFLGC___c_TypeDefinitionIndex = 30603;

	class NLMAAHDFLGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLMAAHDFLGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMAAHDFLGC___C_CTOR_OFFSET))(this);
		}

		::NLMAAHDFLGC* __cctor_b__18_0()
		{
			return ((::NLMAAHDFLGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMAAHDFLGC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
