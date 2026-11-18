#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class EffectPatternInfoBatchLoad; }
namespace MoleMole::Config { class EffectPatternInfoConfig_PatternInfoItem; }
namespace MoleMole::Config { class EffectPatternInfoKeyBelongMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AANOMDNBAHD_BDIIJDOCINM_OFFSET UNITYSDK_OFFSET(0x1349D4C0)
#define AANOMDNBAHD_BJIHJLGINGC_OFFSET UNITYSDK_OFFSET(0x1349E070)
#define AANOMDNBAHD_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1349DD20)
#define AANOMDNBAHD_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1349ED80)
#define AANOMDNBAHD_IIAEOJLAKLA_OFFSET UNITYSDK_OFFSET(0x1349E680)
#define AANOMDNBAHD_LMOGKFCIJIC_OFFSET UNITYSDK_OFFSET(0x1349E2C0)
#define AANOMDNBAHD_MCNJBCHONDE_OFFSET UNITYSDK_OFFSET(0x1349DAE0)
#define AANOMDNBAHD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1349EAA0)
#define AANOMDNBAHD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1349D3C0)

inline static constexpr unsigned int AANOMDNBAHD_TypeDefinitionIndex = 67887;

class AANOMDNBAHD : public ::System::Object
{
public:
	static ::MoleMole::Config::EffectPatternInfoBatchLoad** StaticGet_LFDCFKGIOKM()
	{
		return (::MoleMole::Config::EffectPatternInfoBatchLoad**)Il2CppClass::FromTypeDefinitionIndex(AANOMDNBAHD_TypeDefinitionIndex)->GetStaticField(0x36940);
	}
	static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_DONIBNIPOEK()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AANOMDNBAHD_TypeDefinitionIndex)->GetStaticField(0x36948);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_IBNIEDAOMBO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AANOMDNBAHD_TypeDefinitionIndex)->GetStaticField(0x36950);
	}
	static ::System::Collections::Generic::HashSet_1<::Foundation::AssetPath>** StaticGet_IPLLBANDGGK()
	{
		return (::System::Collections::Generic::HashSet_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(AANOMDNBAHD_TypeDefinitionIndex)->GetStaticField(0x36958);
	}
	static ::MoleMole::Config::EffectPatternInfoKeyBelongMap** StaticGet_FGKKAMHDKMI()
	{
		return (::MoleMole::Config::EffectPatternInfoKeyBelongMap**)Il2CppClass::FromTypeDefinitionIndex(AANOMDNBAHD_TypeDefinitionIndex)->GetStaticField(0x36960);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AANOMDNBAHD__CCTOR_OFFSET))();
	}

	static ::System::Boolean BDIIJDOCINM(::System::String* IAAHAOIADEN)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + AANOMDNBAHD_BDIIJDOCINM_OFFSET))(IAAHAOIADEN);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + AANOMDNBAHD_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Boolean BJIHJLGINGC(::System::String* NCHCMKEAHCD, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*& PBLAIBLPPOO)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*&))((::PBYTE)hIl2Cpp + AANOMDNBAHD_BJIHJLGINGC_OFFSET))(NCHCMKEAHCD, PBLAIBLPPOO);
	}

	static ::System::Void IIAEOJLAKLA(::System::Int32 AJNFMBFOGJA)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + AANOMDNBAHD_IIAEOJLAKLA_OFFSET))(AJNFMBFOGJA);
	}

	static ::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AANOMDNBAHD_OFHECOHPAKG_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + AANOMDNBAHD_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* LMOGKFCIJIC(::System::String* NCHCMKEAHCD)
	{
		return ((::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + AANOMDNBAHD_LMOGKFCIJIC_OFFSET))(NCHCMKEAHCD);
	}

	static ::System::Void MCNJBCHONDE(::Foundation::AssetPath CJBJONJDOLI, ::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + AANOMDNBAHD_MCNJBCHONDE_OFFSET))(CJBJONJDOLI, EBAJLMBGMFE, IBNICCGMILF);
	}
};
