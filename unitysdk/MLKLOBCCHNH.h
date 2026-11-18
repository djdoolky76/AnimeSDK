#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class MLKLOBCCHNH_KDCAOFFAKJG;
class MLKLOBCCHNH_OEMONJDMOJD;
namespace MoleMole { class SystemSettingEntryBase; }
namespace MoleMole::Config { class ConfigInputSetting; }
namespace MoleMole::Config { class ConfigSystemSetting; }
namespace MoleMole::Config { class InputCodeSetting; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MLKLOBCCHNH_AOLPPGNPHKM_OFFSET UNITYSDK_OFFSET(0x18B56CC0)
#define MLKLOBCCHNH_CCGFPFJGALF_OFFSET UNITYSDK_OFFSET(0x18B56EE0)
#define MLKLOBCCHNH_DHLODOHCCHD_OFFSET UNITYSDK_OFFSET(0x18B567F0)
#define MLKLOBCCHNH_HBNLKJKEHCK_OFFSET UNITYSDK_OFFSET(0x18B562B0)
#define MLKLOBCCHNH_HELMAOJFHBL_OFFSET UNITYSDK_OFFSET(0x18B565B0)
#define MLKLOBCCHNH_HJOBAJHKBOL_OFFSET UNITYSDK_OFFSET(0x18B56800)
#define MLKLOBCCHNH_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x18B55E00)
#define MLKLOBCCHNH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x18B571A0)
#define MLKLOBCCHNH_KKPNIMIPHEJ_OFFSET UNITYSDK_OFFSET(0x18B56ED0)
#define MLKLOBCCHNH_LKDHABNBLOC_OFFSET UNITYSDK_OFFSET(0x18B56FC0)
#define MLKLOBCCHNH_OFPGLOPHDLO_OFFSET UNITYSDK_OFFSET(0x18B55ED0)
#define MLKLOBCCHNH_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x18B55B60)
#define MLKLOBCCHNH__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B55D50)
#define MLKLOBCCHNH__CTOR_OFFSET UNITYSDK_OFFSET(0x18B55A10)

inline static constexpr unsigned int MLKLOBCCHNH_TypeDefinitionIndex = 55565;

class MLKLOBCCHNH
{
public:
	static ::Il2CppArray<::MoleMole::ESystemSettingType>** StaticGet_LNDKJJKKJGK()
	{
		return (::Il2CppArray<::MoleMole::ESystemSettingType>**)Il2CppClass::FromTypeDefinitionIndex(MLKLOBCCHNH_TypeDefinitionIndex)->GetStaticField(0x46AE0);
	}
	::MLKLOBCCHNH_KDCAOFFAKJG* _BPEFFMOJNBH_k__BackingField; // 0x28
	::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>* JLHKGBJDJKK; // 0x30
	::MLKLOBCCHNH_OEMONJDMOJD* _CHIBLMADKGD_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKLOBCCHNH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLKLOBCCHNH__CCTOR_OFFSET))();
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>* OFPGLOPHDLO()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_OFPGLOPHDLO_OFFSET))(this);
	}

	::System::Boolean HELMAOJFHBL(::MoleMole::ESystemSettingType JELHEKJMJNI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_HELMAOJFHBL_OFFSET))(this, JELHEKJMJNI);
	}

	::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>* HBNLKJKEHCK(::MoleMole::ESystemSettingType KNLHNJJGLBA)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_HBNLKJKEHCK_OFFSET))(this, KNLHNJJGLBA);
	}

	::MLKLOBCCHNH_OEMONJDMOJD* DHLODOHCCHD()
	{
		return ((::MLKLOBCCHNH_OEMONJDMOJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_DHLODOHCCHD_OFFSET))(this);
	}

	::System::Void HJOBAJHKBOL(::MoleMole::Config::ConfigInputSetting* MIGKFEIANKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigInputSetting*))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_HJOBAJHKBOL_OFFSET))(this, MIGKFEIANKM);
	}

	::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>* AOLPPGNPHKM()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_AOLPPGNPHKM_OFFSET))(this);
	}

	::MLKLOBCCHNH_KDCAOFFAKJG* KKPNIMIPHEJ()
	{
		return ((::MLKLOBCCHNH_KDCAOFFAKJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_KKPNIMIPHEJ_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>* CCGFPFJGALF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_CCGFPFJGALF_OFFSET))(this);
	}

	::System::Void LKDHABNBLOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_LKDHABNBLOC_OFFSET))(this);
	}

	::MoleMole::Config::ConfigSystemSetting* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigSystemSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_KGNEJKNNODJ_OFFSET))(this);
	}
};
