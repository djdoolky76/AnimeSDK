#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFBNDCCANOG.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryValuePoolMember_2.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define MECLOIPCFOB_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1E34E1E0)
#define MECLOIPCFOB_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x31619E0)
#define MECLOIPCFOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3E7C580)
#define MECLOIPCFOB_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1E34DF80)
#define MECLOIPCFOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E8C160)
#define MECLOIPCFOB_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1E34DE90)
#define MECLOIPCFOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x318C7A0)
#define MECLOIPCFOB_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x318C5A0)
#define MECLOIPCFOB_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define MECLOIPCFOB_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define MECLOIPCFOB_HGILJMCFFEA_OFFSET UNITYSDK_OFFSET(0x3E8C170)
#define MECLOIPCFOB_INIT_OFFSET UNITYSDK_OFFSET(0x18D10)
#define MECLOIPCFOB_KIMPCNIGPHL_OFFSET UNITYSDK_OFFSET(0x3E8C190)
#define MECLOIPCFOB_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1E34E290)

inline static constexpr unsigned int MECLOIPCFOB_TypeDefinitionIndex = 10658;

	struct alignas(8) MECLOIPCFOB
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + MECLOIPCFOB_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MECLOIPCFOB_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MECLOIPCFOB_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MECLOIPCFOB_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECLOIPCFOB_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::MECLOIPCFOB a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::MECLOIPCFOB, ::System::Object*))((::PBYTE)hIl2Cpp + MECLOIPCFOB_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::MECLOIPCFOB a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::MECLOIPCFOB, ::System::Object*))((::PBYTE)hIl2Cpp + MECLOIPCFOB_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::MECLOIPCFOB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MECLOIPCFOB))((::PBYTE)hIl2Cpp + MECLOIPCFOB_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MECLOIPCFOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MECLOIPCFOB_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::MECLOIPCFOB a1)
		{
			return ((::System::Boolean(*)(::MECLOIPCFOB))((::PBYTE)hIl2Cpp + MECLOIPCFOB_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::MECLOIPCFOB a1)
		{
			return ((::System::Boolean(*)(::MECLOIPCFOB))((::PBYTE)hIl2Cpp + MECLOIPCFOB_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt32, ::GFBNDCCANOG> HGILJMCFFEA()
		{
			return ((::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt32, ::GFBNDCCANOG>(*)(::PVOID))((::PBYTE)hIl2Cpp + MECLOIPCFOB_HGILJMCFFEA_OFFSET))(this);
		}

		::System::Void KIMPCNIGPHL(::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt32, ::GFBNDCCANOG> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt32, ::GFBNDCCANOG>))((::PBYTE)hIl2Cpp + MECLOIPCFOB_KIMPCNIGPHL_OFFSET))(this, a1);
		}

	};
