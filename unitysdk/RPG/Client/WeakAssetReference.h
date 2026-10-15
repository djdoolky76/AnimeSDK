#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_WEAKASSETREFERENCE_CTOR_OFFSET UNITYSDK_OFFSET(0x3C28870)
#define RPG_CLIENT_WEAKASSETREFERENCE_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1C4B4380)
#define RPG_CLIENT_WEAKASSETREFERENCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C28A60)
#define RPG_CLIENT_WEAKASSETREFERENCE_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1C4B42D0)
#define RPG_CLIENT_WEAKASSETREFERENCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C28A70)
#define RPG_CLIENT_WEAKASSETREFERENCE_HJKIEKODDAL_OFFSET UNITYSDK_OFFSET(0x3C28930)
#define RPG_CLIENT_WEAKASSETREFERENCE_IEBLIABGGLL_OFFSET UNITYSDK_OFFSET(0x3C28990)
#define RPG_CLIENT_WEAKASSETREFERENCE_LFIHLFHBPII_OFFSET UNITYSDK_OFFSET(0x3C288D0)
#define RPG_CLIENT_WEAKASSETREFERENCE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x3C28A20)
#define RPG_CLIENT_WEAKASSETREFERENCE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x3C289E0)

namespace RPG::Client
{
	inline static constexpr unsigned int WeakAssetReference_TypeDefinitionIndex = 41410;

	struct alignas(8) WeakAssetReference
	{
		::System::String* guid; // 0x10
		::System::String* path; // 0x18
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_CTOR_OFFSET))(this, a1);
		}

		::System::Void LFIHLFHBPII(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_LFIHLFHBPII_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::RPG::Client::WeakAssetReference a1, ::RPG::Client::WeakAssetReference a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::WeakAssetReference, ::RPG::Client::WeakAssetReference))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::RPG::Client::WeakAssetReference a1, ::RPG::Client::WeakAssetReference a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::WeakAssetReference, ::RPG::Client::WeakAssetReference))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::System::Boolean HJKIEKODDAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_HJKIEKODDAL_OFFSET))(this);
		}

		::System::String* IEBLIABGGLL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_IEBLIABGGLL_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WEAKASSETREFERENCE_GETHASHCODE_OFFSET))(this);
		}

	};
}
