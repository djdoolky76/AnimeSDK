#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BHEKACANAMA;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class String; }

#define EEANCJBOEEJ_BNICIMEPKPL_OFFSET UNITYSDK_OFFSET(0x1353A220)
#define EEANCJBOEEJ_GEOFBMIHBPB_OFFSET UNITYSDK_OFFSET(0x1353A070)
#define EEANCJBOEEJ_KNKFACLEIND_OFFSET UNITYSDK_OFFSET(0x13539FA0)
#define EEANCJBOEEJ_NLOEEHFGBDM_OFFSET UNITYSDK_OFFSET(0x1353A140)

inline static constexpr unsigned int EEANCJBOEEJ_TypeDefinitionIndex = 83697;

class EEANCJBOEEJ : public ::System::Object
{
public:
	static ::BHEKACANAMA* KNKFACLEIND(::BHEKACANAMA* EGEGIMGMJHN, ::System::Boolean KJFIDGNOACA, ::System::Boolean EDOJFDPFMMI, ::System::String* EPJNHBMCAKB)
	{
		return ((::BHEKACANAMA*(*)(::BHEKACANAMA*, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + EEANCJBOEEJ_KNKFACLEIND_OFFSET))(EGEGIMGMJHN, KJFIDGNOACA, EDOJFDPFMMI, EPJNHBMCAKB);
	}

	static ::MoleMole::Config::DynamicInt* GEOFBMIHBPB(::MoleMole::Config::DynamicInt* EGEGIMGMJHN, ::System::Int32 KJFIDGNOACA, ::System::Boolean EDOJFDPFMMI, ::System::String* EPJNHBMCAKB)
	{
		return ((::MoleMole::Config::DynamicInt*(*)(::MoleMole::Config::DynamicInt*, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + EEANCJBOEEJ_GEOFBMIHBPB_OFFSET))(EGEGIMGMJHN, KJFIDGNOACA, EDOJFDPFMMI, EPJNHBMCAKB);
	}

	static ::MoleMole::Config::DynamicFloat* NLOEEHFGBDM(::MoleMole::Config::DynamicFloat* EGEGIMGMJHN, ::System::Single KJFIDGNOACA, ::System::Boolean EDOJFDPFMMI, ::System::String* EPJNHBMCAKB)
	{
		return ((::MoleMole::Config::DynamicFloat*(*)(::MoleMole::Config::DynamicFloat*, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + EEANCJBOEEJ_NLOEEHFGBDM_OFFSET))(EGEGIMGMJHN, KJFIDGNOACA, EDOJFDPFMMI, EPJNHBMCAKB);
	}

	static ::MoleMole::Config::DynamicString* BNICIMEPKPL(::MoleMole::Config::DynamicString* EGEGIMGMJHN, ::System::String* KJFIDGNOACA, ::System::Boolean EDOJFDPFMMI, ::System::String* EPJNHBMCAKB)
	{
		return ((::MoleMole::Config::DynamicString*(*)(::MoleMole::Config::DynamicString*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + EEANCJBOEEJ_BNICIMEPKPL_OFFSET))(EGEGIMGMJHN, KJFIDGNOACA, EDOJFDPFMMI, EPJNHBMCAKB);
	}
};
