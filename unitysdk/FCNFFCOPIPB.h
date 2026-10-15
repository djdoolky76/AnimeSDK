#pragma once
#include "unitysdk/unitysdk.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define FCNFFCOPIPB_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CDD6DA0)
#define FCNFFCOPIPB_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define FCNFFCOPIPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define FCNFFCOPIPB_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CDD6B40)
#define FCNFFCOPIPB_EMKNKEFOJMN_OFFSET UNITYSDK_OFFSET(0x3C38340)
#define FCNFFCOPIPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C38320)
#define FCNFFCOPIPB_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CDD6A50)
#define FCNFFCOPIPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define FCNFFCOPIPB_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define FCNFFCOPIPB_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define FCNFFCOPIPB_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define FCNFFCOPIPB_GHIOEPIAPDL_OFFSET UNITYSDK_OFFSET(0x3C38330)
#define FCNFFCOPIPB_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define FCNFFCOPIPB_JPEKALFMJFO_OFFSET UNITYSDK_OFFSET(0x3C38390)
#define FCNFFCOPIPB_LLABACALCON_OFFSET UNITYSDK_OFFSET(0x3C383A0)
#define FCNFFCOPIPB_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CDD6E50)

inline static constexpr unsigned int FCNFFCOPIPB_TypeDefinitionIndex = 10661;

	struct alignas(8) FCNFFCOPIPB
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + FCNFFCOPIPB_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNFFCOPIPB_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNFFCOPIPB_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNFFCOPIPB_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNFFCOPIPB_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::FCNFFCOPIPB a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::FCNFFCOPIPB, ::System::Object*))((::PBYTE)hIl2Cpp + FCNFFCOPIPB_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::FCNFFCOPIPB a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::FCNFFCOPIPB, ::System::Object*))((::PBYTE)hIl2Cpp + FCNFFCOPIPB_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::FCNFFCOPIPB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCNFFCOPIPB))((::PBYTE)hIl2Cpp + FCNFFCOPIPB_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCNFFCOPIPB_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNFFCOPIPB_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::FCNFFCOPIPB a1)
		{
			return ((::System::Boolean(*)(::FCNFFCOPIPB))((::PBYTE)hIl2Cpp + FCNFFCOPIPB_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::FCNFFCOPIPB a1)
		{
			return ((::System::Boolean(*)(::FCNFFCOPIPB))((::PBYTE)hIl2Cpp + FCNFFCOPIPB_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::System::Boolean GHIOEPIAPDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNFFCOPIPB_GHIOEPIAPDL_OFFSET))(this);
		}

		::System::Void EMKNKEFOJMN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCNFFCOPIPB_EMKNKEFOJMN_OFFSET))(this, a1);
		}

		::System::Int32 JPEKALFMJFO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNFFCOPIPB_JPEKALFMJFO_OFFSET))(this);
		}

		::System::Void LLABACALCON(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCNFFCOPIPB_LLABACALCON_OFFSET))(this, a1);
		}

	};
