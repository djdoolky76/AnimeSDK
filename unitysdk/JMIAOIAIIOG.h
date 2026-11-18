#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace MoleMole { class UserLocalDataItem; }
template <typename T> class JIOLFCAGOFH_1;
template <typename T> class LJHFMILANJA_1;
template <typename T> class NMANHEHIJAL_1;

#define JMIAOIAIIOG_CBOBOCLCOMO_OFFSET UNITYSDK_OFFSET(0x194633C0)
#define JMIAOIAIIOG_LEOJDGLEDEE_OFFSET UNITYSDK_OFFSET(0x19463240)
#define JMIAOIAIIOG_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x19463070)
#define JMIAOIAIIOG__CTOR_OFFSET UNITYSDK_OFFSET(0x19463230)

inline static constexpr unsigned int JMIAOIAIIOG_TypeDefinitionIndex = 79504;

class JMIAOIAIIOG : public ::JJEJBPGJPJN
{
public:
	::JIOLFCAGOFH_1<::System::Boolean>* CPOLHMHKHEF; // 0x88
	::LJHFMILANJA_1<::System::UInt32>* FHNDFECBMCP; // 0x90
	::LJHFMILANJA_1<::System::UInt32>* KCAJNDCKFFJ; // 0x98
	::MoleMole::UserLocalDataItem* BNHIFIHNCHD; // 0xA0
	::NMANHEHIJAL_1<::System::Int32>* DCGAEJEMPJD; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIAOIAIIOG__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIAOIAIIOG_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Boolean LEOJDGLEDEE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIAOIAIIOG_LEOJDGLEDEE_OFFSET))(this);
	}

	::System::Void CBOBOCLCOMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIAOIAIIOG_CBOBOCLCOMO_OFFSET))(this);
	}
};
