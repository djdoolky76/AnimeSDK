#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"
class CAFGGCCJPNI;
class ENMOCEFKBFI;
class MGKEJEAJGGK;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FIBMOMPEOLA_AFKAFAPJLBB_OFFSET UNITYSDK_OFFSET(0x1578FB60)
#define FIBMOMPEOLA_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x1578FB20)
#define FIBMOMPEOLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1578F850)
#define FIBMOMPEOLA_GET_LEVELINDEX_OFFSET UNITYSDK_OFFSET(0x1578F760)
#define FIBMOMPEOLA_HDEJDHKBCPN_OFFSET UNITYSDK_OFFSET(0x1578FBD0)
#define FIBMOMPEOLA_IJJMIMJMNBN_OFFSET UNITYSDK_OFFSET(0x1578F770)
#define FIBMOMPEOLA_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0x1578F720)
#define FIBMOMPEOLA_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1578F950)
#define FIBMOMPEOLA_LPCKIOGKPNI_OFFSET UNITYSDK_OFFSET(0x1578F9A0)

inline static constexpr unsigned int FIBMOMPEOLA_TypeDefinitionIndex = 63898;

	class FIBMOMPEOLA : public ::System::Object
	{
	public:
		::MGKEJEAJGGK* HJOADEMMCLN; // 0x10
		::ENMOCEFKBFI* CGHHNAEKHIO; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>* FBJPIMMIOIL; // 0x20
		::RPG::GameCore::ExpeditionBattleFlowStateType ENIIFGJIIBF; // 0x28
		::System::UInt32 HKAHFHHICEN; // 0x2C
		::System::UInt32 _LevelIndex_k__BackingField; // 0x30
		::System::Void _ctor(::RPG::GameCore::ExpeditionBattleFlowStateType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::MGKEJEAJGGK* a4, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::UInt32, ::System::UInt32, ::MGKEJEAJGGK*, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>*))((::PBYTE)hIl2Cpp + FIBMOMPEOLA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::ExpeditionBattleFlowStateType JKOKFFCBJLJ()
		{
			return ((::RPG::GameCore::ExpeditionBattleFlowStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBMOMPEOLA_JKOKFFCBJLJ_OFFSET))(this);
		}

		::System::UInt32 get_LevelIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBMOMPEOLA_GET_LEVELINDEX_OFFSET))(this);
		}

		::System::Boolean IJJMIMJMNBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBMOMPEOLA_IJJMIMJMNBN_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBMOMPEOLA_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBMOMPEOLA_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Boolean AFKAFAPJLBB(::System::UInt32 a1, ::RPG::GameCore::BaseExpeditionBattleAction* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::BaseExpeditionBattleAction*))((::PBYTE)hIl2Cpp + FIBMOMPEOLA_AFKAFAPJLBB_OFFSET))(this, a1, a2);
		}

		::System::Void HDEJDHKBCPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIBMOMPEOLA_HDEJDHKBCPN_OFFSET))(this, a1);
		}

		::System::Void LPCKIOGKPNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBMOMPEOLA_LPCKIOGKPNI_OFFSET))(this);
		}

	};
