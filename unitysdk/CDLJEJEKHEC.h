#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CDLJEJEKHEC_BPILAAAKPKK_OFFSET UNITYSDK_OFFSET(0x14548630)
#define CDLJEJEKHEC_MNJBEAMPIEG_1_OFFSET UNITYSDK_OFFSET(0x14548500)
#define CDLJEJEKHEC_MNJBEAMPIEG_OFFSET UNITYSDK_OFFSET(0x14548460)

inline static constexpr unsigned int CDLJEJEKHEC_TypeDefinitionIndex = 70592;

class CDLJEJEKHEC : public ::System::Object
{
public:
	static ::System::Boolean MNJBEAMPIEG(::System::Int32 JNOMOFOMFEK, ::System::Int32 FINIAEFOGIK, ::System::Int32 BGPJHNJKHIN, ::System::Int32 PMEHNJABPAN, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CDLJEJEKHEC_MNJBEAMPIEG_OFFSET))(JNOMOFOMFEK, FINIAEFOGIK, BGPJHNJKHIN, PMEHNJABPAN, EKPEBNCLJPM);
	}

	static ::System::Boolean MNJBEAMPIEG_1(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* PLKKOIKIMMA, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CDLJEJEKHEC_MNJBEAMPIEG_1_OFFSET))(PLKKOIKIMMA, EKPEBNCLJPM);
	}

	static ::System::Void BPILAAAKPKK(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* PLKKOIKIMMA, ::System::Int32& JNOMOFOMFEK, ::System::Int32& FINIAEFOGIK, ::System::Int32& BGPJHNJKHIN, ::System::Int32& PMEHNJABPAN)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CDLJEJEKHEC_BPILAAAKPKK_OFFSET))(PLKKOIKIMMA, JNOMOFOMFEK, FINIAEFOGIK, BGPJHNJKHIN, PMEHNJABPAN);
	}
};
