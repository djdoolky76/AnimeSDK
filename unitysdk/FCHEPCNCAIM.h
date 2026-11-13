#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJGBNNLODKM.h"
#include "unitysdk/DEHNEKNFKBJ.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
#include "unitysdk/RPG/MVector3.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class MeshBound; }
namespace System { class Object; }

#define FCHEPCNCAIM_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1E436B00)
#define FCHEPCNCAIM_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x3F201A0)
#define FCHEPCNCAIM_COMIHBAINLN_OFFSET UNITYSDK_OFFSET(0x3F1FEF0)
#define FCHEPCNCAIM_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0xCB40)
#define FCHEPCNCAIM_DGEBJPBFFIO_OFFSET UNITYSDK_OFFSET(0x3F1FDC0)
#define FCHEPCNCAIM_DIJOGNFOPNH_OFFSET UNITYSDK_OFFSET(0x3F1FF10)
#define FCHEPCNCAIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define FCHEPCNCAIM_DJCMPKFHOAB_OFFSET UNITYSDK_OFFSET(0x3F1FD00)
#define FCHEPCNCAIM_DJEGMMCFEBA_OFFSET UNITYSDK_OFFSET(0x3F1FFC0)
#define FCHEPCNCAIM_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1E4368A0)
#define FCHEPCNCAIM_EPFHHNAPOOE_OFFSET UNITYSDK_OFFSET(0x3F1FDB0)
#define FCHEPCNCAIM_EPKJJHPFNFP_OFFSET UNITYSDK_OFFSET(0x3F20130)
#define FCHEPCNCAIM_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F1FCE0)
#define FCHEPCNCAIM_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1E4367B0)
#define FCHEPCNCAIM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define FCHEPCNCAIM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define FCHEPCNCAIM_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define FCHEPCNCAIM_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define FCHEPCNCAIM_GNNDNEHLIOE_OFFSET UNITYSDK_OFFSET(0x3F1FCF0)
#define FCHEPCNCAIM_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x3F20050)
#define FCHEPCNCAIM_IJMNPAJEEOE_OFFSET UNITYSDK_OFFSET(0x3F200C0)
#define FCHEPCNCAIM_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define FCHEPCNCAIM_JADGLBOFKIM_OFFSET UNITYSDK_OFFSET(0x3F1FE30)
#define FCHEPCNCAIM_JHHCOOJKHMI_OFFSET UNITYSDK_OFFSET(0x3F1FD50)
#define FCHEPCNCAIM_JNMHHAEPECA_OFFSET UNITYSDK_OFFSET(0x3F1FF70)
#define FCHEPCNCAIM_KAEJJKLIEBM_OFFSET UNITYSDK_OFFSET(0x3F1FE10)
#define FCHEPCNCAIM_KBKHNPJGLCA_OFFSET UNITYSDK_OFFSET(0x3F1FFE0)
#define FCHEPCNCAIM_LABHGJEHKLC_OFFSET UNITYSDK_OFFSET(0x3F1FE80)
#define FCHEPCNCAIM_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x3F20180)
#define FCHEPCNCAIM_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x3F20030)
#define FCHEPCNCAIM_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1E436BB0)
#define FCHEPCNCAIM_NJPLBPLCEFD_OFFSET UNITYSDK_OFFSET(0x3F20110)
#define FCHEPCNCAIM_NKLKFOHAODL_OFFSET UNITYSDK_OFFSET(0x3F1FEA0)
#define FCHEPCNCAIM_NMCFKAKCGML_OFFSET UNITYSDK_OFFSET(0x3F200A0)
#define FCHEPCNCAIM_OELDMLMHEHN_OFFSET UNITYSDK_OFFSET(0x3F201F0)
#define FCHEPCNCAIM_OHCLGDMNKIO_OFFSET UNITYSDK_OFFSET(0x3F1FD60)
#define FCHEPCNCAIM_PCIOAANPHKO_OFFSET UNITYSDK_OFFSET(0x3F20210)
#define FCHEPCNCAIM_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x3F1FF60)

