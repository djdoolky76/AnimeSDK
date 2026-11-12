#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOHKKFHDALO;
namespace System { class Object; }

#define AOHKKFHDALO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F92C470)
#define AOHKKFHDALO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F92C4B0)
#define AOHKKFHDALO___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1F92C4C0)

inline static constexpr unsigned int AOHKKFHDALO___c_TypeDefinitionIndex = 25827;

	class AOHKKFHDALO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOHKKFHDALO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHKKFHDALO___C_CTOR_OFFSET))(this);
		}

		::AOHKKFHDALO* __cctor_b__32_0()
		{
			return ((::AOHKKFHDALO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHKKFHDALO___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
