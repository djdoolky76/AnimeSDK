#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/cfg/SceneSizeType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ELNECDIHJFA_AEMLNCLMHKL_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define ELNECDIHJFA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ELNECDIHJFA_BKNENHNIOCA_OFFSET UNITYSDK_OFFSET(0x7DEBE0)
#define ELNECDIHJFA_CABFABMELAN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define ELNECDIHJFA_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define ELNECDIHJFA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ELNECDIHJFA_IOIENACFPEP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ELNECDIHJFA_NLBOALNBODH_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define ELNECDIHJFA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F4C680)
#define ELNECDIHJFA_OCEEOEELJFP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ELNECDIHJFA_PLOHAMOJHMJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define ELNECDIHJFA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ELNECDIHJFA_TypeDefinitionIndex = 9164;

struct alignas(4) ELNECDIHJFA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNECDIHJFA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELNECDIHJFA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ELNECDIHJFA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELNECDIHJFA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELNECDIHJFA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* AEMLNCLMHKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNECDIHJFA_AEMLNCLMHKL_OFFSET))(this);
	}

	::System::String* PLOHAMOJHMJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNECDIHJFA_PLOHAMOJHMJ_OFFSET))(this);
	}

	::System::Int32 NLBOALNBODH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNECDIHJFA_NLBOALNBODH_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNECDIHJFA_DECMGICKDLH_OFFSET))(this);
	}

	/*
	static ::ELNECDIHJFA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ELNECDIHJFA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ELNECDIHJFA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* IOIENACFPEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNECDIHJFA_IOIENACFPEP_OFFSET))(this);
	}

	::System::Int32 OCEEOEELJFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNECDIHJFA_OCEEOEELJFP_OFFSET))(this);
	}

	::cfg::SceneSizeType BKNENHNIOCA()
	{
		return ((::cfg::SceneSizeType(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNECDIHJFA_BKNENHNIOCA_OFFSET))(this);
	}

	::System::String* CABFABMELAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNECDIHJFA_CABFABMELAN_OFFSET))(this);
	}
};
