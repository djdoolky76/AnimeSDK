#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIJGGGANLLD.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define KDCCJGNIIDB_LHEMBHPNGHH_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x130B1470)
#define KDCCJGNIIDB_LHEMBHPNGHH_MKEAMBLJPGA_OFFSET UNITYSDK_OFFSET(0x130B1420)
#define KDCCJGNIIDB_LHEMBHPNGHH__CTOR_OFFSET UNITYSDK_OFFSET(0x130B1410)

inline static constexpr unsigned int KDCCJGNIIDB_LHEMBHPNGHH_TypeDefinitionIndex = 89924;

class KDCCJGNIIDB_LHEMBHPNGHH : public ::System::Object
{
public:
	::AIJGGGANLLD BCILAIPOMFI; // 0x10
	::System::Int32 OMHKJDKFLDF; // 0x30
	::System::Int32 ECEMPEHGMDH; // 0x34
	::System::Boolean MCJCCJOEKGN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCCJGNIIDB_LHEMBHPNGHH__CTOR_OFFSET))(this);
	}

	::System::Void MKEAMBLJPGA(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KDCCJGNIIDB_LHEMBHPNGHH_MKEAMBLJPGA_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCCJGNIIDB_LHEMBHPNGHH_CHCGMACMJLD_OFFSET))(this);
	}
};
