#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

class HKLPMEAJCLP_DAMJCLDJKNI;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierKeyBelongMap; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKLPMEAJCLP_BBINLPJKIAO_OFFSET UNITYSDK_OFFSET(0x15BD94C0)
#define HKLPMEAJCLP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15BD8350)
#define HKLPMEAJCLP_GDLILMELDJB_OFFSET UNITYSDK_OFFSET(0x15BD8E80)
#define HKLPMEAJCLP_HDDLLPGEFHD_OFFSET UNITYSDK_OFFSET(0x15BD8470)
#define HKLPMEAJCLP_HLJNNEGJPHI_OFFSET UNITYSDK_OFFSET(0x15BD8CB0)
#define HKLPMEAJCLP_IGILJOFKFLF_OFFSET UNITYSDK_OFFSET(0x15BD8620)
#define HKLPMEAJCLP_IIAEOJLAKLA_OFFSET UNITYSDK_OFFSET(0x15BD96B0)
#define HKLPMEAJCLP_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x15BD9B80)
#define HKLPMEAJCLP_KNMNEMDLOMM_OFFSET UNITYSDK_OFFSET(0x15BD93C0)
#define HKLPMEAJCLP_PCGPFBGFGNC_OFFSET UNITYSDK_OFFSET(0x15BD8A60)
#define HKLPMEAJCLP_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x15BD82B0)
#define HKLPMEAJCLP__CTOR_OFFSET UNITYSDK_OFFSET(0x15BD8220)

inline static constexpr unsigned int HKLPMEAJCLP_TypeDefinitionIndex = 91253;

class HKLPMEAJCLP
{
public:
	::MoleMole::Config::ConfigMaterialPropertyModifierKeyBelongMap* FKJKOAPJOIN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLPMEAJCLP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_CREATEOP_OFFSET))(this);
	}

	::System::Void HDDLLPGEFHD(::System::Collections::Generic::List_1<::System::String*>* BLIGEFDLKEK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_HDDLLPGEFHD_OFFSET))(this, BLIGEFDLKEK);
	}

	::MoleMole::ConfigMaterialPropertyModifier* IGILJOFKFLF(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_IGILJOFKFLF_OFFSET))(this, MCOHLHMKLIP);
	}

	::MoleMole::ConfigAnimationCurveGroup* HLJNNEGJPHI(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::ConfigAnimationCurveGroup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_HLJNNEGJPHI_OFFSET))(this, MCOHLHMKLIP);
	}

	::MoleMole::ConfigMaterialPropertyModifier* PCGPFBGFGNC(::HKLPMEAJCLP_DAMJCLDJKNI* NGGNKKAMDGH, ::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID, ::HKLPMEAJCLP_DAMJCLDJKNI*, ::System::String*))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_PCGPFBGFGNC_OFFSET))(this, NGGNKKAMDGH, MCOHLHMKLIP);
	}

	static ::System::Void GDLILMELDJB(::HKLPMEAJCLP_DAMJCLDJKNI* NGGNKKAMDGH, ::MoleMole::Config::ConfigMaterialPropertyModifierMap* DFMKILICPFB)
	{
		return ((::System::Void(*)(::HKLPMEAJCLP_DAMJCLDJKNI*, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_GDLILMELDJB_OFFSET))(NGGNKKAMDGH, DFMKILICPFB);
	}

	static ::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>* KNMNEMDLOMM(::HKLPMEAJCLP_DAMJCLDJKNI* NGGNKKAMDGH, ::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO)
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*(*)(::HKLPMEAJCLP_DAMJCLDJKNI*, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_KNMNEMDLOMM_OFFSET))(NGGNKKAMDGH, JPOGGACGEPO);
	}

	static ::Il2CppArray<::Foundation::AssetPath>* BBINLPJKIAO()
	{
		return ((::Il2CppArray<::Foundation::AssetPath>*(*)())((::PBYTE)hIl2Cpp + HKLPMEAJCLP_BBINLPJKIAO_OFFSET))();
	}

	::System::Void IIAEOJLAKLA(::System::Int32 AJNFMBFOGJA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_IIAEOJLAKLA_OFFSET))(this, AJNFMBFOGJA);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
