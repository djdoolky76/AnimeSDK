#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define LNMEGEABJHF_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3F9D750)
#define LNMEGEABJHF_CTOR_OFFSET UNITYSDK_OFFSET(0x3F9D5A0)
#define LNMEGEABJHF_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x208AEE40)
#define LNMEGEABJHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3F9D6D0)
#define LNMEGEABJHF_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F9D6C0)
#define LNMEGEABJHF_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x208A3FC0)
#define LNMEGEABJHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3F9D620)
#define LNMEGEABJHF_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define LNMEGEABJHF_GET_START_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define LNMEGEABJHF_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0x3F9D820)
#define LNMEGEABJHF_HFBEAIDDKEL_OFFSET UNITYSDK_OFFSET(0x208AEA90)
#define LNMEGEABJHF_JDAIIADMFCA_OFFSET UNITYSDK_OFFSET(0x3F9D7C0)
#define LNMEGEABJHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F9D6B0)

inline static constexpr unsigned int LNMEGEABJHF_TypeDefinitionIndex = 42595;

	struct alignas(4) LNMEGEABJHF
	{
		::System::Int32 _Start_k__BackingField; // 0x10
		::System::Int32 _Length_k__BackingField; // 0x14
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LNMEGEABJHF_CTOR_OFFSET))(this, a1, a2);
		}

		/*
		static ::LNMEGEABJHF HFBEAIDDKEL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::LNMEGEABJHF(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LNMEGEABJHF_HFBEAIDDKEL_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMEGEABJHF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMEGEABJHF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNMEGEABJHF_EQUALS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::LNMEGEABJHF a1, ::LNMEGEABJHF a2)
		{
			return ((::System::Boolean(*)(::LNMEGEABJHF, ::LNMEGEABJHF))((::PBYTE)hIl2Cpp + LNMEGEABJHF_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::LNMEGEABJHF a1, ::LNMEGEABJHF a2)
		{
			return ((::System::Boolean(*)(::LNMEGEABJHF, ::LNMEGEABJHF))((::PBYTE)hIl2Cpp + LNMEGEABJHF_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean Equals_1(::LNMEGEABJHF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LNMEGEABJHF))((::PBYTE)hIl2Cpp + LNMEGEABJHF_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Int32 CompareTo(::LNMEGEABJHF a1)
		{
			return ((::System::Int32(*)(::PVOID, ::LNMEGEABJHF))((::PBYTE)hIl2Cpp + LNMEGEABJHF_COMPARETO_OFFSET))(this, a1);
		}
		*/

		::System::Int32 get_Start()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMEGEABJHF_GET_START_OFFSET))(this);
		}

		::System::Int32 JDAIIADMFCA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMEGEABJHF_JDAIIADMFCA_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMEGEABJHF_GET_LENGTH_OFFSET))(this);
		}

		::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMEGEABJHF_GNNPFBBMFLA_OFFSET))(this);
		}

	};
