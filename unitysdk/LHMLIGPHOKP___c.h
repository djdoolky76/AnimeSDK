#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHMLIGPHOKP;
namespace System { class Object; }

#define LHMLIGPHOKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201C33E0)
#define LHMLIGPHOKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201C3420)
#define LHMLIGPHOKP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x201C3430)

inline static constexpr unsigned int LHMLIGPHOKP___c_TypeDefinitionIndex = 29922;

	class LHMLIGPHOKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x399C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHMLIGPHOKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMLIGPHOKP___C_CTOR_OFFSET))(this);
		}

		::LHMLIGPHOKP* __cctor_b__28_0()
		{
			return ((::LHMLIGPHOKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMLIGPHOKP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
