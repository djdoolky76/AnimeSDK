#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryKeyStringValuePoolMember_1.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryValuePoolMember_2.h"
class AHKHIJLPJBG;
class GMOEJIONOII;
class LELCKJPOPAO;
namespace System { class Object; }

#define AHKHIJLPJBG_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CCC5770)
#define AHKHIJLPJBG_BCBJEPGIINF_OFFSET UNITYSDK_OFFSET(0x1CCC5280)
#define AHKHIJLPJBG_BMBIDDPNNJP_OFFSET UNITYSDK_OFFSET(0x1CCC5C50)
#define AHKHIJLPJBG_CGJDCNANJBI_OFFSET UNITYSDK_OFFSET(0x1CCC58F0)
#define AHKHIJLPJBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC5FB0)
#define AHKHIJLPJBG_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x1CCC5580)
#define AHKHIJLPJBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CCC5260)
#define AHKHIJLPJBG_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CCC5570)
#define AHKHIJLPJBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CCC5640)
#define AHKHIJLPJBG_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CCC53C0)
#define AHKHIJLPJBG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CCC5290)
#define AHKHIJLPJBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CCC5750)
#define AHKHIJLPJBG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1CCC5190)
#define AHKHIJLPJBG_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1CCC5240)
#define AHKHIJLPJBG_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1CCC5250)
#define AHKHIJLPJBG_ICNGBHECJAH_OFFSET UNITYSDK_OFFSET(0x1CCC5270)
#define AHKHIJLPJBG_INIT_OFFSET UNITYSDK_OFFSET(0x1CCC5180)
#define AHKHIJLPJBG_JPCFIEMOEON_OFFSET UNITYSDK_OFFSET(0x1CCC5C00)
#define AHKHIJLPJBG_LCJIGPCDPDG_OFFSET UNITYSDK_OFFSET(0x1CCC5F60)
#define AHKHIJLPJBG_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CCC5830)

inline static constexpr unsigned int AHKHIJLPJBG_TypeDefinitionIndex = 10698;

	class AHKHIJLPJBG : public ::System::Object
	{
	public:
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Boolean CLKPCMIPJOE; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_CTOR_OFFSET))(this);
		}

		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_DISPOSE_OFFSET))(this);
		}

		::System::Boolean ICNGBHECJAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_ICNGBHECJAH_OFFSET))(this);
		}

		::System::Void BCBJEPGIINF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_BCBJEPGIINF_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_FINALIZE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::AHKHIJLPJBG* a1, ::AHKHIJLPJBG* a2)
		{
			return ((::System::Boolean(*)(::AHKHIJLPJBG*, ::AHKHIJLPJBG*))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::AHKHIJLPJBG* a1, ::AHKHIJLPJBG* a2)
		{
			return ((::System::Boolean(*)(::AHKHIJLPJBG*, ::AHKHIJLPJBG*))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

		::System::Boolean DGCGLNOLDIB(::AHKHIJLPJBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHKHIJLPJBG*))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_DGCGLNOLDIB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean BBNJCKPKPDN(::AHKHIJLPJBG* a1)
		{
			return ((::System::Boolean(*)(::AHKHIJLPJBG*))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_BBNJCKPKPDN_OFFSET))(a1);
		}

		static ::System::Boolean NHCFLDCDLCP(::AHKHIJLPJBG* a1)
		{
			return ((::System::Boolean(*)(::AHKHIJLPJBG*))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_NHCFLDCDLCP_OFFSET))(a1);
		}

		::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt64, ::GMOEJIONOII*> CGJDCNANJBI()
		{
			return ((::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt64, ::GMOEJIONOII*>(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_CGJDCNANJBI_OFFSET))(this);
		}

		::System::Void JPCFIEMOEON(::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt64, ::GMOEJIONOII*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt64, ::GMOEJIONOII*>))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_JPCFIEMOEON_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolDictionaryKeyStringValuePoolMember_1<::GMOEJIONOII*> BMBIDDPNNJP()
		{
			return ((::RPG::GameCore::ConfigDataPoolDictionaryKeyStringValuePoolMember_1<::GMOEJIONOII*>(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_BMBIDDPNNJP_OFFSET))(this);
		}

		::System::Void LCJIGPCDPDG(::RPG::GameCore::ConfigDataPoolDictionaryKeyStringValuePoolMember_1<::GMOEJIONOII*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolDictionaryKeyStringValuePoolMember_1<::GMOEJIONOII*>))((::PBYTE)hIl2Cpp + AHKHIJLPJBG_LCJIGPCDPDG_OFFSET))(this, a1);
		}

	};
