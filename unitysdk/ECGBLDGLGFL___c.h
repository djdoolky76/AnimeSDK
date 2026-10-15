#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECGBLDGLGFL;
namespace System { class Object; }

#define ECGBLDGLGFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2210D0)
#define ECGBLDGLGFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E221110)
#define ECGBLDGLGFL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E221120)

inline static constexpr unsigned int ECGBLDGLGFL___c_TypeDefinitionIndex = 26351;

	class ECGBLDGLGFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECGBLDGLGFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGBLDGLGFL___C_CTOR_OFFSET))(this);
		}

		::ECGBLDGLGFL* __cctor_b__28_0()
		{
			return ((::ECGBLDGLGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGBLDGLGFL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
