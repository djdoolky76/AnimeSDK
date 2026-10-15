#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/System/Object.h"
class GJABEBPIGDN;
class KGHMBCLFFLG;
class NNOALJAEMCG;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define NNOALJAEMCG_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCCF8E0)
#define NNOALJAEMCG_CTOR_OFFSET UNITYSDK_OFFSET(0xBCCF8D0)
#define NNOALJAEMCG_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0xBCCF7F0)
#define NNOALJAEMCG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xBCCF450)
#define NNOALJAEMCG_EQUALS_OFFSET UNITYSDK_OFFSET(0xBCCF3C0)
#define NNOALJAEMCG_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0xBCCF710)
#define NNOALJAEMCG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xBCCF560)
#define NNOALJAEMCG_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0xBCCF320)
#define NNOALJAEMCG_GET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0xBCCF340)
#define NNOALJAEMCG_GET_EIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0xBCCF300)
#define NNOALJAEMCG_GET_EQUIPPEDLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xBCCF380)
#define NNOALJAEMCG_GET_EQUIPPEDRELICS_OFFSET UNITYSDK_OFFSET(0xBCCF360)
#define NNOALJAEMCG_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xBCCF2C0)
#define NNOALJAEMCG_GET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xBCCF2E0)
#define NNOALJAEMCG_GET_TRACENODES_OFFSET UNITYSDK_OFFSET(0xBCCF3A0)
#define NNOALJAEMCG_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0xBCCF330)
#define NNOALJAEMCG_SET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0xBCCF350)
#define NNOALJAEMCG_SET_EIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0xBCCF310)
#define NNOALJAEMCG_SET_EQUIPPEDLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xBCCF390)
#define NNOALJAEMCG_SET_EQUIPPEDRELICS_OFFSET UNITYSDK_OFFSET(0xBCCF370)
#define NNOALJAEMCG_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xBCCF2D0)
#define NNOALJAEMCG_SET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xBCCF2F0)
#define NNOALJAEMCG_SET_TRACENODES_OFFSET UNITYSDK_OFFSET(0xBCCF3B0)

inline static constexpr unsigned int NNOALJAEMCG_TypeDefinitionIndex = 51897;

	class NNOALJAEMCG : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::KGHMBCLFFLG*>* _EquippedRelics_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::KFBOFAILIBG>* _TraceNodes_k__BackingField; // 0x18
		::GJABEBPIGDN* _EquippedLightCone_k__BackingField; // 0x20
		::System::UInt32 _PromotionLevel_k__BackingField; // 0x28
		::System::UInt32 _EidolonLevel_k__BackingField; // 0x2C
		::System::UInt32 _DressedSkinID_k__BackingField; // 0x30
		::System::UInt32 _CurrentExp_k__BackingField; // 0x34
		::System::UInt32 _Level_k__BackingField; // 0x38
		static ::NNOALJAEMCG** StaticGet_COAHELMPGLI()
		{
			return (::NNOALJAEMCG**)UnitySDK::FromName("", "NNOALJAEMCG")->GetStaticField(0x16290);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOALJAEMCG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNOALJAEMCG_CCTOR_OFFSET))();
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOALJAEMCG_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNOALJAEMCG_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_PromotionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOALJAEMCG_GET_PROMOTIONLEVEL_OFFSET))(this);
		}

		::System::Void set_PromotionLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNOALJAEMCG_SET_PROMOTIONLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_EidolonLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOALJAEMCG_GET_EIDOLONLEVEL_OFFSET))(this);
		}

		::System::Void set_EidolonLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNOALJAEMCG_SET_EIDOLONLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOALJAEMCG_GET_CURRENTEXP_OFFSET))(this);
		}

		::System::Void set_CurrentExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNOALJAEMCG_SET_CURRENTEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_DressedSkinID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOALJAEMCG_GET_DRESSEDSKINID_OFFSET))(this);
		}

		::System::Void set_DressedSkinID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNOALJAEMCG_SET_DRESSEDSKINID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KGHMBCLFFLG*>* get_EquippedRelics()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KGHMBCLFFLG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOALJAEMCG_GET_EQUIPPEDRELICS_OFFSET))(this);
		}

		::System::Void set_EquippedRelics(::System::Collections::Generic::IReadOnlyList_1<::KGHMBCLFFLG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::KGHMBCLFFLG*>*))((::PBYTE)hIl2Cpp + NNOALJAEMCG_SET_EQUIPPEDRELICS_OFFSET))(this, a1);
		}

		::GJABEBPIGDN* get_EquippedLightCone()
		{
			return ((::GJABEBPIGDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOALJAEMCG_GET_EQUIPPEDLIGHTCONE_OFFSET))(this);
		}

		::System::Void set_EquippedLightCone(::GJABEBPIGDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJABEBPIGDN*))((::PBYTE)hIl2Cpp + NNOALJAEMCG_SET_EQUIPPEDLIGHTCONE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KFBOFAILIBG>* get_TraceNodes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KFBOFAILIBG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOALJAEMCG_GET_TRACENODES_OFFSET))(this);
		}

		::System::Void set_TraceNodes(::System::Collections::Generic::IReadOnlyList_1<::KFBOFAILIBG>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::KFBOFAILIBG>*))((::PBYTE)hIl2Cpp + NNOALJAEMCG_SET_TRACENODES_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNOALJAEMCG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NNOALJAEMCG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNOALJAEMCG*))((::PBYTE)hIl2Cpp + NNOALJAEMCG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOALJAEMCG_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::NNOALJAEMCG* a1, ::NNOALJAEMCG* a2)
		{
			return ((::System::Boolean(*)(::NNOALJAEMCG*, ::NNOALJAEMCG*))((::PBYTE)hIl2Cpp + NNOALJAEMCG_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::NNOALJAEMCG* a1, ::NNOALJAEMCG* a2)
		{
			return ((::System::Boolean(*)(::NNOALJAEMCG*, ::NNOALJAEMCG*))((::PBYTE)hIl2Cpp + NNOALJAEMCG_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
