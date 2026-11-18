#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigGlobalSoundActionIndex; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ISoundActionTriggerCondition; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DNLCNOPGBGA_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x148BAF00)
#define DNLCNOPGBGA_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x148BAFE0)
#define DNLCNOPGBGA_EFHLJNFPHOB_OFFSET UNITYSDK_OFFSET(0x148BB8D0)
#define DNLCNOPGBGA_EKHPIAPEMII_OFFSET UNITYSDK_OFFSET(0x148BB360)
#define DNLCNOPGBGA_GDNDECDIMIB_OFFSET UNITYSDK_OFFSET(0x148BB1B0)
#define DNLCNOPGBGA_MMGHAPAAAGI_OFFSET UNITYSDK_OFFSET(0x148BB0F0)
#define DNLCNOPGBGA_OHIEIKFNNEO_OFFSET UNITYSDK_OFFSET(0x148BB770)
#define DNLCNOPGBGA_PAHJFMKCENN_OFFSET UNITYSDK_OFFSET(0x148BB780)
#define DNLCNOPGBGA__CTOR_OFFSET UNITYSDK_OFFSET(0x148BACE0)

inline static constexpr unsigned int DNLCNOPGBGA_TypeDefinitionIndex = 38978;

class DNLCNOPGBGA
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetPath>* HJDBGGFJBON; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ISoundActionTriggerCondition*>* NMAFPMPBJAD; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>* FCIACPGBBEK; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLCNOPGBGA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLCNOPGBGA_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + DNLCNOPGBGA_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Collections::Generic::List_1<::System::String*>* MMGHAPAAAGI()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLCNOPGBGA_MMGHAPAAAGI_OFFSET))(this);
	}

	::System::Void GDNDECDIMIB(::MoleMole::Config::ConfigGlobalSoundActionIndex* PAMJIOAIBEJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGlobalSoundActionIndex*))((::PBYTE)hIl2Cpp + DNLCNOPGBGA_GDNDECDIMIB_OFFSET))(this, PAMJIOAIBEJ);
	}

	::System::Boolean EKHPIAPEMII(::System::String* MCOHLHMKLIP, ::MoleMole::Config::ConfigSoundActionGeneral*& GJBHEJGENMI, ::MoleMole::Config::ISoundActionTriggerCondition*& KANJODNFFOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*&, ::MoleMole::Config::ISoundActionTriggerCondition*&))((::PBYTE)hIl2Cpp + DNLCNOPGBGA_EKHPIAPEMII_OFFSET))(this, MCOHLHMKLIP, GJBHEJGENMI, KANJODNFFOI);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>* OHIEIKFNNEO()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLCNOPGBGA_OHIEIKFNNEO_OFFSET))(this);
	}

	::System::Boolean PAHJFMKCENN(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DNLCNOPGBGA_PAHJFMKCENN_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ISoundActionTriggerCondition*>* EFHLJNFPHOB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ISoundActionTriggerCondition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLCNOPGBGA_EFHLJNFPHOB_OFFSET))(this);
	}
};
