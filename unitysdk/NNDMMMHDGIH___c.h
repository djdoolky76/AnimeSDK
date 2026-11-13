#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNDMMMHDGIH;
namespace System { class Object; }

#define NNDMMMHDGIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEDF2A0)
#define NNDMMMHDGIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEDF2E0)
#define NNDMMMHDGIH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FEDF2F0)

inline static constexpr unsigned int NNDMMMHDGIH___c_TypeDefinitionIndex = 29216;

	class NNDMMMHDGIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50EE0);
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
