#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHackerDrone; }
namespace MoleMole::Config { class HackChargeConfig; }
namespace MoleMole::Config { class HackerDroneConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GEMHCNFMNLE_BHIKIDKMDJO_OFFSET UNITYSDK_OFFSET(0x116EC090)
#define GEMHCNFMNLE_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x116EB910)
#define GEMHCNFMNLE_DFFAEEKFPLB_OFFSET UNITYSDK_OFFSET(0x116EBC20)
#define GEMHCNFMNLE_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x116EBB30)
#define GEMHCNFMNLE_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x116EBEB0)

inline static constexpr unsigned int GEMHCNFMNLE_TypeDefinitionIndex = 48166;

class GEMHCNFMNLE : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHackerDrone** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigHackerDrone**)Il2CppClass::FromTypeDefinitionIndex(GEMHCNFMNLE_TypeDefinitionIndex)->GetStaticField(0x37870);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + GEMHCNFMNLE_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single OGKEBCPEPED, ::System::Action_1<::System::Single>* HAAJELGELCC, ::System::Action_1<::System::String*>* NPFIONPDFED, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + GEMHCNFMNLE_DGMLFELCAIO_OFFSET))(OGKEBCPEPED, HAAJELGELCC, NPFIONPDFED, HIAIKHDFCLN);
	}

	static ::System::Boolean DFFAEEKFPLB(::System::String* MCOHLHMKLIP, ::MoleMole::Config::HackerDroneConfig*& DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::HackerDroneConfig*&))((::PBYTE)hIl2Cpp + GEMHCNFMNLE_DFFAEEKFPLB_OFFSET))(MCOHLHMKLIP, DFMKILICPFB);
	}

	static ::MoleMole::Config::ConfigHackerDrone* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigHackerDrone*(*)())((::PBYTE)hIl2Cpp + GEMHCNFMNLE_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Boolean BHIKIDKMDJO(::System::String* MCOHLHMKLIP, ::MoleMole::Config::HackChargeConfig*& DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::HackChargeConfig*&))((::PBYTE)hIl2Cpp + GEMHCNFMNLE_BHIKIDKMDJO_OFFSET))(MCOHLHMKLIP, DFMKILICPFB);
	}
};
