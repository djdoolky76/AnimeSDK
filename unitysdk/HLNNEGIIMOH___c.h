#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLNNEGIIMOH;
namespace System { class Object; }

#define HLNNEGIIMOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C4360)
#define HLNNEGIIMOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C4390)
#define HLNNEGIIMOH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E5C43A0)

inline static constexpr unsigned int HLNNEGIIMOH___c_TypeDefinitionIndex = 27809;

	class HLNNEGIIMOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x489F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLNNEGIIMOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNNEGIIMOH___C_CTOR_OFFSET))(this);
		}

		::HLNNEGIIMOH* __cctor_b__43_0()
		{
			return ((::HLNNEGIIMOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNNEGIIMOH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
