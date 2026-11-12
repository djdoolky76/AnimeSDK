#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class LevelSpatialIntVec2; }
namespace System { class Object; }

#define OANLHANJEII_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1E454130)
#define OANLHANJEII_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x31619E0)
#define OANLHANJEII_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3E7C580)
#define OANLHANJEII_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1E453ED0)
#define OANLHANJEII_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E8C9B0)
#define OANLHANJEII_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1E453DE0)
#define OANLHANJEII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x318C7A0)
#define OANLHANJEII_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x318C5A0)
#define OANLHANJEII_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define OANLHANJEII_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define OANLHANJEII_INIT_OFFSET UNITYSDK_OFFSET(0x18D10)
#define OANLHANJEII_JAADMJHBLPM_OFFSET UNITYSDK_OFFSET(0x3E8C9C0)
#define OANLHANJEII_JHLKEGPHKLG_OFFSET UNITYSDK_OFFSET(0x3E8CA40)
#define OANLHANJEII_LDNPJPLODLH_OFFSET UNITYSDK_OFFSET(0x3E8CA30)
#define OANLHANJEII_LFLKGBPEPNL_OFFSET UNITYSDK_OFFSET(0x3E8C9E0)
#define OANLHANJEII_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1E4541E0)

inline static constexpr unsigned int OANLHANJEII_TypeDefinitionIndex = 10730;

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
