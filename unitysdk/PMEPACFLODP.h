#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
class PMEPACFLODP;
namespace RPG::Client { class SpecialVisionSystem; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define PMEPACFLODP_AHKHHIOFACB_OFFSET UNITYSDK_OFFSET(0xCC49A50)
#define PMEPACFLODP_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC49D30)
#define PMEPACFLODP_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCC48860)
#define PMEPACFLODP_CTOR_OFFSET UNITYSDK_OFFSET(0xCC49D10)
#define PMEPACFLODP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC49A10)
#define PMEPACFLODP_DMOJDFGLDDA_OFFSET UNITYSDK_OFFSET(0xCC48D80)
#define PMEPACFLODP_FAFJHKAIKFM_OFFSET UNITYSDK_OFFSET(0xCC48EA0)
#define PMEPACFLODP_IAHCFAPEIAK_OFFSET UNITYSDK_OFFSET(0xCC498F0)
#define PMEPACFLODP_IDBAFCFGGGA_OFFSET UNITYSDK_OFFSET(0xCC48800)
#define PMEPACFLODP_IFGIIKEDIEO_OFFSET UNITYSDK_OFFSET(0xCC49550)
#define PMEPACFLODP_IJBCGLFFPBL_OFFSET UNITYSDK_OFFSET(0xCC49990)
#define PMEPACFLODP_JFAJHFKIMMD_OFFSET UNITYSDK_OFFSET(0xCC495F0)
#define PMEPACFLODP_KDDGGAHEOKF_OFFSET UNITYSDK_OFFSET(0xCC492B0)
#define PMEPACFLODP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCC48610)
#define PMEPACFLODP_LEOBPPJOIBM_OFFSET UNITYSDK_OFFSET(0xCC48A70)
#define PMEPACFLODP_MFDCJOIKCKF_OFFSET UNITYSDK_OFFSET(0xCC494D0)

inline static constexpr unsigned int PMEPACFLODP_TypeDefinitionIndex = 70639;

	class PMEPACFLODP : public ::System::Object
	{
	public:
		::RPG::GameCore::EventManager* EBOCGAJBGPG; // 0x10
		::RPG::GameCore::GameEntity* HPANEMEFNPH; // 0x18
		::RPG::GameCore::GameEntity* JPOLHHNOAOI; // 0x20
		::System::String* FPIGFFJNEOO; // 0x28
		::RPG::Client::SpecialVisionSystem* CGKCJPPHKPK; // 0x30
		::System::Boolean POHEELFNCOM; // 0x38
		::System::Boolean ECLBIAAFNNK; // 0x39
		::System::Boolean AHKAHJLAGEG; // 0x3A
		::System::Boolean MIBHNBOOAHB; // 0x3B
		::System::Int32 AMMGGCGKHLM; // 0x3C
		::System::UInt32 MFHCPNAKBGH; // 0x40
		::System::UInt32 AANHEMFBHCG; // 0x44
		::System::UInt32 OAMECKMNKGD; // 0x48
		::System::Single NBDACLLLBOP; // 0x4C
		static ::System::String** StaticGet_EHONIOCBAEE()
		{
			return (::System::String**)UnitySDK::FromName("", "PMEPACFLODP")->GetStaticField(0x3FF00);
		}

		static ::System::String** StaticGet_HPEGDAHBCOM()
		{
			return (::System::String**)UnitySDK::FromName("", "PMEPACFLODP")->GetStaticField(0x3FF08);
		}

		static ::PMEPACFLODP** StaticGet_KKHLPDBJAIL()
		{
			return (::PMEPACFLODP**)UnitySDK::FromName("", "PMEPACFLODP")->GetStaticField(0x3FF10);
		}

		static ::System::String** StaticGet_GNHJBHKEPKM()
		{
			return (::System::String**)UnitySDK::FromName("", "PMEPACFLODP")->GetStaticField(0x3FF18);
		}

		static ::System::String** StaticGet_POEEPKIPMLM()
		{
			return (::System::String**)UnitySDK::FromName("", "PMEPACFLODP")->GetStaticField(0x3FF20);
		}

		static ::System::String** StaticGet_GEJLDEBJMDJ()
		{
			return (::System::String**)UnitySDK::FromName("", "PMEPACFLODP")->GetStaticField(0x3FF28);
		}

		static ::System::String** StaticGet_EIBHDGJCMIL()
		{
			return (::System::String**)UnitySDK::FromName("", "PMEPACFLODP")->GetStaticField(0x3FF30);
		}

		static ::System::String** StaticGet_ABKJOBAFHDD()
		{
			return (::System::String**)UnitySDK::FromName("", "PMEPACFLODP")->GetStaticField(0x3FF38);
		}

		static ::System::String** StaticGet_EDBHFLBEFNC()
		{
			return (::System::String**)UnitySDK::FromName("", "PMEPACFLODP")->GetStaticField(0x3FF40);
		}

		static ::System::String** StaticGet_LMNIFPBCPIF()
		{
			return (::System::String**)UnitySDK::FromName("", "PMEPACFLODP")->GetStaticField(0x3FF48);
		}

		static ::System::String** StaticGet_EJJNJKGNCCL()
		{
			return (::System::String**)UnitySDK::FromName("", "PMEPACFLODP")->GetStaticField(0x3FF50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEPACFLODP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMEPACFLODP_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + PMEPACFLODP_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void IDBAFCFGGGA(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + PMEPACFLODP_IDBAFCFGGGA_OFFSET))(this, a1, a2);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEPACFLODP_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Boolean FAFJHKAIKFM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEPACFLODP_FAFJHKAIKFM_OFFSET))(this);
		}

		::System::Boolean KDDGGAHEOKF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEPACFLODP_KDDGGAHEOKF_OFFSET))(this);
		}

		::System::Void MFDCJOIKCKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEPACFLODP_MFDCJOIKCKF_OFFSET))(this);
		}

		::System::Void IJBCGLFFPBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEPACFLODP_IJBCGLFFPBL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEPACFLODP_DISPOSE_OFFSET))(this);
		}

		::System::Void IAHCFAPEIAK(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + PMEPACFLODP_IAHCFAPEIAK_OFFSET))(this, a1, a2);
		}

		::System::Void IFGIIKEDIEO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PMEPACFLODP_IFGIIKEDIEO_OFFSET))(this, a1);
		}

		::System::Void AHKHHIOFACB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + PMEPACFLODP_AHKHHIOFACB_OFFSET))(this, a1);
		}

		::System::Void DMOJDFGLDDA(::System::UInt32 a1, ::System::String* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + PMEPACFLODP_DMOJDFGLDDA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JFAJHFKIMMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEPACFLODP_JFAJHFKIMMD_OFFSET))(this);
		}

		::System::Void LEOBPPJOIBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEPACFLODP_LEOBPPJOIBM_OFFSET))(this);
		}

	};
