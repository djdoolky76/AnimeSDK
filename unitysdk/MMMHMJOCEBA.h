#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONDCMMIBPHD.h"

class BMDNLGGOIIH;
class OKOHJBHLKLK;
namespace MoleMole { class BubbleGroupPlayGraphContent; }
namespace System { class Action; }

#define MMMHMJOCEBA_BOCIEMBNLDE_OFFSET UNITYSDK_OFFSET(0x1A69EEC0)
#define MMMHMJOCEBA_CHHHPGHHCGA_OFFSET UNITYSDK_OFFSET(0x1A69ECE0)
#define MMMHMJOCEBA_OHEIHFHICHF_OFFSET UNITYSDK_OFFSET(0x1A69EC40)
#define MMMHMJOCEBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A69EB70)

inline static constexpr unsigned int MMMHMJOCEBA_TypeDefinitionIndex = 48599;

class MMMHMJOCEBA : public ::ONDCMMIBPHD
{
public:
	::System::Int32 KMMGKJPAOMF; // 0x60

	::System::Void _ctor(::System::Int32 KMMGKJPAOMF, ::System::Action* DMHCAMJLEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MMMHMJOCEBA__CTOR_OFFSET))(this, KMMGKJPAOMF, DMHCAMJLEPK);
	}

	::BMDNLGGOIIH* OHEIHFHICHF()
	{
		return ((::BMDNLGGOIIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMHMJOCEBA_OHEIHFHICHF_OFFSET))(this);
	}

	::OKOHJBHLKLK* CHHHPGHHCGA(::MoleMole::BubbleGroupPlayGraphContent* NGHLLDAJJJE, ::System::Int32 OJOEBEBNFCJ)
	{
		return ((::OKOHJBHLKLK*(*)(::PVOID, ::MoleMole::BubbleGroupPlayGraphContent*, ::System::Int32))((::PBYTE)hIl2Cpp + MMMHMJOCEBA_CHHHPGHHCGA_OFFSET))(this, NGHLLDAJJJE, OJOEBEBNFCJ);
	}

	::OKOHJBHLKLK* BOCIEMBNLDE(::MoleMole::BubbleGroupPlayGraphContent* MIALFKCCCPI, ::System::Int32 KMGKAIDEIBA)
	{
		return ((::OKOHJBHLKLK*(*)(::PVOID, ::MoleMole::BubbleGroupPlayGraphContent*, ::System::Int32))((::PBYTE)hIl2Cpp + MMMHMJOCEBA_BOCIEMBNLDE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
