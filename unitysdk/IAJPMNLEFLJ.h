#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHLDKGBBFMC.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class MeshBound; }
namespace System { class Object; }

#define IAJPMNLEFLJ_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CEDB3E0)
#define IAJPMNLEFLJ_BJKINEEONNE_OFFSET UNITYSDK_OFFSET(0x3C39EC0)
#define IAJPMNLEFLJ_DDBAFKONNJM_OFFSET UNITYSDK_OFFSET(0x3C39F10)
#define IAJPMNLEFLJ_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define IAJPMNLEFLJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define IAJPMNLEFLJ_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CEDB180)
#define IAJPMNLEFLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C39E40)
#define IAJPMNLEFLJ_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CEDB090)
#define IAJPMNLEFLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define IAJPMNLEFLJ_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define IAJPMNLEFLJ_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define IAJPMNLEFLJ_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define IAJPMNLEFLJ_HOHACIFCLGF_OFFSET UNITYSDK_OFFSET(0x3C39E50)
#define IAJPMNLEFLJ_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define IAJPMNLEFLJ_MMMGBFPEGGJ_OFFSET UNITYSDK_OFFSET(0x3C39F30)
#define IAJPMNLEFLJ_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CEDB490)
#define IAJPMNLEFLJ_OINEMIDPLAN_OFFSET UNITYSDK_OFFSET(0x3C39EB0)
#define IAJPMNLEFLJ_PMOBHLFDNPH_OFFSET UNITYSDK_OFFSET(0x3C39E60)

inline static constexpr unsigned int IAJPMNLEFLJ_TypeDefinitionIndex = 10704;

	struct alignas(8) IAJPMNLEFLJ
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::IAJPMNLEFLJ a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::IAJPMNLEFLJ, ::System::Object*))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::IAJPMNLEFLJ a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::IAJPMNLEFLJ, ::System::Object*))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::IAJPMNLEFLJ a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IAJPMNLEFLJ))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::IAJPMNLEFLJ a1)
		{
			return ((::System::Boolean(*)(::IAJPMNLEFLJ))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::IAJPMNLEFLJ a1)
		{
			return ((::System::Boolean(*)(::IAJPMNLEFLJ))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::System::Int32 HOHACIFCLGF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_HOHACIFCLGF_OFFSET))(this);
		}

		::System::Void PMOBHLFDNPH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_PMOBHLFDNPH_OFFSET))(this, a1);
		}

		::RPG::GameCore::MeshBound* OINEMIDPLAN()
		{
			return ((::RPG::GameCore::MeshBound*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_OINEMIDPLAN_OFFSET))(this);
		}

		::System::Void BJKINEEONNE(::RPG::GameCore::MeshBound* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MeshBound*))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_BJKINEEONNE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::BHLDKGBBFMC> DDBAFKONNJM()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::BHLDKGBBFMC>(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_DDBAFKONNJM_OFFSET))(this);
		}

		::System::Void MMMGBFPEGGJ(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::BHLDKGBBFMC> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::BHLDKGBBFMC>))((::PBYTE)hIl2Cpp + IAJPMNLEFLJ_MMMGBFPEGGJ_OFFSET))(this, a1);
		}

	};
