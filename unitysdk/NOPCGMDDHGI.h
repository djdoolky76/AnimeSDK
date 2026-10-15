#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHCKBNMKFAI.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryKeyStringValuePoolMember_1.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryValuePoolMember_2.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define NOPCGMDDHGI_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1D2162B0)
#define NOPCGMDDHGI_BMBIDDPNNJP_OFFSET UNITYSDK_OFFSET(0x3C3DC90)
#define NOPCGMDDHGI_CGJDCNANJBI_OFFSET UNITYSDK_OFFSET(0x3C3DC20)
#define NOPCGMDDHGI_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F874F0)
#define NOPCGMDDHGI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2DCD0)
#define NOPCGMDDHGI_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D216180)
#define NOPCGMDDHGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C3DC10)
#define NOPCGMDDHGI_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D216070)
#define NOPCGMDDHGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1A20)
#define NOPCGMDDHGI_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB1820)
#define NOPCGMDDHGI_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define NOPCGMDDHGI_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define NOPCGMDDHGI_INIT_OFFSET UNITYSDK_OFFSET(0x140C0)
#define NOPCGMDDHGI_JPCFIEMOEON_OFFSET UNITYSDK_OFFSET(0x3C3DC40)
#define NOPCGMDDHGI_LCJIGPCDPDG_OFFSET UNITYSDK_OFFSET(0x3C3DCB0)
#define NOPCGMDDHGI_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1D216360)

inline static constexpr unsigned int NOPCGMDDHGI_TypeDefinitionIndex = 10695;

	struct alignas(8) NOPCGMDDHGI
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + NOPCGMDDHGI_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCGMDDHGI_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCGMDDHGI_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCGMDDHGI_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCGMDDHGI_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::NOPCGMDDHGI a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::NOPCGMDDHGI, ::System::Object*))((::PBYTE)hIl2Cpp + NOPCGMDDHGI_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::NOPCGMDDHGI a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::NOPCGMDDHGI, ::System::Object*))((::PBYTE)hIl2Cpp + NOPCGMDDHGI_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::NOPCGMDDHGI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NOPCGMDDHGI))((::PBYTE)hIl2Cpp + NOPCGMDDHGI_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOPCGMDDHGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCGMDDHGI_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::NOPCGMDDHGI a1)
		{
			return ((::System::Boolean(*)(::NOPCGMDDHGI))((::PBYTE)hIl2Cpp + NOPCGMDDHGI_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::NOPCGMDDHGI a1)
		{
			return ((::System::Boolean(*)(::NOPCGMDDHGI))((::PBYTE)hIl2Cpp + NOPCGMDDHGI_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt64, ::HHCKBNMKFAI> CGJDCNANJBI()
		{
			return ((::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt64, ::HHCKBNMKFAI>(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCGMDDHGI_CGJDCNANJBI_OFFSET))(this);
		}

		::System::Void JPCFIEMOEON(::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt64, ::HHCKBNMKFAI> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt64, ::HHCKBNMKFAI>))((::PBYTE)hIl2Cpp + NOPCGMDDHGI_JPCFIEMOEON_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolDictionaryKeyStringValuePoolMember_1<::HHCKBNMKFAI> BMBIDDPNNJP()
		{
			return ((::RPG::GameCore::ConfigDataPoolDictionaryKeyStringValuePoolMember_1<::HHCKBNMKFAI>(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCGMDDHGI_BMBIDDPNNJP_OFFSET))(this);
		}

		::System::Void LCJIGPCDPDG(::RPG::GameCore::ConfigDataPoolDictionaryKeyStringValuePoolMember_1<::HHCKBNMKFAI> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolDictionaryKeyStringValuePoolMember_1<::HHCKBNMKFAI>))((::PBYTE)hIl2Cpp + NOPCGMDDHGI_LCJIGPCDPDG_OFFSET))(this, a1);
		}

	};
