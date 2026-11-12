#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define RPG_PROFILEUTILITY_KEY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE6E990)
#define RPG_PROFILEUTILITY_KEY_CTOR_OFFSET UNITYSDK_OFFSET(0x3E9EE60)
#define RPG_PROFILEUTILITY_KEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E74780)
#define RPG_PROFILEUTILITY_KEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E9EE90)
#define RPG_PROFILEUTILITY_KEY_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0x1D40)
#define RPG_PROFILEUTILITY_KEY_GET_SAMPLENAME_OFFSET UNITYSDK_OFFSET(0x1D30)

namespace RPG
{
	inline static constexpr unsigned int ProfileUtility_Key_TypeDefinitionIndex = 36078;

	struct alignas(8) ProfileUtility_Key
	{
		::System::String* m_SampleName; // 0x10
		::System::String* m_Detail; // 0x18
		static ::RPG::ProfileUtility_Key* StaticGet_Null()
		{
			return (::RPG::ProfileUtility_Key*)UnitySDK::FromName("RPG", "Key")->GetStaticField(0x810);
		}

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_KEY_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_KEY_CCTOR_OFFSET))();
		}

		::System::String* get_SampleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_KEY_GET_SAMPLENAME_OFFSET))(this);
		}

		::System::String* get_Detail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_KEY_GET_DETAIL_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::RPG::ProfileUtility_Key a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::ProfileUtility_Key))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_KEY_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILEUTILITY_KEY_GETHASHCODE_OFFSET))(this);
		}

	};
}
