#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class LevelSpatialIntVec2; }
namespace System { class Object; }

#define OANLHANJEII_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1D24DCC0)
#define OANLHANJEII_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define OANLHANJEII_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define OANLHANJEII_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D24DA60)
#define OANLHANJEII_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C3D5F0)
#define OANLHANJEII_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D24D970)
#define OANLHANJEII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define OANLHANJEII_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define OANLHANJEII_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define OANLHANJEII_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define OANLHANJEII_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define OANLHANJEII_JAADMJHBLPM_OFFSET UNITYSDK_OFFSET(0x3C3D600)
#define OANLHANJEII_JHLKEGPHKLG_OFFSET UNITYSDK_OFFSET(0x3C3D680)
#define OANLHANJEII_LDNPJPLODLH_OFFSET UNITYSDK_OFFSET(0x3C3D670)
#define OANLHANJEII_LFLKGBPEPNL_OFFSET UNITYSDK_OFFSET(0x3C3D620)
#define OANLHANJEII_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1D24DD70)

	struct alignas(8) OANLHANJEII
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + OANLHANJEII_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OANLHANJEII_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OANLHANJEII_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OANLHANJEII_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANLHANJEII_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::OANLHANJEII a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::OANLHANJEII, ::System::Object*))((::PBYTE)hIl2Cpp + OANLHANJEII_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::OANLHANJEII a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::OANLHANJEII, ::System::Object*))((::PBYTE)hIl2Cpp + OANLHANJEII_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::OANLHANJEII a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OANLHANJEII))((::PBYTE)hIl2Cpp + OANLHANJEII_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OANLHANJEII_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OANLHANJEII_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::OANLHANJEII a1)
		{
			return ((::System::Boolean(*)(::OANLHANJEII))((::PBYTE)hIl2Cpp + OANLHANJEII_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::OANLHANJEII a1)
		{
			return ((::System::Boolean(*)(::OANLHANJEII))((::PBYTE)hIl2Cpp + OANLHANJEII_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::Int16> JAADMJHBLPM()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::Int16>(*)(::PVOID))((::PBYTE)hIl2Cpp + OANLHANJEII_JAADMJHBLPM_OFFSET))(this);
		}

		::System::Void LFLKGBPEPNL(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::Int16> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::Int16>))((::PBYTE)hIl2Cpp + OANLHANJEII_LFLKGBPEPNL_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelSpatialIntVec2* LDNPJPLODLH()
		{
			return ((::RPG::GameCore::LevelSpatialIntVec2*(*)(::PVOID))((::PBYTE)hIl2Cpp + OANLHANJEII_LDNPJPLODLH_OFFSET))(this);
		}

		::System::Void JHLKEGPHKLG(::RPG::GameCore::LevelSpatialIntVec2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSpatialIntVec2*))((::PBYTE)hIl2Cpp + OANLHANJEII_JHLKEGPHKLG_OFFSET))(this, a1);
		}

	};
