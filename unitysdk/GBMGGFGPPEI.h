#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPNDDCAIBAA;
namespace RPG::Client { class AchievementData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GBMGGFGPPEI_BHNDNOFLCNN_OFFSET UNITYSDK_OFFSET(0x16888100)
#define GBMGGFGPPEI_CTOR_OFFSET UNITYSDK_OFFSET(0x16889210)
#define GBMGGFGPPEI_FDEDNKCOIJJ_OFFSET UNITYSDK_OFFSET(0x16888BB0)
#define GBMGGFGPPEI_FEJALMBAMLI_OFFSET UNITYSDK_OFFSET(0x16888370)
#define GBMGGFGPPEI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x168886F0)
#define GBMGGFGPPEI_HBIDCKFEILD_OFFSET UNITYSDK_OFFSET(0x16889010)
#define GBMGGFGPPEI_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x16888530)
#define GBMGGFGPPEI_JNLGBHBHCOA_OFFSET UNITYSDK_OFFSET(0x16888E70)
#define GBMGGFGPPEI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16887FC0)
#define GBMGGFGPPEI_KPPLACMLCHC_OFFSET UNITYSDK_OFFSET(0x16889160)
#define GBMGGFGPPEI_PFODMMLHBGP_OFFSET UNITYSDK_OFFSET(0x168888B0)
#define GBMGGFGPPEI_PIMEABNLPGE_OFFSET UNITYSDK_OFFSET(0x16888D50)

inline static constexpr unsigned int GBMGGFGPPEI_TypeDefinitionIndex = 62755;

	class GBMGGFGPPEI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPNDDCAIBAA*>* LAHJMFDLJPL; // 0x10
		::RPG::Client::AchievementData* CHPEOBHONCL; // 0x18
		// static const ::System::String* HEJGPKJDIEB; // 0x0
		// static const ::System::Object IPFNNKJFAJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMGGFGPPEI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMGGFGPPEI_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMGGFGPPEI_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMGGFGPPEI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void BHNDNOFLCNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMGGFGPPEI_BHNDNOFLCNN_OFFSET))(this);
		}

		::System::Void FEJALMBAMLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMGGFGPPEI_FEJALMBAMLI_OFFSET))(this);
		}

		::System::Void PFODMMLHBGP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBMGGFGPPEI_PFODMMLHBGP_OFFSET))(this, a1);
		}

		::System::Void FDEDNKCOIJJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBMGGFGPPEI_FDEDNKCOIJJ_OFFSET))(this, a1);
		}

		::System::Void PIMEABNLPGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBMGGFGPPEI_PIMEABNLPGE_OFFSET))(this, a1);
		}

		::System::Void JNLGBHBHCOA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBMGGFGPPEI_JNLGBHBHCOA_OFFSET))(this, a1);
		}

		::System::Void HBIDCKFEILD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBMGGFGPPEI_HBIDCKFEILD_OFFSET))(this, a1);
		}

		::System::Void KPPLACMLCHC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBMGGFGPPEI_KPPLACMLCHC_OFFSET))(this, a1);
		}

	};
