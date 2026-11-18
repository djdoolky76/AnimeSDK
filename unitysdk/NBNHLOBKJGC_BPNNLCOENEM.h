#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ChessboardTextureSheetTagsData; }
namespace System { class Action; }

#define NBNHLOBKJGC_BPNNLCOENEM_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x12FDD390)
#define NBNHLOBKJGC_BPNNLCOENEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12FDD380)

inline static constexpr unsigned int NBNHLOBKJGC_BPNNLCOENEM_TypeDefinitionIndex = 92990;

class NBNHLOBKJGC_BPNNLCOENEM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNHLOBKJGC_BPNNLCOENEM__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ChessboardTextureSheetTagsData* NGLKIKLLLFL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ChessboardTextureSheetTagsData*))((::PBYTE)hIl2Cpp + NBNHLOBKJGC_BPNNLCOENEM_OKKMJKOAIKG_OFFSET))(this, NGLKIKLLLFL);
	}
};
