#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BBEGNBOJLBK_BBKGGJDNOFI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BBEGNBOJLBK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BBEGNBOJLBK_CAJMBBGNNED_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define BBEGNBOJLBK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BBEGNBOJLBK_IKOCCCGGFHL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BBEGNBOJLBK_IPAPJPEFJBG_OFFSET UNITYSDK_OFFSET(0x756D50)
#define BBEGNBOJLBK_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BBEGNBOJLBK_NFDDMGBFGNI_OFFSET UNITYSDK_OFFSET(0x754920)
#define BBEGNBOJLBK_NILELEBPLLK_OFFSET UNITYSDK_OFFSET(0x761240)
#define BBEGNBOJLBK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BBEGNBOJLBK_TypeDefinitionIndex = 11899;

struct alignas(4) BBEGNBOJLBK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEGNBOJLBK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBEGNBOJLBK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFDDMGBFGNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEGNBOJLBK_NFDDMGBFGNI_OFFSET))(this);
	}

	/*
	::BBEGNBOJLBK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBEGNBOJLBK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBEGNBOJLBK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEGNBOJLBK_MLKFNKGDBPN_OFFSET))(this);
	}

	::System::Int32 IKOCCCGGFHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEGNBOJLBK_IKOCCCGGFHL_OFFSET))(this);
	}

	::System::String* IPAPJPEFJBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEGNBOJLBK_IPAPJPEFJBG_OFFSET))(this);
	}

	::System::Boolean CAJMBBGNNED(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BBEGNBOJLBK_CAJMBBGNNED_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BBKGGJDNOFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEGNBOJLBK_BBKGGJDNOFI_OFFSET))(this);
	}

	::System::Int32 NILELEBPLLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEGNBOJLBK_NILELEBPLLK_OFFSET))(this);
	}
};
