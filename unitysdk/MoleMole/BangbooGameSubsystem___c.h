#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GNJJCPBPBFL;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D9E340)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D9E380)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__SETPLAYERMULTIPLAYSTATE_B__28_0_OFFSET UNITYSDK_OFFSET(0x14D9E390)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__SETPLAYERMULTIPLAYSTATE_B__28_1_OFFSET UNITYSDK_OFFSET(0x14D9E3B0)

namespace MoleMole
{
	inline static constexpr unsigned int BangbooGameSubsystem___c_TypeDefinitionIndex = 47139;

	class BangbooGameSubsystem___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::GNJJCPBPBFL*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::GNJJCPBPBFL*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BangbooGameSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x449A0);
		}
		static ::System::Func_2<::GNJJCPBPBFL*, ::System::Boolean>** StaticGet___9__28_1()
		{
			return (::System::Func_2<::GNJJCPBPBFL*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BangbooGameSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x449A8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BangbooGameSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x449B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetPlayerMultiPlayState_b__28_0(::GNJJCPBPBFL* val)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNJJCPBPBFL*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__SETPLAYERMULTIPLAYSTATE_B__28_0_OFFSET))(this, val);
		}

		::System::Boolean _SetPlayerMultiPlayState_b__28_1(::GNJJCPBPBFL* val)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNJJCPBPBFL*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__SETPLAYERMULTIPLAYSTATE_B__28_1_OFFSET))(this, val);
		}
	};
}
