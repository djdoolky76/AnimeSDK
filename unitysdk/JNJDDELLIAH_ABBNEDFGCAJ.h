#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JNJDDELLIAH;
namespace MoleMole { class UIInLevelPauseDialogPopWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define JNJDDELLIAH_ABBNEDFGCAJ_AGBMGKPAKEH_OFFSET UNITYSDK_OFFSET(0x13C3B970)
#define JNJDDELLIAH_ABBNEDFGCAJ_JBOMDDEKBGG_OFFSET UNITYSDK_OFFSET(0x13C3B720)
#define JNJDDELLIAH_ABBNEDFGCAJ_JKGCIFGLDOJ_OFFSET UNITYSDK_OFFSET(0x13C3B7C0)
#define JNJDDELLIAH_ABBNEDFGCAJ_KMNOBFFAOPF_OFFSET UNITYSDK_OFFSET(0x13C3BA50)
#define JNJDDELLIAH_ABBNEDFGCAJ_OKMFLNDDLLG_OFFSET UNITYSDK_OFFSET(0x13C3B9E0)
#define JNJDDELLIAH_ABBNEDFGCAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13C3B710)

inline static constexpr unsigned int JNJDDELLIAH_ABBNEDFGCAJ_TypeDefinitionIndex = 52353;

class JNJDDELLIAH_ABBNEDFGCAJ : public ::System::Object
{
public:
	::JNJDDELLIAH* KLHPEBKNIFB; // 0x10
	::System::Func_1<::System::Boolean>* KAKAEMACNPB; // 0x18
	::MoleMole::UIInLevelPauseDialogPopWindowController* MGHFGDFPGMN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_ABBNEDFGCAJ__CTOR_OFFSET))(this);
	}

	::System::Void JBOMDDEKBGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_ABBNEDFGCAJ_JBOMDDEKBGG_OFFSET))(this);
	}

	::System::Boolean AGBMGKPAKEH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_ABBNEDFGCAJ_AGBMGKPAKEH_OFFSET))(this);
	}

	::System::Void JKGCIFGLDOJ(::System::Action* CHHCFHPCDDE, ::System::String* PFLKHEPPIPJ, ::System::Func_1<::System::Boolean>* MAIKCHIHIHE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::String*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + JNJDDELLIAH_ABBNEDFGCAJ_JKGCIFGLDOJ_OFFSET))(this, CHHCFHPCDDE, PFLKHEPPIPJ, MAIKCHIHIHE);
	}

	::System::Void OKMFLNDDLLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_ABBNEDFGCAJ_OKMFLNDDLLG_OFFSET))(this);
	}

	::System::Void KMNOBFFAOPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_ABBNEDFGCAJ_KMNOBFFAOPF_OFFSET))(this);
	}
};
