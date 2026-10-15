#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMPBDGJAFDF;
namespace System { class Object; }

#define EMPBDGJAFDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2BB1B0)
#define EMPBDGJAFDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2BB1E0)
#define EMPBDGJAFDF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2BB1F0)

inline static constexpr unsigned int EMPBDGJAFDF___c_TypeDefinitionIndex = 30676;

	class EMPBDGJAFDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMPBDGJAFDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPBDGJAFDF___C_CTOR_OFFSET))(this);
		}

		::EMPBDGJAFDF* __cctor_b__28_0()
		{
			return ((::EMPBDGJAFDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPBDGJAFDF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
