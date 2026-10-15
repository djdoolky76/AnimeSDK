#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryValuePoolMember_2.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define FKOBDFANDBE_ADCNIDFELHJ_OFFSET UNITYSDK_OFFSET(0x3C387F0)
#define FKOBDFANDBE_AMMGLLENPAC_OFFSET UNITYSDK_OFFSET(0x3C387A0)
#define FKOBDFANDBE_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CDFF870)
#define FKOBDFANDBE_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define FKOBDFANDBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define FKOBDFANDBE_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CDFF740)
#define FKOBDFANDBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C38780)
#define FKOBDFANDBE_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CDFF630)
#define FKOBDFANDBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define FKOBDFANDBE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define FKOBDFANDBE_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define FKOBDFANDBE_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define FKOBDFANDBE_HIEIGBIMEMN_OFFSET UNITYSDK_OFFSET(0x3C38790)
#define FKOBDFANDBE_IAIPIAFMINN_OFFSET UNITYSDK_OFFSET(0x3C38850)
#define FKOBDFANDBE_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define FKOBDFANDBE_JJGJGNFABJC_OFFSET UNITYSDK_OFFSET(0x3C38870)
#define FKOBDFANDBE_NDEFLINOKMC_OFFSET UNITYSDK_OFFSET(0x3C38800)
#define FKOBDFANDBE_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CDFF920)

inline static constexpr unsigned int FKOBDFANDBE_TypeDefinitionIndex = 10641;

	struct alignas(8) FKOBDFANDBE
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + FKOBDFANDBE_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOBDFANDBE_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOBDFANDBE_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOBDFANDBE_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOBDFANDBE_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::FKOBDFANDBE a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::FKOBDFANDBE, ::System::Object*))((::PBYTE)hIl2Cpp + FKOBDFANDBE_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::FKOBDFANDBE a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::FKOBDFANDBE, ::System::Object*))((::PBYTE)hIl2Cpp + FKOBDFANDBE_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::FKOBDFANDBE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKOBDFANDBE))((::PBYTE)hIl2Cpp + FKOBDFANDBE_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKOBDFANDBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOBDFANDBE_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::FKOBDFANDBE a1)
		{
			return ((::System::Boolean(*)(::FKOBDFANDBE))((::PBYTE)hIl2Cpp + FKOBDFANDBE_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::FKOBDFANDBE a1)
		{
			return ((::System::Boolean(*)(::FKOBDFANDBE))((::PBYTE)hIl2Cpp + FKOBDFANDBE_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::System::UInt32 HIEIGBIMEMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOBDFANDBE_HIEIGBIMEMN_OFFSET))(this);
		}

		::System::Void AMMGLLENPAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKOBDFANDBE_AMMGLLENPAC_OFFSET))(this, a1);
		}

		::System::Boolean ADCNIDFELHJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOBDFANDBE_ADCNIDFELHJ_OFFSET))(this);
		}

		::System::Void NDEFLINOKMC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FKOBDFANDBE_NDEFLINOKMC_OFFSET))(this, a1);
		}

		/*
		::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt32, ::NBFIHEKABBN> IAIPIAFMINN()
		{
			return ((::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt32, ::NBFIHEKABBN>(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOBDFANDBE_IAIPIAFMINN_OFFSET))(this);
		}
		*/

		/*
		::System::Void JJGJGNFABJC(::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt32, ::NBFIHEKABBN> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt32, ::NBFIHEKABBN>))((::PBYTE)hIl2Cpp + FKOBDFANDBE_JJGJGNFABJC_OFFSET))(this, a1);
		}
		*/

	};
