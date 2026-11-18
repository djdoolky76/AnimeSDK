#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class AOKFPNKJOON_BIIINGKDJKA_JNNFOPGBDOG;
class CFMGIKJLMBJ;
class KJPPANPJBOJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOKFPNKJOON_EMJKPEHOPGH_KAIHNGGDAOP_OFFSET UNITYSDK_OFFSET(0x17DE9020)
#define AOKFPNKJOON_EMJKPEHOPGH__CTOR_OFFSET UNITYSDK_OFFSET(0x17DE9010)

inline static constexpr unsigned int AOKFPNKJOON_EMJKPEHOPGH_TypeDefinitionIndex = 51450;

class AOKFPNKJOON_EMJKPEHOPGH : public ::System::Object
{
public:
	::KJPPANPJBOJ* GLAOEHCGCFO; // 0x10
	::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* POLEBKEFMFL; // 0x18
	::System::Single CIIPCCLOHLH; // 0x20
	::System::Boolean KMNDDPAJJNN; // 0x24
	::System::Byte _padding0[0x3];
	::System::Int32 MDHPEPLKPHL; // 0x28
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType JIPPMBKLFHE; // 0x2C
	::System::Int32 DLHIGAEBHFC; // 0x30
	::System::Collections::Generic::KeyValuePair_2<::System::Boolean, ::System::Single> PCNLJPHBIMK; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_EMJKPEHOPGH__CTOR_OFFSET))(this);
	}

	::System::Void KAIHNGGDAOP(::AOKFPNKJOON_BIIINGKDJKA_JNNFOPGBDOG* FKLOOAEOIDF)
	{
		return ((::System::Void(*)(::PVOID, ::AOKFPNKJOON_BIIINGKDJKA_JNNFOPGBDOG*))((::PBYTE)hIl2Cpp + AOKFPNKJOON_EMJKPEHOPGH_KAIHNGGDAOP_OFFSET))(this, FKLOOAEOIDF);
	}
};
