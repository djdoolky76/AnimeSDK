#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
#include "unitysdk/RPG/MVector3.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define CJHBMJPLFFI_AOMOPOMEIJE_OFFSET UNITYSDK_OFFSET(0x3F34A80)
#define CJHBMJPLFFI_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1EB71AF0)
#define CJHBMJPLFFI_DAEMDGNENBJ_OFFSET UNITYSDK_OFFSET(0x3F34AF0)
#define CJHBMJPLFFI_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0xCB40)
#define CJHBMJPLFFI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define CJHBMJPLFFI_DKLOALOMIJO_OFFSET UNITYSDK_OFFSET(0x3F34AA0)
#define CJHBMJPLFFI_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1EB71890)
#define CJHBMJPLFFI_EAJICCEAIDP_OFFSET UNITYSDK_OFFSET(0x3F34BF0)
#define CJHBMJPLFFI_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F34A00)
#define CJHBMJPLFFI_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1EB717A0)
#define CJHBMJPLFFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define CJHBMJPLFFI_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define CJHBMJPLFFI_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define CJHBMJPLFFI_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define CJHBMJPLFFI_HNNOLBHPOII_OFFSET UNITYSDK_OFFSET(0x3F34CD0)
#define CJHBMJPLFFI_IGDKABGAEAM_OFFSET UNITYSDK_OFFSET(0x3F34C40)
#define CJHBMJPLFFI_IIAGEHNCHAO_OFFSET UNITYSDK_OFFSET(0x3F34B80)
#define CJHBMJPLFFI_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define CJHBMJPLFFI_JKAFNEKHCMJ_OFFSET UNITYSDK_OFFSET(0x3F34CB0)
#define CJHBMJPLFFI_JPOMKIDLAMO_OFFSET UNITYSDK_OFFSET(0x3F34A30)
#define CJHBMJPLFFI_LIEIJACHPGL_OFFSET UNITYSDK_OFFSET(0x3F34BD0)
#define CJHBMJPLFFI_MGJBNEAHFBC_OFFSET UNITYSDK_OFFSET(0x3F34A10)
#define CJHBMJPLFFI_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1EB71BA0)
#define CJHBMJPLFFI_NLKIPPKMHOK_OFFSET UNITYSDK_OFFSET(0x3F34C60)
#define CJHBMJPLFFI_ONKPNLPCJFF_OFFSET UNITYSDK_OFFSET(0x3F34B10)
#define CJHBMJPLFFI_OOIACBFILCL_OFFSET UNITYSDK_OFFSET(0x3F34B60)

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