inline static constexpr unsigned int FCHEPCNCAIM_TypeDefinitionIndex = 10688;

	struct alignas(8) FCHEPCNCAIM
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::FCHEPCNCAIM a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::FCHEPCNCAIM, ::System::Object*))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::FCHEPCNCAIM a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::FCHEPCNCAIM, ::System::Object*))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::FCHEPCNCAIM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCHEPCNCAIM))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::FCHEPCNCAIM a1)
		{
			return ((::System::Boolean(*)(::FCHEPCNCAIM))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::FCHEPCNCAIM a1)
		{
			return ((::System::Boolean(*)(::FCHEPCNCAIM))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::System::Boolean GNNDNEHLIOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_GNNDNEHLIOE_OFFSET))(this);
		}

		::System::Void DJCMPKFHOAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_DJCMPKFHOAB_OFFSET))(this, a1);
		}

		::System::Boolean JHHCOOJKHMI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_JHHCOOJKHMI_OFFSET))(this);
		}

		::System::Void OHCLGDMNKIO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_OHCLGDMNKIO_OFFSET))(this, a1);
		}

		::RPG::GameCore::MeshBound* EPFHHNAPOOE()
		{
			return ((::RPG::GameCore::MeshBound*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_EPFHHNAPOOE_OFFSET))(this);
		}

		::System::Void DGEBJPBFFIO(::RPG::GameCore::MeshBound* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MeshBound*))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_DGEBJPBFFIO_OFFSET))(this, a1);
		}

		::JPCONPIKIEK KAEJJKLIEBM()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_KAEJJKLIEBM_OFFSET))(this);
		}

		::System::Void JADGLBOFKIM(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_JADGLBOFKIM_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::Int32> LABHGJEHKLC()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_LABHGJEHKLC_OFFSET))(this);
		}

		::System::Void NKLKFOHAODL(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::Int32>))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_NKLKFOHAODL_OFFSET))(this, a1);
		}

		::DEHNEKNFKBJ COMIHBAINLN()
		{
			return ((::DEHNEKNFKBJ(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_COMIHBAINLN_OFFSET))(this);
		}

		::System::Void DIJOGNFOPNH(::DEHNEKNFKBJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEHNEKNFKBJ))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_DIJOGNFOPNH_OFFSET))(this, a1);
		}

		::System::Int32 PCKEJOJIOOM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::Void JNMHHAEPECA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_JNMHHAEPECA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::Int32> DJEGMMCFEBA()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_DJEGMMCFEBA_OFFSET))(this);
		}

		::System::Void KBKHNPJGLCA(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::Int32>))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_KBKHNPJGLCA_OFFSET))(this, a1);
		}

		::JPCONPIKIEK MLMGEFIOION()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void HABCMACJEIN(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_HABCMACJEIN_OFFSET))(this, a1);
		}

		::BJGBNNLODKM NMCFKAKCGML()
		{
			return ((::BJGBNNLODKM(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_NMCFKAKCGML_OFFSET))(this);
		}

		::System::Void IJMNPAJEEOE(::BJGBNNLODKM a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJGBNNLODKM))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_IJMNPAJEEOE_OFFSET))(this, a1);
		}

		::RPG::MVector3 NJPLBPLCEFD()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_NJPLBPLCEFD_OFFSET))(this);
		}

		::System::Void EPKJJHPFNFP(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_EPKJJHPFNFP_OFFSET))(this, a1);
		}

		::RPG::MVector3 MHHDBKELGIO()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::RPG::MVector3 OELDMLMHEHN()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_OELDMLMHEHN_OFFSET))(this);
		}

		::System::Void PCIOAANPHKO(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FCHEPCNCAIM_PCIOAANPHKO_OFFSET))(this, a1);
		}

	};
