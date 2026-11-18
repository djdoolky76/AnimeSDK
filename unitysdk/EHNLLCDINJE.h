#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
class PJJLKMKGCDG;
namespace MoleMole { class UIBaseController; }
namespace System { template <typename T> class Action_1; }

#define EHNLLCDINJE_COKNIICCODC_1_OFFSET UNITYSDK_OFFSET(0x17111120)
#define EHNLLCDINJE_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x17110F30)
#define EHNLLCDINJE_FHFPEFMLLFH_OFFSET UNITYSDK_OFFSET(0x17110DD0)
#define EHNLLCDINJE_LDKPIFKHGKM_OFFSET UNITYSDK_OFFSET(0x17110F20)
#define EHNLLCDINJE_NHKAMCDPNEM_OFFSET UNITYSDK_OFFSET(0x171108C0)
#define EHNLLCDINJE__CTOR_OFFSET UNITYSDK_OFFSET(0x17110F10)

inline static constexpr unsigned int EHNLLCDINJE_TypeDefinitionIndex = 81391;

class EHNLLCDINJE : public ::System::Object
{
public:
	::MoleMole::UIBaseController* ADNFJEENCAM; // 0x10
	::System::Action_1<::ENGKPGFGGLM*>* PLGLKDMLBLE; // 0x18
	::System::Boolean CIFLENFEEGN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNLLCDINJE__CTOR_OFFSET))(this);
	}

	::System::Void NHKAMCDPNEM(::PJJLKMKGCDG* AAOCANGHBDG, ::MoleMole::UIBaseController* IHCOOKNHPIM)
	{
		return ((::System::Void(*)(::PVOID, ::PJJLKMKGCDG*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + EHNLLCDINJE_NHKAMCDPNEM_OFFSET))(this, AAOCANGHBDG, IHCOOKNHPIM);
	}

	::System::Void FHFPEFMLLFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNLLCDINJE_FHFPEFMLLFH_OFFSET))(this);
	}

	::MoleMole::UIBaseController* LDKPIFKHGKM()
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNLLCDINJE_LDKPIFKHGKM_OFFSET))(this);
	}

	static ::EHNLLCDINJE* COKNIICCODC(::PJJLKMKGCDG* AAOCANGHBDG, ::MoleMole::UIBaseController* IHCOOKNHPIM)
	{
		return ((::EHNLLCDINJE*(*)(::PJJLKMKGCDG*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + EHNLLCDINJE_COKNIICCODC_OFFSET))(AAOCANGHBDG, IHCOOKNHPIM);
	}

	static ::EHNLLCDINJE* COKNIICCODC_1()
	{
		return ((::EHNLLCDINJE*(*)())((::PBYTE)hIl2Cpp + EHNLLCDINJE_COKNIICCODC_1_OFFSET))();
	}
};
