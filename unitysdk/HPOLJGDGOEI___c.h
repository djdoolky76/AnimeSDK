#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPOLJGDGOEI;
namespace System { class Object; }

#define HPOLJGDGOEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E600390)
#define HPOLJGDGOEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6003D0)
#define HPOLJGDGOEI___C___CCTOR_B__98_0_OFFSET UNITYSDK_OFFSET(0x1E6003E0)

inline static constexpr unsigned int HPOLJGDGOEI___c_TypeDefinitionIndex = 25103;

	class HPOLJGDGOEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x527E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPOLJGDGOEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOLJGDGOEI___C_CTOR_OFFSET))(this);
		}

		::HPOLJGDGOEI* __cctor_b__98_0()
		{
			return ((::HPOLJGDGOEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOLJGDGOEI___C___CCTOR_B__98_0_OFFSET))(this);
		}

	};
