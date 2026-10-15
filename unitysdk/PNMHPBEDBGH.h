#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define PNMHPBEDBGH_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1D312680)
#define PNMHPBEDBGH_BCOPLEBBGBG_OFFSET UNITYSDK_OFFSET(0x3C3E990)
#define PNMHPBEDBGH_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define PNMHPBEDBGH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define PNMHPBEDBGH_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D312550)
#define PNMHPBEDBGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C3E980)
#define PNMHPBEDBGH_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D312440)
#define PNMHPBEDBGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define PNMHPBEDBGH_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define PNMHPBEDBGH_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define PNMHPBEDBGH_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define PNMHPBEDBGH_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define PNMHPBEDBGH_MGCGAADJMEI_OFFSET UNITYSDK_OFFSET(0x3C3E9B0)
#define PNMHPBEDBGH_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1D312730)

inline static constexpr unsigned int PNMHPBEDBGH_TypeDefinitionIndex = 10662;

	struct alignas(8) PNMHPBEDBGH
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + PNMHPBEDBGH_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMHPBEDBGH_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMHPBEDBGH_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMHPBEDBGH_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMHPBEDBGH_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::PNMHPBEDBGH a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PNMHPBEDBGH, ::System::Object*))((::PBYTE)hIl2Cpp + PNMHPBEDBGH_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::PNMHPBEDBGH a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PNMHPBEDBGH, ::System::Object*))((::PBYTE)hIl2Cpp + PNMHPBEDBGH_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::PNMHPBEDBGH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNMHPBEDBGH))((::PBYTE)hIl2Cpp + PNMHPBEDBGH_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNMHPBEDBGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMHPBEDBGH_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::PNMHPBEDBGH a1)
		{
			return ((::System::Boolean(*)(::PNMHPBEDBGH))((::PBYTE)hIl2Cpp + PNMHPBEDBGH_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::PNMHPBEDBGH a1)
		{
			return ((::System::Boolean(*)(::PNMHPBEDBGH))((::PBYTE)hIl2Cpp + PNMHPBEDBGH_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::Int32> BCOPLEBBGBG()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMHPBEDBGH_BCOPLEBBGBG_OFFSET))(this);
		}

		::System::Void MGCGAADJMEI(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::Int32>))((::PBYTE)hIl2Cpp + PNMHPBEDBGH_MGCGAADJMEI_OFFSET))(this, a1);
		}

	};
