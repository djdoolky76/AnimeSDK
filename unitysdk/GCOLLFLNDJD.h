#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

class ELKLAIHBOCM;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadAssetOp_1; }
namespace MoleMole::Config { class EffectPatternInfoBatchLoad; }
namespace MoleMole::Config { class EffectPatternInfoConfig; }
namespace MoleMole::Config { class EffectPatternInfoConfig_PatternInfoItem; }
namespace MoleMole::Config { class EffectPatternInfoKeyBelongMap; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GCOLLFLNDJD_BDIIJDOCINM_OFFSET UNITYSDK_OFFSET(0x13DB8340)
#define GCOLLFLNDJD_BJIHJLGINGC_OFFSET UNITYSDK_OFFSET(0x13DB85B0)
#define GCOLLFLNDJD_GOPIGOPDJCJ_OFFSET UNITYSDK_OFFSET(0x13DB7FF0)
#define GCOLLFLNDJD_HBFNGMLLKKN_OFFSET UNITYSDK_OFFSET(0x13DB8330)
#define GCOLLFLNDJD_IIAEOJLAKLA_OFFSET UNITYSDK_OFFSET(0x13DB8900)
#define GCOLLFLNDJD_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13DB7F20)
#define GCOLLFLNDJD_KPGCOAEGILH_OFFSET UNITYSDK_OFFSET(0x13DB7C00)
#define GCOLLFLNDJD_LMOGKFCIJIC_OFFSET UNITYSDK_OFFSET(0x13DB8620)
#define GCOLLFLNDJD_MPHGGOKDLCO_OFFSET UNITYSDK_OFFSET(0x13DB7E00)
#define GCOLLFLNDJD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x13DB87D0)
#define GCOLLFLNDJD_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13DB7A60)
#define GCOLLFLNDJD__CTOR_OFFSET UNITYSDK_OFFSET(0x13DB7770)

inline static constexpr unsigned int GCOLLFLNDJD_TypeDefinitionIndex = 62160;

class GCOLLFLNDJD
{
public:
	::ELKLAIHBOCM* _FLHMIKECPLD_k__BackingField; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* PBBDLIFKBHE; // 0x30
	::ConfigModuleLib::Runtime::LoadAssetOp_1<::MoleMole::Config::EffectPatternInfoBatchLoad*>* PNJDMFPEHGN; // 0x38
	::ConfigModuleLib::Runtime::LoadAssetOp_1<::MoleMole::Config::EffectPatternInfoKeyBelongMap*>* MNDAAMHEBIJ; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* FOCGFJMNJAG; // 0x48
	::System::Boolean KJAJLHKLABA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOLLFLNDJD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GCOLLFLNDJD_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::System::Void KPGCOAEGILH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOLLFLNDJD_KPGCOAEGILH_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GCOLLFLNDJD_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GOPIGOPDJCJ(::MoleMole::Config::EffectPatternInfoConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectPatternInfoConfig*))((::PBYTE)hIl2Cpp + GCOLLFLNDJD_GOPIGOPDJCJ_OFFSET))(this, DFMKILICPFB);
	}

	::ELKLAIHBOCM* HBFNGMLLKKN()
	{
		return ((::ELKLAIHBOCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOLLFLNDJD_HBFNGMLLKKN_OFFSET))(this);
	}

	::System::Void MPHGGOKDLCO(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + GCOLLFLNDJD_MPHGGOKDLCO_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Boolean BDIIJDOCINM(::System::String* IAAHAOIADEN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GCOLLFLNDJD_BDIIJDOCINM_OFFSET))(this, IAAHAOIADEN);
	}

	::System::Boolean BJIHJLGINGC(::System::String* NCHCMKEAHCD, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*& PBLAIBLPPOO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*&))((::PBYTE)hIl2Cpp + GCOLLFLNDJD_BJIHJLGINGC_OFFSET))(this, NCHCMKEAHCD, PBLAIBLPPOO);
	}

	::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* LMOGKFCIJIC(::System::String* NCHCMKEAHCD)
	{
		return ((::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GCOLLFLNDJD_LMOGKFCIJIC_OFFSET))(this, NCHCMKEAHCD);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOLLFLNDJD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void IIAEOJLAKLA(::System::Int32 AJNFMBFOGJA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GCOLLFLNDJD_IIAEOJLAKLA_OFFSET))(this, AJNFMBFOGJA);
	}
};
