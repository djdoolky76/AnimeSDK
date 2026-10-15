#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ONPKMMDCDAN_ADHILGNMKOM_OFFSET UNITYSDK_OFFSET(0x3C28C50)
#define ONPKMMDCDAN_COJNGJJMHBN_OFFSET UNITYSDK_OFFSET(0x3C28CF0)
#define ONPKMMDCDAN_CTOR_OFFSET UNITYSDK_OFFSET(0x3C28D90)
#define ONPKMMDCDAN_DBOGCMNBLPA_OFFSET UNITYSDK_OFFSET(0x3C28CA0)
#define ONPKMMDCDAN_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1C57BB80)
#define ONPKMMDCDAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C28EB0)
#define ONPKMMDCDAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C28E60)
#define ONPKMMDCDAN_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1C57BB00)
#define ONPKMMDCDAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C28EC0)
#define ONPKMMDCDAN_HKDBGKHLJLO_OFFSET UNITYSDK_OFFSET(0x3C28DA0)
#define ONPKMMDCDAN_JONLKJCCODE_OFFSET UNITYSDK_OFFSET(0x1C57B8B0)
#define ONPKMMDCDAN_NIJCGFMDACC_OFFSET UNITYSDK_OFFSET(0x3C28D40)
#define ONPKMMDCDAN_ODJCONMOLOG_OFFSET UNITYSDK_OFFSET(0x1C57B860)

	struct alignas(4) ONPKMMDCDAN
	{
		::System::Int32 APPIHABBCGK; // 0x10
		::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ONPKMMDCDAN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean ADHILGNMKOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPKMMDCDAN_ADHILGNMKOM_OFFSET))(this);
		}

		::System::Int32 DBOGCMNBLPA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPKMMDCDAN_DBOGCMNBLPA_OFFSET))(this);
		}

		::System::Boolean COJNGJJMHBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPKMMDCDAN_COJNGJJMHBN_OFFSET))(this);
		}

		::System::Int32 NIJCGFMDACC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPKMMDCDAN_NIJCGFMDACC_OFFSET))(this);
		}

		/*
		static ::ONPKMMDCDAN ODJCONMOLOG(::System::Int32 a1)
		{
			return ((::ONPKMMDCDAN(*)(::System::Int32))((::PBYTE)hIl2Cpp + ONPKMMDCDAN_ODJCONMOLOG_OFFSET))(a1);
		}
		*/

		/*
		static ::ONPKMMDCDAN JONLKJCCODE(::System::Int32 a1)
		{
			return ((::ONPKMMDCDAN(*)(::System::Int32))((::PBYTE)hIl2Cpp + ONPKMMDCDAN_JONLKJCCODE_OFFSET))(a1);
		}
		*/

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* HKDBGKHLJLO(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + ONPKMMDCDAN_HKDBGKHLJLO_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals(::ONPKMMDCDAN a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONPKMMDCDAN))((::PBYTE)hIl2Cpp + ONPKMMDCDAN_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONPKMMDCDAN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPKMMDCDAN_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::ONPKMMDCDAN a1, ::ONPKMMDCDAN a2)
		{
			return ((::System::Boolean(*)(::ONPKMMDCDAN, ::ONPKMMDCDAN))((::PBYTE)hIl2Cpp + ONPKMMDCDAN_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::ONPKMMDCDAN a1, ::ONPKMMDCDAN a2)
		{
			return ((::System::Boolean(*)(::ONPKMMDCDAN, ::ONPKMMDCDAN))((::PBYTE)hIl2Cpp + ONPKMMDCDAN_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

	};
