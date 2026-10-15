#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class BLFLMBHILEO;
class IBGEIKMLIFK;
class MHNMKHAPAHM;
namespace RPG::GameCore { class MatchThreeV2TipsRow; }

#define MHNMKHAPAHM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB941D70)
#define MHNMKHAPAHM_CTOR_OFFSET UNITYSDK_OFFSET(0xB941E00)
#define MHNMKHAPAHM_FPCKOLFADAC_OFFSET UNITYSDK_OFFSET(0xB941B40)
#define MHNMKHAPAHM_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0xB941D50)
#define MHNMKHAPAHM_GET_TIPID_OFFSET UNITYSDK_OFFSET(0xB941BE0)
#define MHNMKHAPAHM_JONOPHJFBDI_OFFSET UNITYSDK_OFFSET(0xB941E30)
#define MHNMKHAPAHM_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0xB941AE0)
#define MHNMKHAPAHM_NHONNHCIOOJ_OFFSET UNITYSDK_OFFSET(0xB941CB0)
#define MHNMKHAPAHM_PNLLINHJDJF_OFFSET UNITYSDK_OFFSET(0xB941BF0)
#define MHNMKHAPAHM_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0xB941D60)

inline static constexpr unsigned int MHNMKHAPAHM_TypeDefinitionIndex = 66031;

	class MHNMKHAPAHM : public ::System::Object
	{
	public:
		::IBGEIKMLIFK* _Condition_k__BackingField; // 0x10
		::System::UInt32 _TipID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHNMKHAPAHM_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::MatchThreeV2TipsRow* MMFEEJAHPLJ()
		{
			return ((::RPG::GameCore::MatchThreeV2TipsRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNMKHAPAHM_MMFEEJAHPLJ_OFFSET))(this);
		}

		::Il2CppArray<::BLFLMBHILEO*>* FPCKOLFADAC()
		{
			return ((::Il2CppArray<::BLFLMBHILEO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNMKHAPAHM_FPCKOLFADAC_OFFSET))(this);
		}

		::System::UInt32 get_TipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNMKHAPAHM_GET_TIPID_OFFSET))(this);
		}

		::RPG::Client::TextID PNLLINHJDJF()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNMKHAPAHM_PNLLINHJDJF_OFFSET))(this);
		}

		::System::UInt32 NHONNHCIOOJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNMKHAPAHM_NHONNHCIOOJ_OFFSET))(this);
		}

		::IBGEIKMLIFK* get_Condition()
		{
			return ((::IBGEIKMLIFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNMKHAPAHM_GET_CONDITION_OFFSET))(this);
		}

		::System::Void set_Condition(::IBGEIKMLIFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBGEIKMLIFK*))((::PBYTE)hIl2Cpp + MHNMKHAPAHM_SET_CONDITION_OFFSET))(this, a1);
		}

		static ::MHNMKHAPAHM* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::MHNMKHAPAHM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MHNMKHAPAHM_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean JONOPHJFBDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNMKHAPAHM_JONOPHJFBDI_OFFSET))(this);
		}

	};
