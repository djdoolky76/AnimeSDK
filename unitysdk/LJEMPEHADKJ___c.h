#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJEMPEHADKJ;
namespace System { class Object; }

#define LJEMPEHADKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E94D310)
#define LJEMPEHADKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94D350)
#define LJEMPEHADKJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E94D360)

inline static constexpr unsigned int LJEMPEHADKJ___c_TypeDefinitionIndex = 25691;

	class LJEMPEHADKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJEMPEHADKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEMPEHADKJ___C_CTOR_OFFSET))(this);
		}

		::LJEMPEHADKJ* __cctor_b__23_0()
		{
			return ((::LJEMPEHADKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEMPEHADKJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
