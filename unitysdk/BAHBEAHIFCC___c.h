#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAHBEAHIFCC;
namespace System { class Object; }

#define BAHBEAHIFCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20576A10)
#define BAHBEAHIFCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20576A50)
#define BAHBEAHIFCC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20576A60)

inline static constexpr unsigned int BAHBEAHIFCC___c_TypeDefinitionIndex = 26702;

	class BAHBEAHIFCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAHBEAHIFCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBEAHIFCC___C_CTOR_OFFSET))(this);
		}

		::BAHBEAHIFCC* __cctor_b__28_0()
		{
			return ((::BAHBEAHIFCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBEAHIFCC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
