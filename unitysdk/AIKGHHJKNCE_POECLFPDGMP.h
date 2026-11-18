#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

class AFDLHNDKGHD;
namespace MoleMole { class TextureSheetSkipFrameParam; }
namespace System { class String; }

#define AIKGHHJKNCE_POECLFPDGMP_FFMBDBAJOCK_OFFSET UNITYSDK_OFFSET(0x6B9000)
#define AIKGHHJKNCE_POECLFPDGMP_PDFKIMHPHHH_OFFSET UNITYSDK_OFFSET(0x4035A0)
#define AIKGHHJKNCE_POECLFPDGMP__CTOR_OFFSET UNITYSDK_OFFSET(0x6B8FD0)

inline static constexpr unsigned int AIKGHHJKNCE_POECLFPDGMP_TypeDefinitionIndex = 58244;

struct alignas(8) AIKGHHJKNCE_POECLFPDGMP
{
	::System::Int32 FKFEGMOBDOJ; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* MCOHLHMKLIP; // 0x18
	::System::Boolean GDINHGLCODO; // 0x20
	::System::Byte _padding1[0x3];
	::MoleMole::TextureSheetType OBNIAHNMHPF; // 0x24
	::System::Int32 BOGPAHGJOJK; // 0x28
	::System::Byte _padding2[0x4];
	::MoleMole::TextureSheetSkipFrameParam* INNJGLKOLIH; // 0x30
	::System::Int32 MHEPDHDJJEE; // 0x38
	::System::Byte _padding3[0x4];
	::AFDLHNDKGHD* FOKPIKEMIOK; // 0x40
	::System::Nullable_1<::System::Single> _HANLCEDHOJG_k__BackingField; // 0x48

	::System::Void _ctor(::System::String* GJAMAGINFGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_POECLFPDGMP__CTOR_OFFSET))(this, GJAMAGINFGD);
	}

	::System::Void FFMBDBAJOCK(::System::Nullable_1<::System::Single> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_POECLFPDGMP_FFMBDBAJOCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Nullable_1<::System::Single> PDFKIMHPHHH()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_POECLFPDGMP_PDFKIMHPHHH_OFFSET))(this);
	}
};
