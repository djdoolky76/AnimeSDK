#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAFPCPPDJOJ;
class GIGFDLPMNND;
namespace System { class String; }

#define EONLJCAPEFO_BBBKHKIDFBJ_OFFSET UNITYSDK_OFFSET(0x1724FCA0)
#define EONLJCAPEFO_BBFDKMFDKML_OFFSET UNITYSDK_OFFSET(0x1724FDF0)
#define EONLJCAPEFO_FGODNOMGCDI_OFFSET UNITYSDK_OFFSET(0x17250070)

inline static constexpr unsigned int EONLJCAPEFO_TypeDefinitionIndex = 49395;

class EONLJCAPEFO : public ::System::Object
{
public:
	// static const ::System::String* JOLKGGKKEOF; // 0x0
	// static const ::System::String* KNDDGPPKOFA; // 0x0

	static ::System::Void BBBKHKIDFBJ(::CAFPCPPDJOJ* HFALBGDOFFO)
	{
		return ((::System::Void(*)(::CAFPCPPDJOJ*))((::PBYTE)hIl2Cpp + EONLJCAPEFO_BBBKHKIDFBJ_OFFSET))(HFALBGDOFFO);
	}

	static ::System::Void FGODNOMGCDI(::CAFPCPPDJOJ* HFALBGDOFFO, ::System::String* GJIPKPAEDOM, ::System::Boolean GMGOGHOLIJJ, ::System::String* IBLGCCMHFOB, ::System::Boolean DDBNNJGFMPD, ::System::String* AMIKICIFFKL, ::System::Boolean EMHGBBNGGGK)
	{
		return ((::System::Void(*)(::CAFPCPPDJOJ*, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + EONLJCAPEFO_FGODNOMGCDI_OFFSET))(HFALBGDOFFO, GJIPKPAEDOM, GMGOGHOLIJJ, IBLGCCMHFOB, DDBNNJGFMPD, AMIKICIFFKL, EMHGBBNGGGK);
	}

	static ::System::Boolean BBFDKMFDKML(::CAFPCPPDJOJ* HFALBGDOFFO, ::GIGFDLPMNND*& NLNNFINONOI)
	{
		return ((::System::Boolean(*)(::CAFPCPPDJOJ*, ::GIGFDLPMNND*&))((::PBYTE)hIl2Cpp + EONLJCAPEFO_BBFDKMFDKML_OFFSET))(HFALBGDOFFO, NLNNFINONOI);
	}
};
