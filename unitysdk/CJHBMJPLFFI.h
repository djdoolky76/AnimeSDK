#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
#include "unitysdk/RPG/MVector3.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define CJHBMJPLFFI_AOMOPOMEIJE_OFFSET UNITYSDK_OFFSET(0x3E8FB40)
#define CJHBMJPLFFI_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1EEC12B0)
#define CJHBMJPLFFI_DAEMDGNENBJ_OFFSET UNITYSDK_OFFSET(0x3E8FBB0)
#define CJHBMJPLFFI_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x31619E0)
#define CJHBMJPLFFI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3E7C580)
#define CJHBMJPLFFI_DKLOALOMIJO_OFFSET UNITYSDK_OFFSET(0x3E8FB60)
#define CJHBMJPLFFI_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1EEC1050)
#define CJHBMJPLFFI_EAJICCEAIDP_OFFSET UNITYSDK_OFFSET(0x3E8FCB0)
#define CJHBMJPLFFI_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E8FAC0)
#define CJHBMJPLFFI_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1EEC0F60)
#define CJHBMJPLFFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x318C7A0)
#define CJHBMJPLFFI_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x318C5A0)
#define CJHBMJPLFFI_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define CJHBMJPLFFI_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define CJHBMJPLFFI_HNNOLBHPOII_OFFSET UNITYSDK_OFFSET(0x3E8FD90)
#define CJHBMJPLFFI_IGDKABGAEAM_OFFSET UNITYSDK_OFFSET(0x3E8FD00)
#define CJHBMJPLFFI_IIAGEHNCHAO_OFFSET UNITYSDK_OFFSET(0x3E8FC40)
#define CJHBMJPLFFI_INIT_OFFSET UNITYSDK_OFFSET(0x18D10)
#define CJHBMJPLFFI_JKAFNEKHCMJ_OFFSET UNITYSDK_OFFSET(0x3E8FD70)
#define CJHBMJPLFFI_JPOMKIDLAMO_OFFSET UNITYSDK_OFFSET(0x3E8FAF0)
#define CJHBMJPLFFI_LIEIJACHPGL_OFFSET UNITYSDK_OFFSET(0x3E8FC90)
#define CJHBMJPLFFI_MGJBNEAHFBC_OFFSET UNITYSDK_OFFSET(0x3E8FAD0)
#define CJHBMJPLFFI_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1EEC1360)
#define CJHBMJPLFFI_NLKIPPKMHOK_OFFSET UNITYSDK_OFFSET(0x3E8FD20)
#define CJHBMJPLFFI_ONKPNLPCJFF_OFFSET UNITYSDK_OFFSET(0x3E8FBD0)
#define CJHBMJPLFFI_OOIACBFILCL_OFFSET UNITYSDK_OFFSET(0x3E8FC20)

inline static constexpr unsigned int CJHBMJPLFFI_TypeDefinitionIndex = 10718;

	struct alignas(8) CJHBMJPLFFI
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::CJHBMJPLFFI a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::CJHBMJPLFFI, ::System::Object*))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::CJHBMJPLFFI a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::CJHBMJPLFFI, ::System::Object*))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::CJHBMJPLFFI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJHBMJPLFFI))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::CJHBMJPLFFI a1)
		{
			return ((::System::Boolean(*)(::CJHBMJPLFFI))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::CJHBMJPLFFI a1)
		{
			return ((::System::Boolean(*)(::CJHBMJPLFFI))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::RPG::MVector3> MGJBNEAHFBC()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::RPG::MVector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_MGJBNEAHFBC_OFFSET))(this);
		}

		::System::Void JPOMKIDLAMO(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::RPG::MVector3> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::RPG::MVector3>))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_JPOMKIDLAMO_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::RPG::MVector3> AOMOPOMEIJE()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::RPG::MVector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_AOMOPOMEIJE_OFFSET))(this);
		}

		::System::Void DKLOALOMIJO(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::RPG::MVector3> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::RPG::MVector3>))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_DKLOALOMIJO_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::BMAGJGLPIIF> DAEMDGNENBJ()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::BMAGJGLPIIF>(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_DAEMDGNENBJ_OFFSET))(this);
		}

		::System::Void ONKPNLPCJFF(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::BMAGJGLPIIF> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::BMAGJGLPIIF>))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_ONKPNLPCJFF_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> OOIACBFILCL()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_OOIACBFILCL_OFFSET))(this);
		}

		::System::Void IIAGEHNCHAO(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_IIAGEHNCHAO_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> LIEIJACHPGL()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_LIEIJACHPGL_OFFSET))(this);
		}

		::System::Void EAJICCEAIDP(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_EAJICCEAIDP_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> IGDKABGAEAM()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_IGDKABGAEAM_OFFSET))(this);
		}

		::System::Void NLKIPPKMHOK(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_NLKIPPKMHOK_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::BMAGJGLPIIF> JKAFNEKHCMJ()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::BMAGJGLPIIF>(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_JKAFNEKHCMJ_OFFSET))(this);
		}

		::System::Void HNNOLBHPOII(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::BMAGJGLPIIF> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::BMAGJGLPIIF>))((::PBYTE)hIl2Cpp + CJHBMJPLFFI_HNNOLBHPOII_OFFSET))(this, a1);
		}

	};
