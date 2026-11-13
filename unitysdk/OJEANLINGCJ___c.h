#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJEANLINGCJ;
namespace System { class Object; }

#define OJEANLINGCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F69BDF0)
#define OJEANLINGCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F69BE30)
#define OJEANLINGCJ___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1F69BE40)

inline static constexpr unsigned int OJEANLINGCJ___c_TypeDefinitionIndex = 26043;

	class OJEANLINGCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJEANLINGCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJEANLINGCJ___C_CTOR_OFFSET))(this);
		}

		::OJEANLINGCJ* __cctor_b__58_0()
		{
			return ((::OJEANLINGCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJEANLINGCJ___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
