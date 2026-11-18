#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GLMOEGEIJMG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GLMOEGEIJMG_CFBKEHGHHHN_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define GLMOEGEIJMG_DDMABEIPNIL_OFFSET UNITYSDK_OFFSET(0x754970)
#define GLMOEGEIJMG_DHCKGBFNAGJ_OFFSET UNITYSDK_OFFSET(0x757190)
#define GLMOEGEIJMG_FGDLEAHMNII_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define GLMOEGEIJMG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLMOEGEIJMG_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GLMOEGEIJMG_GOPAOBCNFLJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define GLMOEGEIJMG_JIIHDCIOOGA_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define GLMOEGEIJMG_JMFKAJEIGMI_OFFSET UNITYSDK_OFFSET(0x756720)
#define GLMOEGEIJMG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B86F1E0)
#define GLMOEGEIJMG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GLMOEGEIJMG_TypeDefinitionIndex = 13761;

struct alignas(4) GLMOEGEIJMG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMOEGEIJMG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLMOEGEIJMG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMOEGEIJMG_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	static ::GLMOEGEIJMG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GLMOEGEIJMG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GLMOEGEIJMG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* JIIHDCIOOGA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMOEGEIJMG_JIIHDCIOOGA_OFFSET))(this);
	}

	::System::String* CFBKEHGHHHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMOEGEIJMG_CFBKEHGHHHN_OFFSET))(this);
	}

	::System::String* DHCKGBFNAGJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMOEGEIJMG_DHCKGBFNAGJ_OFFSET))(this);
	}

	::System::Int32 JMFKAJEIGMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMOEGEIJMG_JMFKAJEIGMI_OFFSET))(this);
	}

	::System::Int32 GOPAOBCNFLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMOEGEIJMG_GOPAOBCNFLJ_OFFSET))(this);
	}

	::System::Int32 DDMABEIPNIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMOEGEIJMG_DDMABEIPNIL_OFFSET))(this);
	}

	::System::Boolean FGDLEAHMNII(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GLMOEGEIJMG_FGDLEAHMNII_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GLMOEGEIJMG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLMOEGEIJMG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLMOEGEIJMG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
