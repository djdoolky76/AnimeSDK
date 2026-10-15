#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFJPGILAAON;
namespace System { class Object; }

#define DFJPGILAAON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E175DB0)
#define DFJPGILAAON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E175DE0)
#define DFJPGILAAON___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E175DF0)

inline static constexpr unsigned int DFJPGILAAON___c_TypeDefinitionIndex = 27930;

	class DFJPGILAAON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DCD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFJPGILAAON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJPGILAAON___C_CTOR_OFFSET))(this);
		}

		::DFJPGILAAON* __cctor_b__43_0()
		{
			return ((::DFJPGILAAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJPGILAAON___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
