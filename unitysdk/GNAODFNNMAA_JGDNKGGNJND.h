#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GKLCNICJJOB.h"

class GNAODFNNMAA;
namespace MoleMole { class ScrollViewItemWidgetController; }

#define GNAODFNNMAA_JGDNKGGNJND_CEELEDDMNJA_OFFSET UNITYSDK_OFFSET(0x13D6C090)
#define GNAODFNNMAA_JGDNKGGNJND_DKBNILCFHKF_OFFSET UNITYSDK_OFFSET(0x13D6BFA0)
#define GNAODFNNMAA_JGDNKGGNJND__CTOR_OFFSET UNITYSDK_OFFSET(0x13D6BF90)

inline static constexpr unsigned int GNAODFNNMAA_JGDNKGGNJND_TypeDefinitionIndex = 79306;

class GNAODFNNMAA_JGDNKGGNJND : public ::System::Object
{
public:
	::GNAODFNNMAA* KLHPEBKNIFB; // 0x10
	::System::Int32 BIOGEIHKABE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNAODFNNMAA_JGDNKGGNJND__CTOR_OFFSET))(this);
	}

	::GKLCNICJJOB DKBNILCFHKF(::System::Int32 ABHBKFJKINO)
	{
		return ((::GKLCNICJJOB(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNAODFNNMAA_JGDNKGGNJND_DKBNILCFHKF_OFFSET))(this, ABHBKFJKINO);
	}

	::MoleMole::ScrollViewItemWidgetController* CEELEDDMNJA(::System::Int32 ABHBKFJKINO)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNAODFNNMAA_JGDNKGGNJND_CEELEDDMNJA_OFFSET))(this, ABHBKFJKINO);
	}
};
