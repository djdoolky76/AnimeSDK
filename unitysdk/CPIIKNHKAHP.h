#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CPIIKNHKAHP_ACDJEPMIKKP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CPIIKNHKAHP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CPIIKNHKAHP_BKPKFJPHJIK_OFFSET UNITYSDK_OFFSET(0x761240)
#define CPIIKNHKAHP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CPIIKNHKAHP_GLOEIDIFKHJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CPIIKNHKAHP_LMAMDCBOIME_OFFSET UNITYSDK_OFFSET(0x754970)
#define CPIIKNHKAHP_MHOEJADFIHN_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define CPIIKNHKAHP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16613DB0)
#define CPIIKNHKAHP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CPIIKNHKAHP_TypeDefinitionIndex = 9190;

struct alignas(4) CPIIKNHKAHP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIIKNHKAHP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPIIKNHKAHP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean MHOEJADFIHN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CPIIKNHKAHP_MHOEJADFIHN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CPIIKNHKAHP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CPIIKNHKAHP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CPIIKNHKAHP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GLOEIDIFKHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIIKNHKAHP_GLOEIDIFKHJ_OFFSET))(this);
	}

	::System::Int32 LMAMDCBOIME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIIKNHKAHP_LMAMDCBOIME_OFFSET))(this);
	}

	::System::String* ACDJEPMIKKP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIIKNHKAHP_ACDJEPMIKKP_OFFSET))(this);
	}

	::System::Int32 BKPKFJPHJIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIIKNHKAHP_BKPKFJPHJIK_OFFSET))(this);
	}

	/*
	::CPIIKNHKAHP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CPIIKNHKAHP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPIIKNHKAHP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
