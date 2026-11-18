#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBDDODKFCIJ.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"

class AKHOKICACBA;

#define OJPBCLJDOKA_BIPAGPBHGBP_OFFSET UNITYSDK_OFFSET(0xF199200)
#define OJPBCLJDOKA_BLDGLIDJEFN_OFFSET UNITYSDK_OFFSET(0xF198D80)
#define OJPBCLJDOKA_BPOOFKJKFLH_OFFSET UNITYSDK_OFFSET(0xF199210)
#define OJPBCLJDOKA_GPPDCGGIKJO_OFFSET UNITYSDK_OFFSET(0xF1990C0)
#define OJPBCLJDOKA_HDBFMMBFEDF_OFFSET UNITYSDK_OFFSET(0xF198FA0)
#define OJPBCLJDOKA_JNPOMMINLMN_OFFSET UNITYSDK_OFFSET(0xF198F60)
#define OJPBCLJDOKA_PKAMAHOMCHB_OFFSET UNITYSDK_OFFSET(0xF199170)
#define OJPBCLJDOKA__CTOR_OFFSET UNITYSDK_OFFSET(0xF199110)

inline static constexpr unsigned int OJPBCLJDOKA_TypeDefinitionIndex = 74340;

class OJPBCLJDOKA : public ::CBDDODKFCIJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJPBCLJDOKA__CTOR_OFFSET))(this);
	}

	::System::UInt32 BLDGLIDJEFN()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJPBCLJDOKA_BLDGLIDJEFN_OFFSET))(this);
	}

	::System::Boolean JNPOMMINLMN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJPBCLJDOKA_JNPOMMINLMN_OFFSET))(this);
	}

	::System::Void HDBFMMBFEDF(::AKHOKICACBA* MIMNNMMMJJF)
	{
		return ((::System::Void(*)(::PVOID, ::AKHOKICACBA*))((::PBYTE)hIl2Cpp + OJPBCLJDOKA_HDBFMMBFEDF_OFFSET))(this, MIMNNMMMJJF);
	}

	::System::Boolean GPPDCGGIKJO(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType& OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType&))((::PBYTE)hIl2Cpp + OJPBCLJDOKA_GPPDCGGIKJO_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::UInt32 PKAMAHOMCHB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJPBCLJDOKA_PKAMAHOMCHB_OFFSET))(this);
	}

	::System::Void BIPAGPBHGBP(::AKHOKICACBA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AKHOKICACBA*))((::PBYTE)hIl2Cpp + OJPBCLJDOKA_BIPAGPBHGBP_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType BPOOFKJKFLH()
	{
		return ((::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType(*)(::PVOID))((::PBYTE)hIl2Cpp + OJPBCLJDOKA_BPOOFKJKFLH_OFFSET))(this);
	}
};
