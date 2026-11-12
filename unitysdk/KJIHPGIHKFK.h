#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPCONPIKIEK.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define KJIHPGIHKFK_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1E28A240)
#define KJIHPGIHKFK_BIHIPBDGIOJ_OFFSET UNITYSDK_OFFSET(0x3E8AC90)
#define KJIHPGIHKFK_CEOFPCKLOAD_OFFSET UNITYSDK_OFFSET(0x3E8ACA0)
#define KJIHPGIHKFK_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x31619E0)
#define KJIHPGIHKFK_DICPLJJBAGA_OFFSET UNITYSDK_OFFSET(0x3E8AC40)
#define KJIHPGIHKFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3E7C580)
#define KJIHPGIHKFK_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1E28A110)
#define KJIHPGIHKFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E8AC10)
#define KJIHPGIHKFK_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1E28A000)
#define KJIHPGIHKFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x318C7A0)
#define KJIHPGIHKFK_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x318C5A0)
#define KJIHPGIHKFK_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define KJIHPGIHKFK_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define KJIHPGIHKFK_INIT_OFFSET UNITYSDK_OFFSET(0x18D10)
#define KJIHPGIHKFK_JNCNGPMMDAG_OFFSET UNITYSDK_OFFSET(0x3E8AC20)
#define KJIHPGIHKFK_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1E28A2F0)

inline static constexpr unsigned int KJIHPGIHKFK_TypeDefinitionIndex = 10681;

	struct alignas(8) KJIHPGIHKFK
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + KJIHPGIHKFK_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIHPGIHKFK_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIHPGIHKFK_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIHPGIHKFK_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIHPGIHKFK_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::KJIHPGIHKFK a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::KJIHPGIHKFK, ::System::Object*))((::PBYTE)hIl2Cpp + KJIHPGIHKFK_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::KJIHPGIHKFK a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::KJIHPGIHKFK, ::System::Object*))((::PBYTE)hIl2Cpp + KJIHPGIHKFK_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::KJIHPGIHKFK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJIHPGIHKFK))((::PBYTE)hIl2Cpp + KJIHPGIHKFK_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJIHPGIHKFK_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIHPGIHKFK_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::KJIHPGIHKFK a1)
		{
			return ((::System::Boolean(*)(::KJIHPGIHKFK))((::PBYTE)hIl2Cpp + KJIHPGIHKFK_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::KJIHPGIHKFK a1)
		{
			return ((::System::Boolean(*)(::KJIHPGIHKFK))((::PBYTE)hIl2Cpp + KJIHPGIHKFK_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::JPCONPIKIEK JNCNGPMMDAG()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIHPGIHKFK_JNCNGPMMDAG_OFFSET))(this);
		}

		::System::Void DICPLJJBAGA(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + KJIHPGIHKFK_DICPLJJBAGA_OFFSET))(this, a1);
		}

		::System::Int32 BIHIPBDGIOJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIHPGIHKFK_BIHIPBDGIOJ_OFFSET))(this);
		}

		::System::Void CEOFPCKLOAD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KJIHPGIHKFK_CEOFPCKLOAD_OFFSET))(this, a1);
		}

	};
