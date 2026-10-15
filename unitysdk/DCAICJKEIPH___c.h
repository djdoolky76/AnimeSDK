#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCAICJKEIPH;
namespace System { class Object; }

#define DCAICJKEIPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E13A6D0)
#define DCAICJKEIPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13A710)
#define DCAICJKEIPH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E13A720)

inline static constexpr unsigned int DCAICJKEIPH___c_TypeDefinitionIndex = 32445;

	class DCAICJKEIPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23A90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCAICJKEIPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAICJKEIPH___C_CTOR_OFFSET))(this);
		}

		::DCAICJKEIPH* __cctor_b__33_0()
		{
			return ((::DCAICJKEIPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAICJKEIPH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
