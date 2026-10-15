#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPEBEDHMNLA;
namespace System { class Object; }

#define JPEBEDHMNLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D1B90)
#define JPEBEDHMNLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D1BD0)
#define JPEBEDHMNLA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E7D1BE0)

inline static constexpr unsigned int JPEBEDHMNLA___c_TypeDefinitionIndex = 31620;

	class JPEBEDHMNLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xAC40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPEBEDHMNLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEBEDHMNLA___C_CTOR_OFFSET))(this);
		}

		::JPEBEDHMNLA* __cctor_b__43_0()
		{
			return ((::JPEBEDHMNLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEBEDHMNLA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
