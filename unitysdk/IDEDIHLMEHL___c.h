#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDEDIHLMEHL;
namespace System { class Object; }

#define IDEDIHLMEHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20135650)
#define IDEDIHLMEHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20135690)
#define IDEDIHLMEHL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x201356A0)

inline static constexpr unsigned int IDEDIHLMEHL___c_TypeDefinitionIndex = 30042;

	class IDEDIHLMEHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDEDIHLMEHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEDIHLMEHL___C_CTOR_OFFSET))(this);
		}

		::IDEDIHLMEHL* __cctor_b__23_0()
		{
			return ((::IDEDIHLMEHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEDIHLMEHL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
