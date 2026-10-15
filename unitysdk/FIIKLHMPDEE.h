#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"
class ILHNCGGCBBL;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define FIIKLHMPDEE_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0x1579DFB0)
#define FIIKLHMPDEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1579DB90)
#define FIIKLHMPDEE_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x1579DFF0)
#define FIIKLHMPDEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1579DBA0)
#define FIIKLHMPDEE_EJCPOMABHGJ_OFFSET UNITYSDK_OFFSET(0x1579E050)
#define FIIKLHMPDEE_FHBGGDFCIPH_OFFSET UNITYSDK_OFFSET(0x1579E240)
#define FIIKLHMPDEE_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0x1579DBF0)
#define FIIKLHMPDEE_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1579DC40)
#define FIIKLHMPDEE_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x1579DE10)
#define FIIKLHMPDEE_TICK_OFFSET UNITYSDK_OFFSET(0x1579DEC0)

inline static constexpr unsigned int FIIKLHMPDEE_TypeDefinitionIndex = 55858;

	class FIIKLHMPDEE : public ::System::Object
	{
	public:
		::ILHNCGGCBBL* ONBOGBCKHDC; // 0x10
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x20
		::System::Boolean DOOPHCHLJPC; // 0x28
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::ILHNCGGCBBL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::ILHNCGGCBBL*))((::PBYTE)hIl2Cpp + FIIKLHMPDEE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIKLHMPDEE_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AdventureAnimStateType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIKLHMPDEE_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIIKLHMPDEE_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AdventureAnimStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + FIIKLHMPDEE_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIIKLHMPDEE_TICK_OFFSET))(this, a1);
		}

		::System::Void AEGMLJMJBDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIKLHMPDEE_AEGMLJMJBDO_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIIKLHMPDEE_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void EJCPOMABHGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIKLHMPDEE_EJCPOMABHGJ_OFFSET))(this);
		}

		::System::Void FHBGGDFCIPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIKLHMPDEE_FHBGGDFCIPH_OFFSET))(this);
		}

	};
