#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJEFBHPAPND;
namespace System { class Object; }

#define EJEFBHPAPND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B4880)
#define EJEFBHPAPND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B48C0)
#define EJEFBHPAPND___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2B48D0)

inline static constexpr unsigned int EJEFBHPAPND___c_TypeDefinitionIndex = 25221;

	class EJEFBHPAPND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJEFBHPAPND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEFBHPAPND___C_CTOR_OFFSET))(this);
		}

		::EJEFBHPAPND* __cctor_b__23_0()
		{
			return ((::EJEFBHPAPND*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEFBHPAPND___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
