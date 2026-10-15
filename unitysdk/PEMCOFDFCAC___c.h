#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEMCOFDFCAC;
namespace System { class Object; }

#define PEMCOFDFCAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF00B0)
#define PEMCOFDFCAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF00F0)
#define PEMCOFDFCAC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEF0100)

inline static constexpr unsigned int PEMCOFDFCAC___c_TypeDefinitionIndex = 31807;

	class PEMCOFDFCAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x310E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEMCOFDFCAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMCOFDFCAC___C_CTOR_OFFSET))(this);
		}

		::PEMCOFDFCAC* __cctor_b__23_0()
		{
			return ((::PEMCOFDFCAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMCOFDFCAC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
