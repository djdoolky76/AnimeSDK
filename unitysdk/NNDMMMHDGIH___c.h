#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNDMMMHDGIH;
namespace System { class Object; }

#define NNDMMMHDGIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB811F0)
#define NNDMMMHDGIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB81230)
#define NNDMMMHDGIH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB81240)

	class NNDMMMHDGIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNDMMMHDGIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDMMMHDGIH___C_CTOR_OFFSET))(this);
		}

		::NNDMMMHDGIH* __cctor_b__23_0()
		{
			return ((::NNDMMMHDGIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDMMMHDGIH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
