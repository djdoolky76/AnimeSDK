#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define JEHBKLPGDDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x166232A0)
#define JEHBKLPGDDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x166232E0)
#define JEHBKLPGDDP___C___SHOWTUTORIALGUIDE_B__5_1_OFFSET UNITYSDK_OFFSET(0x166232F0)

inline static constexpr unsigned int JEHBKLPGDDP___c_TypeDefinitionIndex = 58702;

	class JEHBKLPGDDP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25E0);
		}

		static ::System::Action** StaticGet___9__5_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEHBKLPGDDP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHBKLPGDDP___C_CTOR_OFFSET))(this);
		}

		::System::Void __ShowTutorialGuide_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHBKLPGDDP___C___SHOWTUTORIALGUIDE_B__5_1_OFFSET))(this);
		}

	};
