#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFDDLEHKGIK.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"

class GECKFNANGKB;
class HPGBIDMABJP;
namespace MoleMole { class UIInLevelMainPageController; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Threading::Tasks { class Task; }

#define NOKIMDGBFKI_BMCKMFGDDCI_OFFSET UNITYSDK_OFFSET(0xE1ADF90)
#define NOKIMDGBFKI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE1AE450)
#define NOKIMDGBFKI_EMLNHJHLDHE_OFFSET UNITYSDK_OFFSET(0xE1AE010)
#define NOKIMDGBFKI_HHHHNANHHNN_OFFSET UNITYSDK_OFFSET(0xE1AE4E0)
#define NOKIMDGBFKI_NGOHPLLIINI_OFFSET UNITYSDK_OFFSET(0xE1AE280)
#define NOKIMDGBFKI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE1ADD20)
#define NOKIMDGBFKI__CTOR_OFFSET UNITYSDK_OFFSET(0xE1ADF10)

inline static constexpr unsigned int NOKIMDGBFKI_TypeDefinitionIndex = 60991;

class NOKIMDGBFKI : public ::LFDDLEHKGIK
{
public:
	::HPGBIDMABJP* KDMABPELCGN; // 0x40
	::MoleMole::UIInLevelMainPageController* EAOJNPEHCGH; // 0x48
	::GECKFNANGKB* PHBBDGJLLGE; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKIMDGBFKI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKIMDGBFKI_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* BMCKMFGDDCI()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKIMDGBFKI_BMCKMFGDDCI_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType EMLNHJHLDHE()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKIMDGBFKI_EMLNHJHLDHE_OFFSET))(this);
	}

	::System::Threading::Tasks::Task* NGOHPLLIINI()
	{
		return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKIMDGBFKI_NGOHPLLIINI_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKIMDGBFKI_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void HHHHNANHHNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKIMDGBFKI_HHHHNANHHNN_OFFSET))(this);
	}
};
