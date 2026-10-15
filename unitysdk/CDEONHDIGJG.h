#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/ModifierHitEffectStacking.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/MVector3.h"
class BGMKDGACBNI;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CDEONHDIGJG_AHKPHBBLOCL_OFFSET UNITYSDK_OFFSET(0xC763A50)
#define CDEONHDIGJG_APDNCEIJHJA_OFFSET UNITYSDK_OFFSET(0xC764D90)
#define CDEONHDIGJG_CTOR_OFFSET UNITYSDK_OFFSET(0xC7661D0)
#define CDEONHDIGJG_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xC763790)
#define CDEONHDIGJG_DDNAFKHIGNA_OFFSET UNITYSDK_OFFSET(0xC7650C0)
#define CDEONHDIGJG_DIMIMJHOKHJ_OFFSET UNITYSDK_OFFSET(0xC765440)
#define CDEONHDIGJG_FPINJMEFEJI_OFFSET UNITYSDK_OFFSET(0xC764E40)
#define CDEONHDIGJG_IDPAIAJKGJE_OFFSET UNITYSDK_OFFSET(0xC7646E0)
#define CDEONHDIGJG_JJECNCFMNDP_OFFSET UNITYSDK_OFFSET(0xC764350)
#define CDEONHDIGJG_KLCHAALCNEE_OFFSET UNITYSDK_OFFSET(0xC763940)
#define CDEONHDIGJG_LEFFMDLKFDA_OFFSET UNITYSDK_OFFSET(0xC765A10)
#define CDEONHDIGJG_NAHKAONPCNA_OFFSET UNITYSDK_OFFSET(0xC765D20)
#define CDEONHDIGJG_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xC7638E0)
#define CDEONHDIGJG_PDOBOOGINPL_OFFSET UNITYSDK_OFFSET(0xC766070)
#define CDEONHDIGJG_PFOFFFNOMDN_OFFSET UNITYSDK_OFFSET(0xC764B30)
#define CDEONHDIGJG_PGDMOFABBNP_OFFSET UNITYSDK_OFFSET(0xC765E40)
#define CDEONHDIGJG_PICBNDDHICP_OFFSET UNITYSDK_OFFSET(0xC764BE0)

inline static constexpr unsigned int CDEONHDIGJG_TypeDefinitionIndex = 53741;

	class CDEONHDIGJG : public ::GJPFGOGOLBI
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* AKALEKMKEPO; // 0x18
		::RPG::GameCore::GameEntity* KKFCJOJLGCO; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* OCAKPBNOMAF; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* FGBGIGPPPBF; // 0x30
		::BGMKDGACBNI* LIDGONNJNBJ; // 0x38
		::System::Boolean BOJMCLECDLP; // 0x40
		::System::Boolean FFDOAOKJPBN; // 0x41
		::System::Boolean BIDIOFGDNAG; // 0x42
		::System::Boolean HGDEJJIMNJB; // 0x43
		::RPG::GameCore::ModifierHitEffectStacking HBDCLCIDDMJ; // 0x44
		::System::Int32 NDJIHOBNNAJ; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEONHDIGJG_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEONHDIGJG_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEONHDIGJG_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void AHKPHBBLOCL(::System::String* a1, ::System::String* a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a5, ::RPG::GameCore::EffectMutexType a6, ::System::Single a7, ::System::Int32 a8, ::System::Boolean a9, ::System::Single a10, ::System::String* a11, ::System::Boolean a12)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::MVector3, ::RPG::MVector3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::RPG::GameCore::EffectMutexType, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CDEONHDIGJG_AHKPHBBLOCL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void JJECNCFMNDP(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CDEONHDIGJG_JJECNCFMNDP_OFFSET))(this, a1, a2);
		}

		::System::Void PFOFFFNOMDN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CDEONHDIGJG_PFOFFFNOMDN_OFFSET))(this, a1);
		}

		::System::Void APDNCEIJHJA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CDEONHDIGJG_APDNCEIJHJA_OFFSET))(this, a1);
		}

		::System::Void FPINJMEFEJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEONHDIGJG_FPINJMEFEJI_OFFSET))(this);
		}

		::System::Void DDNAFKHIGNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEONHDIGJG_DDNAFKHIGNA_OFFSET))(this);
		}

		::System::Void DIMIMJHOKHJ(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CDEONHDIGJG_DIMIMJHOKHJ_OFFSET))(this, a1, a2);
		}

		::System::Void NAHKAONPCNA(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1, ::RPG::Client::MonoEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CDEONHDIGJG_NAHKAONPCNA_OFFSET))(this, a1, a2);
		}

		::System::Void PICBNDDHICP(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + CDEONHDIGJG_PICBNDDHICP_OFFSET))(this, a1);
		}

		::System::Void LEFFMDLKFDA(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CDEONHDIGJG_LEFFMDLKFDA_OFFSET))(this, a1, a2);
		}

		::System::Void PGDMOFABBNP(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + CDEONHDIGJG_PGDMOFABBNP_OFFSET))(this, a1);
		}

		::System::Void IDPAIAJKGJE(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CDEONHDIGJG_IDPAIAJKGJE_OFFSET))(this, a1, a2);
		}

		::System::Void KLCHAALCNEE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CDEONHDIGJG_KLCHAALCNEE_OFFSET))(this, a1);
		}

		::System::Void PDOBOOGINPL(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + CDEONHDIGJG_PDOBOOGINPL_OFFSET))(this, a1);
		}

	};
