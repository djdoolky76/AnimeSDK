#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_BYTEHASH16_BDJPPIMOJBH_OFFSET UNITYSDK_OFFSET(0x3C28770)
#define RPG_CLIENT_BYTEHASH16_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4B0230)
#define RPG_CLIENT_BYTEHASH16_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C286D0)
#define RPG_CLIENT_BYTEHASH16_CTOR_OFFSET UNITYSDK_OFFSET(0x21D60)
#define RPG_CLIENT_BYTEHASH16_DJKNAOANOCG_1_OFFSET UNITYSDK_OFFSET(0x3C286F0)
#define RPG_CLIENT_BYTEHASH16_DJKNAOANOCG_OFFSET UNITYSDK_OFFSET(0x3C286E0)
#define RPG_CLIENT_BYTEHASH16_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1C4B01B0)
#define RPG_CLIENT_BYTEHASH16_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C28800)
#define RPG_CLIENT_BYTEHASH16_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C28780)
#define RPG_CLIENT_BYTEHASH16_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1C4B0130)
#define RPG_CLIENT_BYTEHASH16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C28810)
#define RPG_CLIENT_BYTEHASH16_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C28760)

namespace RPG::Client
{
	inline static constexpr unsigned int ByteHash16_TypeDefinitionIndex = 41388;

	struct alignas(4) ByteHash16
	{
		::System::UInt32 _HashA; // 0x10
		::System::UInt32 _HashB; // 0x14
		::System::UInt32 _HashC; // 0x18
		::System::UInt32 _HashD; // 0x1C
		static ::Il2CppArray<::System::Byte>** StaticGet__ByteArray()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("RPG.Client", "ByteHash16")->GetStaticField(0xC20);
		}

		static ::RPG::Client::ByteHash16* StaticGet_ZERO()
		{
			return (::RPG::Client::ByteHash16*)UnitySDK::FromName("RPG.Client", "ByteHash16")->GetStaticField(0x630);
		}

		static ::System::Int32* StaticGet_msMainThreadId()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ByteHash16")->GetStaticField(0x640);
		}

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* DJKNAOANOCG()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_DJKNAOANOCG_OFFSET))(this);
		}

		::System::Void DJKNAOANOCG_1(::PVOID a1)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_DJKNAOANOCG_1_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_TOSTRING_OFFSET))(this);
		}

		::System::Void BDJPPIMOJBH(::PVOID a1)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_BDJPPIMOJBH_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals(::RPG::Client::ByteHash16 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::RPG::Client::ByteHash16 a1, ::RPG::Client::ByteHash16 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ByteHash16, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::RPG::Client::ByteHash16 a1, ::RPG::Client::ByteHash16 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ByteHash16, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

	};
}
