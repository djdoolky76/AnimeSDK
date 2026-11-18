#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAEMHFPDNEA.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KDEGNKINJFH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KDEGNKINJFH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KDEGNKINJFH_BKNANJJEJNE_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define KDEGNKINJFH_BODJHHNLBFC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KDEGNKINJFH_EECNDNIAFBM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KDEGNKINJFH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDEGNKINJFH_HJFCIELMJPA_OFFSET UNITYSDK_OFFSET(0x754920)
#define KDEGNKINJFH_IADPGFDDDPO_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define KDEGNKINJFH_IEJHJDNKLGK_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KDEGNKINJFH_KKPCMMCJPMB_OFFSET UNITYSDK_OFFSET(0x761710)
#define KDEGNKINJFH_KNFHKNIJCFN_OFFSET UNITYSDK_OFFSET(0x758840)
#define KDEGNKINJFH_LCPNIJLOINI_OFFSET UNITYSDK_OFFSET(0x757330)
#define KDEGNKINJFH_LGNOFOGLIBK_OFFSET UNITYSDK_OFFSET(0x757290)
#define KDEGNKINJFH_MDICIFDHHHL_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define KDEGNKINJFH_MLCPPDGJELG_OFFSET UNITYSDK_OFFSET(0x763920)
#define KDEGNKINJFH_NBGCBDKDIOK_OFFSET UNITYSDK_OFFSET(0x755D70)
#define KDEGNKINJFH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A508C10)
#define KDEGNKINJFH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KDEGNKINJFH_TypeDefinitionIndex = 13218;

struct alignas(4) KDEGNKINJFH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGNKINJFH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDEGNKINJFH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MDICIFDHHHL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGNKINJFH_MDICIFDHHHL_OFFSET))(this);
	}

	::System::String* KKPCMMCJPMB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGNKINJFH_KKPCMMCJPMB_OFFSET))(this);
	}

	::System::Int32 BKNANJJEJNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGNKINJFH_BKNANJJEJNE_OFFSET))(this);
	}

	::System::String* IEJHJDNKLGK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGNKINJFH_IEJHJDNKLGK_OFFSET))(this);
	}

	::System::Int32 BODJHHNLBFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGNKINJFH_BODJHHNLBFC_OFFSET))(this);
	}

	::System::Boolean MLCPPDGJELG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KDEGNKINJFH_MLCPPDGJELG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::KDEGNKINJFH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDEGNKINJFH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDEGNKINJFH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LGNOFOGLIBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGNKINJFH_LGNOFOGLIBK_OFFSET))(this);
	}

	::System::Boolean NBGCBDKDIOK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KDEGNKINJFH_NBGCBDKDIOK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGNKINJFH_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 HJFCIELMJPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGNKINJFH_HJFCIELMJPA_OFFSET))(this);
	}

	::AAEMHFPDNEA IADPGFDDDPO()
	{
		return ((::AAEMHFPDNEA(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGNKINJFH_IADPGFDDDPO_OFFSET))(this);
	}

	/*
	static ::KDEGNKINJFH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KDEGNKINJFH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KDEGNKINJFH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 EECNDNIAFBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGNKINJFH_EECNDNIAFBM_OFFSET))(this);
	}

	::System::Int32 LCPNIJLOINI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGNKINJFH_LCPNIJLOINI_OFFSET))(this);
	}

	::System::Boolean KNFHKNIJCFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGNKINJFH_KNFHKNIJCFN_OFFSET))(this);
	}
};
