#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGEGJIBNPMI.h"
#include "unitysdk/System/Object.h"

class MHGHEALBDLG;
namespace FlatBuffers { class ByteBuffer; }

#define BODKCHJHPKM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E900D00)
#define BODKCHJHPKM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E900D50)
#define BODKCHJHPKM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E901490)
#define BODKCHJHPKM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E900D40)

inline static constexpr unsigned int BODKCHJHPKM_TypeDefinitionIndex = 95188;

class BODKCHJHPKM : public ::System::Object
{
public:
	::NGEGJIBNPMI DHDJDGFNBOA; // 0x10
	::Il2CppArray<::MHGHEALBDLG*>* JMINOGAOFIL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODKCHJHPKM__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODKCHJHPKM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BODKCHJHPKM_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODKCHJHPKM_PHOADBJGFBE_OFFSET))(this);
	}
};
