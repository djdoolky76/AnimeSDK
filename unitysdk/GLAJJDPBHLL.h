#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RegionContentLevel.h"
#include "unitysdk/RPG/Client/RegionVisibility.h"
namespace System { class Object; }
namespace System { class String; }

#define GLAJJDPBHLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8E4BE0)
#define GLAJJDPBHLL_CTOR_OFFSET UNITYSDK_OFFSET(0x650320)
#define GLAJJDPBHLL_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1A8E4B50)
#define GLAJJDPBHLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E64320)
#define GLAJJDPBHLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E642C0)
#define GLAJJDPBHLL_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1A8E4AD0)
#define GLAJJDPBHLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E64330)
#define GLAJJDPBHLL_GET_CONTENTLEVEL_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define GLAJJDPBHLL_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define GLAJJDPBHLL_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x3E64230)
#define GLAJJDPBHLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E64380)

inline static constexpr unsigned int GLAJJDPBHLL_TypeDefinitionIndex = 63601;

	struct alignas(4) GLAJJDPBHLL
	{
		::RPG::Client::RegionContentLevel _ContentLevel_k__BackingField; // 0x10
		::RPG::Client::RegionVisibility _Visibility_k__BackingField; // 0x14
		static ::GLAJJDPBHLL* StaticGet_DEKDLAPIMOH()
		{
			return (::GLAJJDPBHLL*)UnitySDK::FromName("", "GLAJJDPBHLL")->GetStaticField(0xC070);
		}

		static ::GLAJJDPBHLL* StaticGet_JLHCDBJEIDM()
		{
			return (::GLAJJDPBHLL*)UnitySDK::FromName("", "GLAJJDPBHLL")->GetStaticField(0xC078);
		}

		static ::GLAJJDPBHLL* StaticGet_HKEPJLDBGIG()
		{
			return (::GLAJJDPBHLL*)UnitySDK::FromName("", "GLAJJDPBHLL")->GetStaticField(0xC080);
		}

		static ::GLAJJDPBHLL* StaticGet_NLCDGIPGFDJ()
		{
			return (::GLAJJDPBHLL*)UnitySDK::FromName("", "GLAJJDPBHLL")->GetStaticField(0xC088);
		}

		static ::GLAJJDPBHLL* StaticGet_DMKJAJLNEBK()
		{
			return (::GLAJJDPBHLL*)UnitySDK::FromName("", "GLAJJDPBHLL")->GetStaticField(0xC090);
		}

		static ::GLAJJDPBHLL* StaticGet_KGJAMKFPOAB()
		{
			return (::GLAJJDPBHLL*)UnitySDK::FromName("", "GLAJJDPBHLL")->GetStaticField(0xC098);
		}

		::System::Void _ctor(::RPG::Client::RegionContentLevel a1, ::RPG::Client::RegionVisibility a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RegionContentLevel, ::RPG::Client::RegionVisibility))((::PBYTE)hIl2Cpp + GLAJJDPBHLL_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLAJJDPBHLL_CCTOR_OFFSET))();
		}

		::RPG::Client::RegionContentLevel get_ContentLevel()
		{
			return ((::RPG::Client::RegionContentLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + GLAJJDPBHLL_GET_CONTENTLEVEL_OFFSET))(this);
		}

		::RPG::Client::RegionVisibility get_Visibility()
		{
			return ((::RPG::Client::RegionVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + GLAJJDPBHLL_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLAJJDPBHLL_LDAMHBBILAD_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::GLAJJDPBHLL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLAJJDPBHLL))((::PBYTE)hIl2Cpp + GLAJJDPBHLL_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLAJJDPBHLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLAJJDPBHLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLAJJDPBHLL_TOSTRING_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::GLAJJDPBHLL a1, ::GLAJJDPBHLL a2)
		{
			return ((::System::Boolean(*)(::GLAJJDPBHLL, ::GLAJJDPBHLL))((::PBYTE)hIl2Cpp + GLAJJDPBHLL_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::GLAJJDPBHLL a1, ::GLAJJDPBHLL a2)
		{
			return ((::System::Boolean(*)(::GLAJJDPBHLL, ::GLAJJDPBHLL))((::PBYTE)hIl2Cpp + GLAJJDPBHLL_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

	};
