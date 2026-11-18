#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTargetValue; }
namespace MoleMole::Config { class ConfigTargetValues; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDFPNIJFGIG_CKLBDAKKLED_OFFSET UNITYSDK_OFFSET(0x13E72010)
#define EDFPNIJFGIG_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x13E71E00)
#define EDFPNIJFGIG_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x13E72230)
#define EDFPNIJFGIG_JMAIKOLFDAA_OFFSET UNITYSDK_OFFSET(0x13E71B10)
#define EDFPNIJFGIG_NAIFGMCKLPP_OFFSET UNITYSDK_OFFSET(0x13E72320)
#define EDFPNIJFGIG_ODEHOHKJOIJ_OFFSET UNITYSDK_OFFSET(0x13E72360)
#define EDFPNIJFGIG_OODKIBHOBND_OFFSET UNITYSDK_OFFSET(0x13E721F0)

inline static constexpr unsigned int EDFPNIJFGIG_TypeDefinitionIndex = 88791;

class EDFPNIJFGIG : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigTargetValues** StaticGet_PKAFGJDGEGL()
	{
		return (::MoleMole::Config::ConfigTargetValues**)Il2CppClass::FromTypeDefinitionIndex(EDFPNIJFGIG_TypeDefinitionIndex)->GetStaticField(0x374D0);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* JMAIKOLFDAA()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + EDFPNIJFGIG_JMAIKOLFDAA_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + EDFPNIJFGIG_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigTargetValues* CKLBDAKKLED()
	{
		return ((::MoleMole::Config::ConfigTargetValues*(*)())((::PBYTE)hIl2Cpp + EDFPNIJFGIG_CKLBDAKKLED_OFFSET))();
	}

	static ::System::Single OODKIBHOBND()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + EDFPNIJFGIG_OODKIBHOBND_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + EDFPNIJFGIG_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Int32 NAIFGMCKLPP()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + EDFPNIJFGIG_NAIFGMCKLPP_OFFSET))();
	}

	static ::MoleMole::Config::ConfigTargetValue* ODEHOHKJOIJ(::System::String* AELLPLBJELA)
	{
		return ((::MoleMole::Config::ConfigTargetValue*(*)(::System::String*))((::PBYTE)hIl2Cpp + EDFPNIJFGIG_ODEHOHKJOIJ_OFFSET))(AELLPLBJELA);
	}
};
