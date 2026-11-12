#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ViewMomentType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class KPCPIMINKPL;

#define CAKNHIMMBOM_ALCCOMJDPIA_OFFSET UNITYSDK_OFFSET(0x1DA5CBC0)
#define CAKNHIMMBOM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DA5C980)
#define CAKNHIMMBOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5CD40)
#define CAKNHIMMBOM_GLDKILGEFBH_OFFSET UNITYSDK_OFFSET(0x1DA5CC20)
#define CAKNHIMMBOM_KNAFMPJOMIJ_OFFSET UNITYSDK_OFFSET(0x1DA5CA60)
#define CAKNHIMMBOM_MGJJBKPHPPA_OFFSET UNITYSDK_OFFSET(0x1DA5CC80)
#define CAKNHIMMBOM_NKKONJDMHLA_OFFSET UNITYSDK_OFFSET(0x1DA5CAF0)
#define CAKNHIMMBOM_ONIMOHLBCHA_OFFSET UNITYSDK_OFFSET(0x1DA5CB60)
#define CAKNHIMMBOM_ONPDAALFIIH_OFFSET UNITYSDK_OFFSET(0x1DA5C930)

inline static constexpr unsigned int CAKNHIMMBOM_TypeDefinitionIndex = 43988;

	class CAKNHIMMBOM : public ::System::Object
	{
	public:
		::Il2CppArray<::KPCPIMINKPL*>* AAAHJAAEDCA; // 0x10
		::System::UInt32 CMJOJBEFCGJ; // 0x18
		::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> LFDICJEDNEH; // 0x1C
		::System::Byte _padding0[0x4];
		::System::Boolean NDNMLKFLBBJ; // 0x28
		::System::Boolean GDEIKHGCJBD; // 0x29
		::System::Boolean MPBNDNOGDNI; // 0x2A
		::System::Boolean JGFDKEMPACK; // 0x2B
		::System::UInt32 PDFJKBHCGOO; // 0x2C
		::RPG::Client::LittleGame::Match3::ViewMomentType NGECMJGNLMJ; // 0x30
		::System::Boolean EFJAHINGHHP; // 0x34
		::System::Boolean FIEEBFJAPLP; // 0x35
		::System::Boolean OJMLHAIMEGF; // 0x36
		::System::Byte _padding1[0x1];
		::System::UInt32 JCJGJBLENCP; // 0x38
		::System::UInt32 CEJEOLOFOBL; // 0x3C
		::System::Boolean CABGIKBIILH; // 0x40
		::System::Boolean HDNPFJJDMMK; // 0x41
		::System::Boolean MKENEJGIMOB; // 0x42
		::System::Boolean GMJDOGOFEKC; // 0x43
		::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> NMLLFPBHLKI; // 0x44
		::System::Byte _padding2[0x4];
		::System::UInt32 KLOEJIMMPJM; // 0x50
		::System::UInt32 ONOGIODHCEC; // 0x54
		::System::UInt32 JBHIKEHKLLI; // 0x58
		::System::UInt32 INIFKHIFKKD; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKNHIMMBOM_CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> ONPDAALFIIH()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKNHIMMBOM_ONPDAALFIIH_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKNHIMMBOM_CLEAR_OFFSET))(this);
		}

		::System::Boolean KNAFMPJOMIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKNHIMMBOM_KNAFMPJOMIJ_OFFSET))(this);
		}

		::System::Boolean NKKONJDMHLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKNHIMMBOM_NKKONJDMHLA_OFFSET))(this);
		}

		::System::Boolean ONIMOHLBCHA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKNHIMMBOM_ONIMOHLBCHA_OFFSET))(this);
		}

		::System::Boolean ALCCOMJDPIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKNHIMMBOM_ALCCOMJDPIA_OFFSET))(this);
		}

		::System::Boolean GLDKILGEFBH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKNHIMMBOM_GLDKILGEFBH_OFFSET))(this);
		}

		::System::Boolean MGJJBKPHPPA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKNHIMMBOM_MGJJBKPHPPA_OFFSET))(this);
		}

	};
