#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDDMLHPGOOL;
namespace System { class Object; }

#define PDDMLHPGOOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC01CF0)
#define PDDMLHPGOOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC01D30)
#define PDDMLHPGOOL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FC01D40)

inline static constexpr unsigned int PDDMLHPGOOL___c_TypeDefinitionIndex = 30318;

	class PDDMLHPGOOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FE10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDDMLHPGOOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDMLHPGOOL___C_CTOR_OFFSET))(this);
		}

		::PDDMLHPGOOL* __cctor_b__23_0()
		{
			return ((::PDDMLHPGOOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDMLHPGOOL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
