#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IAAHGDFHCNB_HACIOPKCFEB;
namespace MoleMole { class ConfigRichtapResource; }
namespace MoleMole { class ConfigRichtapSound; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLFAEAFNCMN_BGKEPLHLDFM_HJDFGAPKGKA_OFFSET UNITYSDK_OFFSET(0x14708CE0)
#define HLFAEAFNCMN_BGKEPLHLDFM__CTOR_OFFSET UNITYSDK_OFFSET(0x14708CD0)

inline static constexpr unsigned int HLFAEAFNCMN_BGKEPLHLDFM_TypeDefinitionIndex = 42542;

class HLFAEAFNCMN_BGKEPLHLDFM : public ::System::Object
{
public:
	::MoleMole::ConfigRichtapSound* DFMKILICPFB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFAEAFNCMN_BGKEPLHLDFM__CTOR_OFFSET))(this);
	}

	::IAAHGDFHCNB_HACIOPKCFEB* HJDFGAPKGKA(::System::Collections::Generic::List_1<::MoleMole::ConfigRichtapResource*>* POCPFGFLABI)
	{
		return ((::IAAHGDFHCNB_HACIOPKCFEB*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ConfigRichtapResource*>*))((::PBYTE)hIl2Cpp + HLFAEAFNCMN_BGKEPLHLDFM_HJDFGAPKGKA_OFFSET))(this, POCPFGFLABI);
	}
};
