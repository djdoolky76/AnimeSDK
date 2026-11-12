#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class BLFLMBHILEO;
class IBGEIKMLIFK;
class MHNMKHAPAHM;
namespace RPG::GameCore { class MatchThreeV2TipsRow; }

#define MHNMKHAPAHM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC1FC720)
#define MHNMKHAPAHM_CTOR_OFFSET UNITYSDK_OFFSET(0xC1FC7B0)
#define MHNMKHAPAHM_FPCKOLFADAC_OFFSET UNITYSDK_OFFSET(0xC1FC4F0)
#define MHNMKHAPAHM_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0xC1FC700)
#define MHNMKHAPAHM_GET_TIPID_OFFSET UNITYSDK_OFFSET(0xC1FC590)
#define MHNMKHAPAHM_JONOPHJFBDI_OFFSET UNITYSDK_OFFSET(0xC1FC7E0)
#define MHNMKHAPAHM_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0xC1FC490)
#define MHNMKHAPAHM_NHONNHCIOOJ_OFFSET UNITYSDK_OFFSET(0xC1FC660)
#define MHNMKHAPAHM_PNLLINHJDJF_OFFSET UNITYSDK_OFFSET(0xC1FC5A0)
#define MHNMKHAPAHM_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0xC1FC710)

inline static constexpr unsigned int MHNMKHAPAHM_TypeDefinitionIndex = 67963;

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
