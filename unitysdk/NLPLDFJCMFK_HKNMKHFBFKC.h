#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define NLPLDFJCMFK_HKNMKHFBFKC_CTOR_OFFSET UNITYSDK_OFFSET(0x21E10)
#define NLPLDFJCMFK_HKNMKHFBFKC_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0xBC7BE40)
#define NLPLDFJCMFK_HKNMKHFBFKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x21E30)
#define NLPLDFJCMFK_HKNMKHFBFKC_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0xBC7BD80)
#define NLPLDFJCMFK_HKNMKHFBFKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x21EB0)

inline static constexpr unsigned int NLPLDFJCMFK_HKNMKHFBFKC_TypeDefinitionIndex = 49544;

	struct alignas(4) NLPLDFJCMFK_HKNMKHFBFKC
	{
		::System::Int32 BDCFLFPLDAN; // 0x10
		::System::Int32 IDGNLJPNCFD; // 0x14
		::System::Int32 BNGDECGNLJF; // 0x18
		::System::Int32 CDODAEHAFEN; // 0x1C
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_HKNMKHFBFKC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_HKNMKHFBFKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_HKNMKHFBFKC_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::NLPLDFJCMFK_HKNMKHFBFKC a1, ::NLPLDFJCMFK_HKNMKHFBFKC a2)
		{
			return ((::System::Boolean(*)(::NLPLDFJCMFK_HKNMKHFBFKC, ::NLPLDFJCMFK_HKNMKHFBFKC))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_HKNMKHFBFKC_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::NLPLDFJCMFK_HKNMKHFBFKC a1, ::NLPLDFJCMFK_HKNMKHFBFKC a2)
		{
			return ((::System::Boolean(*)(::NLPLDFJCMFK_HKNMKHFBFKC, ::NLPLDFJCMFK_HKNMKHFBFKC))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_HKNMKHFBFKC_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

	};
