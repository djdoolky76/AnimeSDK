#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCANEPJMANL.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

class AOEHPGLBLIH;
class BPHGNMNLLHF;
class KCOAGGHCODK;

#define AOFEHEJDCDN_BMFNAKBDBHK_OFFSET UNITYSDK_OFFSET(0x1386F550)
#define AOFEHEJDCDN_CCIENLJOAAE_OFFSET UNITYSDK_OFFSET(0x1386F920)
#define AOFEHEJDCDN_FPLCEJIFEPC_OFFSET UNITYSDK_OFFSET(0x1386F4F0)
#define AOFEHEJDCDN_ILMBBPDENAD_OFFSET UNITYSDK_OFFSET(0x1386F680)
#define AOFEHEJDCDN_KJNIENMCEFL_OFFSET UNITYSDK_OFFSET(0x1386F440)
#define AOFEHEJDCDN_OLEOKCNEHDM_OFFSET UNITYSDK_OFFSET(0x1386F8F0)
#define AOFEHEJDCDN__CTOR_OFFSET UNITYSDK_OFFSET(0x1386F430)

inline static constexpr unsigned int AOFEHEJDCDN_TypeDefinitionIndex = 85064;

class AOFEHEJDCDN : public ::FCANEPJMANL
{
public:
	::BPHGNMNLLHF* NGHCGPEMMHP; // 0xC0
	::System::UInt32 PKMFBJMJCOO; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFEHEJDCDN__CTOR_OFFSET))(this);
	}

	::System::Boolean KJNIENMCEFL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFEHEJDCDN_KJNIENMCEFL_OFFSET))(this);
	}

	::System::Void FPLCEJIFEPC(::BPHGNMNLLHF* NHEPEEIPENO)
	{
		return ((::System::Void(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + AOFEHEJDCDN_FPLCEJIFEPC_OFFSET))(this, NHEPEEIPENO);
	}

	::System::Void BMFNAKBDBHK(::AOEHPGLBLIH* DFMKILICPFB, ::NodeGraph::VariantUnion KMFOONLDBFA, ::System::Int32 OHOCFMBECHM)
	{
		return ((::System::Void(*)(::PVOID, ::AOEHPGLBLIH*, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + AOFEHEJDCDN_BMFNAKBDBHK_OFFSET))(this, DFMKILICPFB, KMFOONLDBFA, OHOCFMBECHM);
	}

	::System::Boolean ILMBBPDENAD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFEHEJDCDN_ILMBBPDENAD_OFFSET))(this);
	}

	::System::Boolean OLEOKCNEHDM(::KCOAGGHCODK* HEAJMIGHEHG)
	{
		return ((::System::Boolean(*)(::PVOID, ::KCOAGGHCODK*))((::PBYTE)hIl2Cpp + AOFEHEJDCDN_OLEOKCNEHDM_OFFSET))(this, HEAJMIGHEHG);
	}

	::System::Int32 CCIENLJOAAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFEHEJDCDN_CCIENLJOAAE_OFFSET))(this);
	}
};
