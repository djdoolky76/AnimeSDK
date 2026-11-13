#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPCONPIKIEK.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define EAKBGHBOKIG_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1E9A5C20)
#define EAKBGHBOKIG_BIHIPBDGIOJ_OFFSET UNITYSDK_OFFSET(0x3F32310)
#define EAKBGHBOKIG_CEOFPCKLOAD_OFFSET UNITYSDK_OFFSET(0x3F32320)
#define EAKBGHBOKIG_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0xCB40)
#define EAKBGHBOKIG_DICPLJJBAGA_OFFSET UNITYSDK_OFFSET(0x3F322C0)
#define EAKBGHBOKIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define EAKBGHBOKIG_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1E9A5AF0)
#define EAKBGHBOKIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F32290)
#define EAKBGHBOKIG_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1E9A59E0)
#define EAKBGHBOKIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define EAKBGHBOKIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define EAKBGHBOKIG_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define EAKBGHBOKIG_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define EAKBGHBOKIG_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define EAKBGHBOKIG_JNCNGPMMDAG_OFFSET UNITYSDK_OFFSET(0x3F322A0)
#define EAKBGHBOKIG_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1E9A5CD0)

inline static constexpr unsigned int EAKBGHBOKIG_TypeDefinitionIndex = 10682;

	struct alignas(8) EAKBGHBOKIG
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + EAKBGHBOKIG_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKBGHBOKIG_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKBGHBOKIG_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKBGHBOKIG_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKBGHBOKIG_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::EAKBGHBOKIG a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::EAKBGHBOKIG, ::System::Object*))((::PBYTE)hIl2Cpp + EAKBGHBOKIG_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::EAKBGHBOKIG a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::EAKBGHBOKIG, ::System::Object*))((::PBYTE)hIl2Cpp + EAKBGHBOKIG_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::EAKBGHBOKIG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EAKBGHBOKIG))((::PBYTE)hIl2Cpp + EAKBGHBOKIG_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAKBGHBOKIG_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKBGHBOKIG_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::EAKBGHBOKIG a1)
		{
			return ((::System::Boolean(*)(::EAKBGHBOKIG))((::PBYTE)hIl2Cpp + EAKBGHBOKIG_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::EAKBGHBOKIG a1)
		{
			return ((::System::Boolean(*)(::EAKBGHBOKIG))((::PBYTE)hIl2Cpp + EAKBGHBOKIG_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::JPCONPIKIEK JNCNGPMMDAG()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKBGHBOKIG_JNCNGPMMDAG_OFFSET))(this);
		}

		::System::Void DICPLJJBAGA(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + EAKBGHBOKIG_DICPLJJBAGA_OFFSET))(this, a1);
		}

		::System::Int32 BIHIPBDGIOJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKBGHBOKIG_BIHIPBDGIOJ_OFFSET))(this);
		}

		::System::Void CEOFPCKLOAD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EAKBGHBOKIG_CEOFPCKLOAD_OFFSET))(this, a1);
		}

	};
