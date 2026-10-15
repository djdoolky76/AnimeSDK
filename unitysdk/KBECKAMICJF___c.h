#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBECKAMICJF;
namespace System { class Object; }

#define KBECKAMICJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BF560)
#define KBECKAMICJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BF5A0)
#define KBECKAMICJF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7BF5B0)

inline static constexpr unsigned int KBECKAMICJF___c_TypeDefinitionIndex = 30551;

	class KBECKAMICJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBECKAMICJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBECKAMICJF___C_CTOR_OFFSET))(this);
		}

		::KBECKAMICJF* __cctor_b__28_0()
		{
			return ((::KBECKAMICJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBECKAMICJF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
