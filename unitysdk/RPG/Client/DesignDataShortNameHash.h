#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1EC47A90)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0x3C51550)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC47FF0)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_CFJMDODACEC_OFFSET UNITYSDK_OFFSET(0x1EC47B10)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x3C515B0)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3C515A0)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1EC47FA0)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C51660)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C51610)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1EC47F50)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C51670)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_LDFPNODEAEF_OFFSET UNITYSDK_OFFSET(0x1EC479D0)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_LOCHKJJKHKA_OFFSET UNITYSDK_OFFSET(0x1EC47A50)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C516C0)

namespace RPG::Client
{
	inline static constexpr unsigned int DesignDataShortNameHash_TypeDefinitionIndex = 35264;

	struct alignas(4) DesignDataShortNameHash
	{
		::System::UInt64 Value; // 0x10
		static ::RPG::Client::DesignDataShortNameHash* StaticGet_Empty()
		{
			return (::RPG::Client::DesignDataShortNameHash*)UnitySDK::FromName("RPG.Client", "DesignDataShortNameHash")->GetStaticField(0x3B10);
		}

		::System::Void _ctor(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_CCTOR_OFFSET))();
		}

		/*
		static ::RPG::Client::DesignDataShortNameHash LDFPNODEAEF(::System::String* a1)
		{
			return ((::RPG::Client::DesignDataShortNameHash(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_LDFPNODEAEF_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::Client::DesignDataShortNameHash LOCHKJJKHKA(::System::UInt32 a1)
		{
			return ((::RPG::Client::DesignDataShortNameHash(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_LOCHKJJKHKA_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::Client::DesignDataShortNameHash BBNJCKPKPDN(::System::UInt32 a1)
		{
			return ((::RPG::Client::DesignDataShortNameHash(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		static ::System::UInt32 CFJMDODACEC(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_CFJMDODACEC_OFFSET))(a1);
		}

		::System::Boolean BPDIGKDIJKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_BPDIGKDIJKN_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_COMPARETO_OFFSET))(this, a1);
		}

		/*
		::System::Int32 CompareTo_1(::RPG::Client::DesignDataShortNameHash a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_COMPARETO_1_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Boolean Equals(::RPG::Client::DesignDataShortNameHash a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_TOSTRING_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::RPG::Client::DesignDataShortNameHash a1, ::RPG::Client::DesignDataShortNameHash a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::DesignDataShortNameHash, ::RPG::Client::DesignDataShortNameHash))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::RPG::Client::DesignDataShortNameHash a1, ::RPG::Client::DesignDataShortNameHash a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::DesignDataShortNameHash, ::RPG::Client::DesignDataShortNameHash))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

	};
}
