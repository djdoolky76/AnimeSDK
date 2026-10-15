#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPCONPIKIEK.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class ColliderConfig; }
namespace System { class Object; }

#define FFHNHAFKEOC_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CDB90D0)
#define FFHNHAFKEOC_BPLHGGOHOMB_OFFSET UNITYSDK_OFFSET(0x3C38CC0)
#define FFHNHAFKEOC_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F874F0)
#define FFHNHAFKEOC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2DCD0)
#define FFHNHAFKEOC_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CDB8E70)
#define FFHNHAFKEOC_EBELDCBDFCL_OFFSET UNITYSDK_OFFSET(0x3C38C60)
#define FFHNHAFKEOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C38C50)
#define FFHNHAFKEOC_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CDB8D80)
#define FFHNHAFKEOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1A20)
#define FFHNHAFKEOC_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB1820)
#define FFHNHAFKEOC_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define FFHNHAFKEOC_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define FFHNHAFKEOC_INIT_OFFSET UNITYSDK_OFFSET(0x140C0)
#define FFHNHAFKEOC_KNFCOHIEINN_OFFSET UNITYSDK_OFFSET(0x3C38CE0)
#define FFHNHAFKEOC_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CDB9180)
#define FFHNHAFKEOC_OGBIBNLBDKH_OFFSET UNITYSDK_OFFSET(0x3C38C70)

inline static constexpr unsigned int FFHNHAFKEOC_TypeDefinitionIndex = 10709;

	struct alignas(8) FFHNHAFKEOC
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + FFHNHAFKEOC_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHNHAFKEOC_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHNHAFKEOC_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHNHAFKEOC_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHNHAFKEOC_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::FFHNHAFKEOC a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::FFHNHAFKEOC, ::System::Object*))((::PBYTE)hIl2Cpp + FFHNHAFKEOC_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::FFHNHAFKEOC a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::FFHNHAFKEOC, ::System::Object*))((::PBYTE)hIl2Cpp + FFHNHAFKEOC_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::FFHNHAFKEOC a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FFHNHAFKEOC))((::PBYTE)hIl2Cpp + FFHNHAFKEOC_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFHNHAFKEOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHNHAFKEOC_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::FFHNHAFKEOC a1)
		{
			return ((::System::Boolean(*)(::FFHNHAFKEOC))((::PBYTE)hIl2Cpp + FFHNHAFKEOC_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::FFHNHAFKEOC a1)
		{
			return ((::System::Boolean(*)(::FFHNHAFKEOC))((::PBYTE)hIl2Cpp + FFHNHAFKEOC_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::Il2CppArray<::RPG::GameCore::ColliderConfig*>* EBELDCBDFCL()
		{
			return ((::Il2CppArray<::RPG::GameCore::ColliderConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHNHAFKEOC_EBELDCBDFCL_OFFSET))(this);
		}

		::System::Void OGBIBNLBDKH(::Il2CppArray<::RPG::GameCore::ColliderConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ColliderConfig*>*))((::PBYTE)hIl2Cpp + FFHNHAFKEOC_OGBIBNLBDKH_OFFSET))(this, a1);
		}

		::JPCONPIKIEK BPLHGGOHOMB()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHNHAFKEOC_BPLHGGOHOMB_OFFSET))(this);
		}

		::System::Void KNFCOHIEINN(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + FFHNHAFKEOC_KNFCOHIEINN_OFFSET))(this, a1);
		}

	};
