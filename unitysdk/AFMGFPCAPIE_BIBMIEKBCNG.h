#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralSubtitleV2PopWindowController; }
namespace System { class String; }

#define AFMGFPCAPIE_BIBMIEKBCNG_JAGFDKFNHBK_OFFSET UNITYSDK_OFFSET(0x16D72CE0)
#define AFMGFPCAPIE_BIBMIEKBCNG_ODMOIKOMMMC_OFFSET UNITYSDK_OFFSET(0x16D72670)
#define AFMGFPCAPIE_BIBMIEKBCNG_PEOKAKGIFIG_OFFSET UNITYSDK_OFFSET(0x16D72AE0)
#define AFMGFPCAPIE_BIBMIEKBCNG__CTOR_OFFSET UNITYSDK_OFFSET(0x16D72CD0)

inline static constexpr unsigned int AFMGFPCAPIE_BIBMIEKBCNG_TypeDefinitionIndex = 43904;

class AFMGFPCAPIE_BIBMIEKBCNG : public ::System::Object
{
public:
	static ::MoleMole::UIGeneralSubtitleV2PopWindowController** StaticGet_GMMENLDPHGN()
	{
		return (::MoleMole::UIGeneralSubtitleV2PopWindowController**)Il2CppClass::FromTypeDefinitionIndex(AFMGFPCAPIE_BIBMIEKBCNG_TypeDefinitionIndex)->GetStaticField(0x4FF60);
	}
	::MoleMole::UIGeneralSubtitleV2PopWindowController* JNIEMLEMCHN; // 0x10
	::System::Boolean EGBFGHNFADM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMGFPCAPIE_BIBMIEKBCNG__CTOR_OFFSET))(this);
	}

	::System::Void ODMOIKOMMMC(::System::String* GDGBFNGECIL, ::System::Int32 CKPGOKHECCH, ::System::Int32 NNDAFOLCHFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AFMGFPCAPIE_BIBMIEKBCNG_ODMOIKOMMMC_OFFSET))(this, GDGBFNGECIL, CKPGOKHECCH, NNDAFOLCHFD);
	}

	::System::Void PEOKAKGIFIG(::System::Int32 NNDAFOLCHFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFMGFPCAPIE_BIBMIEKBCNG_PEOKAKGIFIG_OFFSET))(this, NNDAFOLCHFD);
	}

	static ::System::Void JAGFDKFNHBK(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AFMGFPCAPIE_BIBMIEKBCNG_JAGFDKFNHBK_OFFSET))(NPPMJEIPMFC);
	}
};
