#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PALNMBCNNKP;
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x119238B0)
#define MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x119238F0)
#define MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__SENDROOMSETTLEMENT_B__33_0_OFFSET UNITYSDK_OFFSET(0x11923900)

namespace MoleMole
{
	inline static constexpr unsigned int HadalSettlementSubsystem___c_TypeDefinitionIndex = 50542;

	class HadalSettlementSubsystem___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::Boolean, ::PALNMBCNNKP*>** StaticGet___9__33_0()
		{
			return (::System::Action_2<::System::Boolean, ::PALNMBCNNKP*>**)Il2CppClass::FromTypeDefinitionIndex(HadalSettlementSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x50C40);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HadalSettlementSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x50C48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _SendRoomSettlement_b__33_0(::System::Boolean success, ::PALNMBCNNKP* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::PALNMBCNNKP*))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__SENDROOMSETTLEMENT_B__33_0_OFFSET))(this, success, rsp);
		}
	};
}
