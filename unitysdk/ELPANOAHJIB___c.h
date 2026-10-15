#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELPANOAHJIB;
namespace System { class Object; }

#define ELPANOAHJIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2DAF80)
#define ELPANOAHJIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DAFC0)
#define ELPANOAHJIB___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E2DAFD0)

inline static constexpr unsigned int ELPANOAHJIB___c_TypeDefinitionIndex = 31989;

	class ELPANOAHJIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELPANOAHJIB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPANOAHJIB___C_CTOR_OFFSET))(this);
		}

		::ELPANOAHJIB* __cctor_b__43_0()
		{
			return ((::ELPANOAHJIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPANOAHJIB___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
