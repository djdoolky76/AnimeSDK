#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ECGLPNCBKDM.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryKeyStringValuePoolMember_1.h"
class AHCBAPLJPKB;
class LELCKJPOPAO;
namespace System { class Object; }

#define AHCBAPLJPKB_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CCC32A0)
#define AHCBAPLJPKB_BCBJEPGIINF_OFFSET UNITYSDK_OFFSET(0x1CCC2DD0)
#define AHCBAPLJPKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC3600)
#define AHCBAPLJPKB_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x1CCC30D0)
#define AHCBAPLJPKB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CCC2DB0)
#define AHCBAPLJPKB_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CCC30C0)
#define AHCBAPLJPKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CCC3190)
#define AHCBAPLJPKB_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CCC2F10)
#define AHCBAPLJPKB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CCC2DE0)
#define AHCBAPLJPKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CCC3280)
#define AHCBAPLJPKB_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1CCC2CE0)
#define AHCBAPLJPKB_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1CCC2D90)
#define AHCBAPLJPKB_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1CCC2DA0)
#define AHCBAPLJPKB_ICNGBHECJAH_OFFSET UNITYSDK_OFFSET(0x1CCC2DC0)
#define AHCBAPLJPKB_ILOAONOBINN_OFFSET UNITYSDK_OFFSET(0x1CCC3420)
#define AHCBAPLJPKB_INIT_OFFSET UNITYSDK_OFFSET(0x1CCC2CD0)
#define AHCBAPLJPKB_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CCC3360)
#define AHCBAPLJPKB_PMFEJLBJIIA_OFFSET UNITYSDK_OFFSET(0x1CCC35B0)

	class AHCBAPLJPKB : public ::System::Object
	{
	public:
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::Boolean CLKPCMIPJOE; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 IKKNJMJCDOJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_CTOR_OFFSET))(this);
		}

		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_DISPOSE_OFFSET))(this);
		}

		::System::Boolean ICNGBHECJAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_ICNGBHECJAH_OFFSET))(this);
		}

		::System::Void BCBJEPGIINF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_BCBJEPGIINF_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_FINALIZE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::AHCBAPLJPKB* a1, ::AHCBAPLJPKB* a2)
		{
			return ((::System::Boolean(*)(::AHCBAPLJPKB*, ::AHCBAPLJPKB*))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::AHCBAPLJPKB* a1, ::AHCBAPLJPKB* a2)
		{
			return ((::System::Boolean(*)(::AHCBAPLJPKB*, ::AHCBAPLJPKB*))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

		::System::Boolean DGCGLNOLDIB(::AHCBAPLJPKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHCBAPLJPKB*))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_DGCGLNOLDIB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean BBNJCKPKPDN(::AHCBAPLJPKB* a1)
		{
			return ((::System::Boolean(*)(::AHCBAPLJPKB*))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_BBNJCKPKPDN_OFFSET))(a1);
		}

		static ::System::Boolean NHCFLDCDLCP(::AHCBAPLJPKB* a1)
		{
			return ((::System::Boolean(*)(::AHCBAPLJPKB*))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_NHCFLDCDLCP_OFFSET))(a1);
		}

		::RPG::GameCore::ConfigDataPoolDictionaryKeyStringValuePoolMember_1<::ECGLPNCBKDM> ILOAONOBINN()
		{
			return ((::RPG::GameCore::ConfigDataPoolDictionaryKeyStringValuePoolMember_1<::ECGLPNCBKDM>(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_ILOAONOBINN_OFFSET))(this);
		}

		::System::Void PMFEJLBJIIA(::RPG::GameCore::ConfigDataPoolDictionaryKeyStringValuePoolMember_1<::ECGLPNCBKDM> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolDictionaryKeyStringValuePoolMember_1<::ECGLPNCBKDM>))((::PBYTE)hIl2Cpp + AHCBAPLJPKB_PMFEJLBJIIA_OFFSET))(this, a1);
		}

	};
