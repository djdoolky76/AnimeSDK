#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ViewMomentType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class KPCPIMINKPL;
namespace System { class Nullable; }

#define CAKNHIMMBOM_ALCCOMJDPIA_OFFSET UNITYSDK_OFFSET(0x1C8DBEA0)
#define CAKNHIMMBOM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8DBC60)
#define CAKNHIMMBOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DC020)
#define CAKNHIMMBOM_GLDKILGEFBH_OFFSET UNITYSDK_OFFSET(0x1C8DBF00)
#define CAKNHIMMBOM_KNAFMPJOMIJ_OFFSET UNITYSDK_OFFSET(0x1C8DBD40)
#define CAKNHIMMBOM_MGJJBKPHPPA_OFFSET UNITYSDK_OFFSET(0x1C8DBF60)
#define CAKNHIMMBOM_NKKONJDMHLA_OFFSET UNITYSDK_OFFSET(0x1C8DBDD0)
#define CAKNHIMMBOM_ONIMOHLBCHA_OFFSET UNITYSDK_OFFSET(0x1C8DBE40)
#define CAKNHIMMBOM_ONPDAALFIIH_OFFSET UNITYSDK_OFFSET(0x1C8DBC20)

inline static constexpr unsigned int CAKNHIMMBOM_TypeDefinitionIndex = 43007;

	class CAKNHIMMBOM : public ::System::Object
	{
	public:
		::Il2CppArray<::KPCPIMINKPL*>* AAAHJAAEDCA; // 0x10
		::System::UInt32 JBHIKEHKLLI; // 0x18
		::System::UInt32 JCJGJBLENCP; // 0x1C
		::System::UInt32 ONOGIODHCEC; // 0x20
		::System::Boolean CABGIKBIILH; // 0x24
		::System::Boolean GMJDOGOFEKC; // 0x25
		::System::Boolean EFJAHINGHHP; // 0x26
		::System::Boolean FIEEBFJAPLP; // 0x27
		::System::UInt32 CMJOJBEFCGJ; // 0x28
		::System::Boolean MPBNDNOGDNI; // 0x2C
		::System::Boolean MKENEJGIMOB; // 0x2D
		::System::Boolean JGFDKEMPACK; // 0x2E
		::System::Byte _padding0[0x1];
		::System::UInt32 KLOEJIMMPJM; // 0x30
		::System::Nullable* NMLLFPBHLKI; // 0x34
		::System::Byte _padding1[0x4];
		::System::UInt32 CEJEOLOFOBL; // 0x40
		::System::UInt32 INIFKHIFKKD; // 0x44
		::RPG::Client::LittleGame::Match3::ViewMomentType NGECMJGNLMJ; // 0x48
		::System::Nullable* LFDICJEDNEH; // 0x4C
		::System::Byte _padding2[0x4];
		::System::Boolean HDNPFJJDMMK; // 0x58
		::System::Boolean GDEIKHGCJBD; // 0x59
		::System::Boolean OJMLHAIMEGF; // 0x5A
		::System::Boolean NDNMLKFLBBJ; // 0x5B
		::System::UInt32 PDFJKBHCGOO; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKNHIMMBOM_CTOR_OFFSET))(this);
		}

		::System::ValueTuple ONPDAALFIIH()
		{
			return ((::System::ValueTuple(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKNHIMMBOM_ONPDAALFIIH_OFFSET))(this);
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
