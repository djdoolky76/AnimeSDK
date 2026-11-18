#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LIBOIKJGAIH.h"

class COFJBKJFLCG;
class NBEJOIFJEKI;
namespace MoleMole { class ScrollViewItemWidgetController; }

#define NBEJOIFJEKI_FIJBMEBLKAP_BHENMMODFKA_OFFSET UNITYSDK_OFFSET(0x13ED0A90)
#define NBEJOIFJEKI_FIJBMEBLKAP_JFGILMEIMEM_OFFSET UNITYSDK_OFFSET(0x13ED0A10)
#define NBEJOIFJEKI_FIJBMEBLKAP__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED0A00)

inline static constexpr unsigned int NBEJOIFJEKI_FIJBMEBLKAP_TypeDefinitionIndex = 51005;

class NBEJOIFJEKI_FIJBMEBLKAP : public ::System::Object
{
public:
	::COFJBKJFLCG* BMPAJKMNAAO; // 0x10
	::NBEJOIFJEKI* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEJOIFJEKI_FIJBMEBLKAP__CTOR_OFFSET))(this);
	}

	::MoleMole::ScrollViewItemWidgetController* JFGILMEIMEM(::LIBOIKJGAIH EIEOJFEPMAB)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::LIBOIKJGAIH))((::PBYTE)hIl2Cpp + NBEJOIFJEKI_FIJBMEBLKAP_JFGILMEIMEM_OFFSET))(this, EIEOJFEPMAB);
	}

	::MoleMole::ScrollViewItemWidgetController* BHENMMODFKA(::LIBOIKJGAIH EIEOJFEPMAB)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::LIBOIKJGAIH))((::PBYTE)hIl2Cpp + NBEJOIFJEKI_FIJBMEBLKAP_BHENMMODFKA_OFFSET))(this, EIEOJFEPMAB);
	}
};
