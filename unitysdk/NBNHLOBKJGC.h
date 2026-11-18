#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ChessboardTextureSheetTagsData; }
namespace MoleMole { class ChessboardTextureTagConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NBNHLOBKJGC_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xE568AC0)
#define NBNHLOBKJGC_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xE568DC0)
#define NBNHLOBKJGC_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0xE568EB0)
#define NBNHLOBKJGC_LMCCIOGBBAA_OFFSET UNITYSDK_OFFSET(0xE5688C0)
#define NBNHLOBKJGC__CTOR_OFFSET UNITYSDK_OFFSET(0xE5688B0)

inline static constexpr unsigned int NBNHLOBKJGC_TypeDefinitionIndex = 92989;

class NBNHLOBKJGC : public ::System::Object
{
public:
	static ::MoleMole::ChessboardTextureSheetTagsData** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::ChessboardTextureSheetTagsData**)Il2CppClass::FromTypeDefinitionIndex(NBNHLOBKJGC_TypeDefinitionIndex)->GetStaticField(0x454B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNHLOBKJGC__CTOR_OFFSET))(this);
	}

	static ::MoleMole::ChessboardTextureTagConfig* LMCCIOGBBAA(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::ChessboardTextureTagConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + NBNHLOBKJGC_LMCCIOGBBAA_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NBNHLOBKJGC_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NBNHLOBKJGC_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::ChessboardTextureSheetTagsData* GACPDCEMJOA()
	{
		return ((::MoleMole::ChessboardTextureSheetTagsData*(*)())((::PBYTE)hIl2Cpp + NBNHLOBKJGC_GACPDCEMJOA_OFFSET))();
	}
};
