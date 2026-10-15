#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HLODExpandType.h"
#include "unitysdk/JPCONPIKIEK.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define DEHNEKNFKBJ_AHCJOAICBAP_OFFSET UNITYSDK_OFFSET(0x3C36780)
#define DEHNEKNFKBJ_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CD120E0)
#define DEHNEKNFKBJ_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define DEHNEKNFKBJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define DEHNEKNFKBJ_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CD11FB0)
#define DEHNEKNFKBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C36710)
#define DEHNEKNFKBJ_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CD11EA0)
#define DEHNEKNFKBJ_FIKMPHLBFKI_OFFSET UNITYSDK_OFFSET(0x3C367A0)
#define DEHNEKNFKBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define DEHNEKNFKBJ_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define DEHNEKNFKBJ_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define DEHNEKNFKBJ_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define DEHNEKNFKBJ_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define DEHNEKNFKBJ_LNLDGLJMLHD_OFFSET UNITYSDK_OFFSET(0x3C36720)
#define DEHNEKNFKBJ_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CD12190)
#define DEHNEKNFKBJ_NIDNALKDKEB_OFFSET UNITYSDK_OFFSET(0x3C36730)

inline static constexpr unsigned int DEHNEKNFKBJ_TypeDefinitionIndex = 10671;

	struct alignas(8) DEHNEKNFKBJ
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + DEHNEKNFKBJ_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHNEKNFKBJ_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHNEKNFKBJ_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHNEKNFKBJ_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHNEKNFKBJ_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::DEHNEKNFKBJ a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::DEHNEKNFKBJ, ::System::Object*))((::PBYTE)hIl2Cpp + DEHNEKNFKBJ_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::DEHNEKNFKBJ a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::DEHNEKNFKBJ, ::System::Object*))((::PBYTE)hIl2Cpp + DEHNEKNFKBJ_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::DEHNEKNFKBJ a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEHNEKNFKBJ))((::PBYTE)hIl2Cpp + DEHNEKNFKBJ_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEHNEKNFKBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHNEKNFKBJ_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::DEHNEKNFKBJ a1)
		{
			return ((::System::Boolean(*)(::DEHNEKNFKBJ))((::PBYTE)hIl2Cpp + DEHNEKNFKBJ_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::DEHNEKNFKBJ a1)
		{
			return ((::System::Boolean(*)(::DEHNEKNFKBJ))((::PBYTE)hIl2Cpp + DEHNEKNFKBJ_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::HLODExpandType LNLDGLJMLHD()
		{
			return ((::RPG::GameCore::HLODExpandType(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHNEKNFKBJ_LNLDGLJMLHD_OFFSET))(this);
		}

		::System::Void NIDNALKDKEB(::RPG::GameCore::HLODExpandType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HLODExpandType))((::PBYTE)hIl2Cpp + DEHNEKNFKBJ_NIDNALKDKEB_OFFSET))(this, a1);
		}

		::JPCONPIKIEK AHCJOAICBAP()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHNEKNFKBJ_AHCJOAICBAP_OFFSET))(this);
		}

		::System::Void FIKMPHLBFKI(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + DEHNEKNFKBJ_FIKMPHLBFKI_OFFSET))(this, a1);
		}

	};
