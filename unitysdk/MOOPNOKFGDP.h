#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCCCFCPDBOO.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MOOPNOKFGDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C59FDD0)

inline static constexpr unsigned int MOOPNOKFGDP_TypeDefinitionIndex = 41510;

class MOOPNOKFGDP : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::System::Int32>* CDNOPPKPOLM; // 0x10
	::System::Boolean GMCFCLHPEFH; // 0x18
	::System::Boolean IEDNDEIPOII; // 0x19
	::System::Byte _padding0[0x2];
	::System::Int32 ADEFDDGNPPK; // 0x1C
	::OCCCFCPDBOO NFAJHAAKHKI; // 0x20
	::System::Int32 ABCDLDAGPFL; // 0x24
	::System::Int32 AHIKNMMBNOD; // 0x28
	::System::Int32 PKNAOGMGAJN; // 0x2C

	::System::Void _ctor(::OCCCFCPDBOO JBENHKOGGGO, ::System::Collections::Generic::IList_1<::System::Int32>* NCGIBCAIIGC)
	{
		return ((::System::Void(*)(::PVOID, ::OCCCFCPDBOO, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOOPNOKFGDP__CTOR_OFFSET))(this, JBENHKOGGGO, NCGIBCAIIGC);
	}
};
