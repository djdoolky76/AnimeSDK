#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIADHAKAAIC;
namespace System { class Object; }

#define AIADHAKAAIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E24B610)
#define AIADHAKAAIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E24B650)
#define AIADHAKAAIC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E24B660)

inline static constexpr unsigned int AIADHAKAAIC___c_TypeDefinitionIndex = 31158;

	class AIADHAKAAIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AAA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIADHAKAAIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIADHAKAAIC___C_CTOR_OFFSET))(this);
		}

		::AIADHAKAAIC* __cctor_b__28_0()
		{
			return ((::AIADHAKAAIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIADHAKAAIC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
