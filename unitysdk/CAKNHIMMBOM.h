#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ViewMomentType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class KPCPIMINKPL;

#define CAKNHIMMBOM_ALCCOMJDPIA_OFFSET UNITYSDK_OFFSET(0x1C8ADC30)
#define CAKNHIMMBOM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8ADA00)
#define CAKNHIMMBOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8ADDB0)
#define CAKNHIMMBOM_GLDKILGEFBH_OFFSET UNITYSDK_OFFSET(0x1C8ADC90)
#define CAKNHIMMBOM_KNAFMPJOMIJ_OFFSET UNITYSDK_OFFSET(0x1C8ADAD0)
#define CAKNHIMMBOM_MGJJBKPHPPA_OFFSET UNITYSDK_OFFSET(0x1C8ADCF0)
#define CAKNHIMMBOM_NKKONJDMHLA_OFFSET UNITYSDK_OFFSET(0x1C8ADB60)
#define CAKNHIMMBOM_ONIMOHLBCHA_OFFSET UNITYSDK_OFFSET(0x1C8ADBD0)
#define CAKNHIMMBOM_ONPDAALFIIH_OFFSET UNITYSDK_OFFSET(0x1C8AD9B0)

inline static constexpr unsigned int CAKNHIMMBOM_TypeDefinitionIndex = 43007;

	class CAKNHIMMBOM : public ::System::Object
	{
	public:
		::Il2CppArray<::KPCPIMINKPL*>* AAAHJAAEDCA; // 0x10
		::System::UInt32 INIFKHIFKKD; // 0x18
		::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> NMLLFPBHLKI; // 0x1C
		::System::Byte _padding0[0x4];
		::System::UInt32 CMJOJBEFCGJ; // 0x28
		::System::Boolean NDNMLKFLBBJ; // 0x2C
		::System::Boolean JGFDKEMPACK; // 0x2D
		::System::Boolean HDNPFJJDMMK; // 0x2E
		::System::Boolean MPBNDNOGDNI; // 0x2F
		::System::Boolean OJMLHAIMEGF; // 0x30
		::System::Boolean FIEEBFJAPLP; // 0x31
		::System::Boolean CABGIKBIILH; // 0x32
		::System::Byte _padding1[0x1];
		::System::UInt32 ONOGIODHCEC; // 0x34
		::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> LFDICJEDNEH; // 0x38
		::System::Byte _padding2[0x4];
		::RPG::Client::LittleGame::Match3::ViewMomentType NGECMJGNLMJ; // 0x44
		::System::UInt32 JBHIKEHKLLI; // 0x48
		::System::Boolean GMJDOGOFEKC; // 0x4C
		::System::Boolean MKENEJGIMOB; // 0x4D
		::System::Boolean GDEIKHGCJBD; // 0x4E
		::System::Boolean EFJAHINGHHP; // 0x4F
		::System::UInt32 CEJEOLOFOBL; // 0x50
		::System::UInt32 PDFJKBHCGOO; // 0x54
		::System::UInt32 KLOEJIMMPJM; // 0x58
		::System::UInt32 JCJGJBLENCP; // 0x5C
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
