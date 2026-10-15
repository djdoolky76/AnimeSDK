#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMGDCCNNGEE;
namespace System { class Object; }

#define KMGDCCNNGEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86B0A0)
#define KMGDCCNNGEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86B0E0)
#define KMGDCCNNGEE___C___CCTOR_B__103_0_OFFSET UNITYSDK_OFFSET(0x1E86B0F0)

inline static constexpr unsigned int KMGDCCNNGEE___c_TypeDefinitionIndex = 25065;

	class KMGDCCNNGEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1ED80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMGDCCNNGEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDCCNNGEE___C_CTOR_OFFSET))(this);
		}

		::KMGDCCNNGEE* __cctor_b__103_0()
		{
			return ((::KMGDCCNNGEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDCCNNGEE___C___CCTOR_B__103_0_OFFSET))(this);
		}

	};
