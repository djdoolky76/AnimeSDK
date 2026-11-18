#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEDIGMHHFGN.h"
#include "unitysdk/DNNOGGDCKCP.h"
#include "unitysdk/HJFHBHFHHPN.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define JPLIDCKDMLE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7679A0)
#define JPLIDCKDMLE_JCLCIBPCHPL_OFFSET UNITYSDK_OFFSET(0x157D9CD0)

inline static constexpr unsigned int JPLIDCKDMLE_TypeDefinitionIndex = 41639;

struct alignas(8) JPLIDCKDMLE
{
	::Unity::Collections::NativeArray_1<::HJFHBHFHHPN> PBLGGNBLDGK; // 0x10
	::System::Byte _padding0[0x8];
	::Unity::Collections::NativeArray_1<::DEDIGMHHFGN> HAOLLCKJCGE; // 0x20
	::System::Byte _padding1[0x8];
	::Unity::Collections::NativeArray_1<::DNNOGGDCKCP> LCGODLCNFEF; // 0x30
	::System::Byte _padding2[0x8];
	::System::Single LLBEKEFONPC; // 0x40

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JPLIDCKDMLE_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}

	static ::System::Boolean JCLCIBPCHPL(::DNNOGGDCKCP& EBMKIOCDHKN, ::DNNOGGDCKCP& EAKPGFJJGLP)
	{
		return ((::System::Boolean(*)(::DNNOGGDCKCP&, ::DNNOGGDCKCP&))((::PBYTE)hIl2Cpp + JPLIDCKDMLE_JCLCIBPCHPL_OFFSET))(EBMKIOCDHKN, EAKPGFJJGLP);
	}
};
