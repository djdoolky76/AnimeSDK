#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class IECNLPPHCHI;
class KADNEIMNGIJ_MBKGDLKNMLO;
namespace MoleMole { class TextureSheetAnimCurveParam; }

#define KADNEIMNGIJ_FMMIAIJKMIN_HHIFLDFFNAI_OFFSET UNITYSDK_OFFSET(0x17635CC0)
#define KADNEIMNGIJ_FMMIAIJKMIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17635CB0)

inline static constexpr unsigned int KADNEIMNGIJ_FMMIAIJKMIN_TypeDefinitionIndex = 72640;

class KADNEIMNGIJ_FMMIAIJKMIN : public ::System::Object
{
public:
	::MoleMole::TextureSheetAnimCurveParam* LCCCJNLHCAC; // 0x10
	::KADNEIMNGIJ_MBKGDLKNMLO* KGFKHBMEKBL; // 0x18
	::MoleMole::TextureSheetAnimCurveParam* ALLOPLHJOMK; // 0x20
	::UnityEngine::Vector4 HDPGPBNINGA; // 0x28
	::System::Int32 DKDEIAOMEJG; // 0x38
	::System::Int32 CHDADPMKFPC; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_FMMIAIJKMIN__CTOR_OFFSET))(this);
	}

	::System::Void HHIFLDFFNAI(::IECNLPPHCHI* PPLAEJKCJPE, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::IECNLPPHCHI*, ::System::Int32))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_FMMIAIJKMIN_HHIFLDFFNAI_OFFSET))(this, PPLAEJKCJPE, ABHBKFJKINO);
	}
};
