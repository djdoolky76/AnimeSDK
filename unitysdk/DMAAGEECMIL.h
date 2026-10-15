#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class HoyoTag; }
namespace System { class Object; }

#define DMAAGEECMIL_AKCEEJJIFLP_OFFSET UNITYSDK_OFFSET(0x3C36B40)
#define DMAAGEECMIL_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CD40F60)
#define DMAAGEECMIL_CAOAFPAENFC_OFFSET UNITYSDK_OFFSET(0x3C36A80)
#define DMAAGEECMIL_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define DMAAGEECMIL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define DMAAGEECMIL_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CD40E30)
#define DMAAGEECMIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C36A60)
#define DMAAGEECMIL_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CD40D20)
#define DMAAGEECMIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define DMAAGEECMIL_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define DMAAGEECMIL_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define DMAAGEECMIL_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define DMAAGEECMIL_HGHIJCADGJE_OFFSET UNITYSDK_OFFSET(0x3C36AF0)
#define DMAAGEECMIL_HPKJAKGHEMJ_OFFSET UNITYSDK_OFFSET(0x3C36BB0)
#define DMAAGEECMIL_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define DMAAGEECMIL_JHJFPJIEJAJ_OFFSET UNITYSDK_OFFSET(0x3C36B60)
#define DMAAGEECMIL_JLIPGFKDIPO_OFFSET UNITYSDK_OFFSET(0x3C36AD0)
#define DMAAGEECMIL_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0x3C36A70)
#define DMAAGEECMIL_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CD41010)
#define DMAAGEECMIL_OIMEAFBFPLG_OFFSET UNITYSDK_OFFSET(0x3C36BD0)

	struct alignas(8) DMAAGEECMIL
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + DMAAGEECMIL_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAAGEECMIL_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAAGEECMIL_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAAGEECMIL_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAAGEECMIL_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::DMAAGEECMIL a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::DMAAGEECMIL, ::System::Object*))((::PBYTE)hIl2Cpp + DMAAGEECMIL_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::DMAAGEECMIL a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::DMAAGEECMIL, ::System::Object*))((::PBYTE)hIl2Cpp + DMAAGEECMIL_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::DMAAGEECMIL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMAAGEECMIL))((::PBYTE)hIl2Cpp + DMAAGEECMIL_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMAAGEECMIL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAAGEECMIL_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::DMAAGEECMIL a1)
		{
			return ((::System::Boolean(*)(::DMAAGEECMIL))((::PBYTE)hIl2Cpp + DMAAGEECMIL_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::DMAAGEECMIL a1)
		{
			return ((::System::Boolean(*)(::DMAAGEECMIL))((::PBYTE)hIl2Cpp + DMAAGEECMIL_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::HoyoTag* NDMBDGKAJEK()
		{
			return ((::RPG::GameCore::HoyoTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAAGEECMIL_NDMBDGKAJEK_OFFSET))(this);
		}

		::System::Void CAOAFPAENFC(::RPG::GameCore::HoyoTag* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + DMAAGEECMIL_CAOAFPAENFC_OFFSET))(this, a1);
		}

		::RPG::MVector3 JLIPGFKDIPO()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAAGEECMIL_JLIPGFKDIPO_OFFSET))(this);
		}

		::System::Void HGHIJCADGJE(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + DMAAGEECMIL_HGHIJCADGJE_OFFSET))(this, a1);
		}

		::RPG::MVector3 AKCEEJJIFLP()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAAGEECMIL_AKCEEJJIFLP_OFFSET))(this);
		}

		::System::Void JHJFPJIEJAJ(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + DMAAGEECMIL_JHJFPJIEJAJ_OFFSET))(this, a1);
		}

		::RPG::MVector3 HPKJAKGHEMJ()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAAGEECMIL_HPKJAKGHEMJ_OFFSET))(this);
		}

		::System::Void OIMEAFBFPLG(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + DMAAGEECMIL_OIMEAFBFPLG_OFFSET))(this, a1);
		}

	};
