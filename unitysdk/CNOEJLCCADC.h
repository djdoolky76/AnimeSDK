#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSideScrollingCamera; }
namespace MoleMole::Config { class ConfigSideScrollingLevel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CNOEJLCCADC_CBOIDMLCEGI_OFFSET UNITYSDK_OFFSET(0x19A1A810)
#define CNOEJLCCADC_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x19A1A960)
#define CNOEJLCCADC_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x19A1A850)
#define CNOEJLCCADC_HFCDNGJDFPI_OFFSET UNITYSDK_OFFSET(0x19A1AC00)
#define CNOEJLCCADC_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x19A1B0E0)
#define CNOEJLCCADC_LDOHECEHMFK_OFFSET UNITYSDK_OFFSET(0x19A1ABC0)
#define CNOEJLCCADC__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A1A7D0)

inline static constexpr unsigned int CNOEJLCCADC_TypeDefinitionIndex = 59183;

class CNOEJLCCADC : public ::System::Object
{
public:
	static ::System::String** StaticGet_MEOCOOALPPB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CNOEJLCCADC_TypeDefinitionIndex)->GetStaticField(0x312D0);
	}
	static ::MoleMole::Config::ConfigSideScrollingLevel** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigSideScrollingLevel**)Il2CppClass::FromTypeDefinitionIndex(CNOEJLCCADC_TypeDefinitionIndex)->GetStaticField(0x312D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNOEJLCCADC__CCTOR_OFFSET))();
	}

	static ::System::Boolean CBOIDMLCEGI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNOEJLCCADC_CBOIDMLCEGI_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CNOEJLCCADC_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void LDOHECEHMFK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNOEJLCCADC_LDOHECEHMFK_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CNOEJLCCADC_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigSideScrollingCamera* HFCDNGJDFPI(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigSideScrollingCamera*(*)(::System::String*))((::PBYTE)hIl2Cpp + CNOEJLCCADC_HFCDNGJDFPI_OFFSET))(MCOHLHMKLIP);
	}

	static ::MoleMole::Config::ConfigSideScrollingLevel* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigSideScrollingLevel*(*)())((::PBYTE)hIl2Cpp + CNOEJLCCADC_KGNEJKNNODJ_OFFSET))();
	}
};
