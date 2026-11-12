#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGONMGJNBLA;
namespace System { class Object; }

#define KGONMGJNBLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB56260)
#define KGONMGJNBLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB562A0)
#define KGONMGJNBLA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB562B0)

inline static constexpr unsigned int KGONMGJNBLA___c_TypeDefinitionIndex = 35834;

	class KGONMGJNBLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGONMGJNBLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGONMGJNBLA___C_CTOR_OFFSET))(this);
		}

		::KGONMGJNBLA* __cctor_b__23_0()
		{
			return ((::KGONMGJNBLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGONMGJNBLA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
