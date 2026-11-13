#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFBADOAGDHH.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/CaseBoardAvatarTextMode.h"
class HFBADOAGDHH;
class PMHEBAFMEEG;
namespace System { class String; }

#define PMHEBAFMEEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x188A22D0)
#define PMHEBAFMEEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x188A1D50)
#define PMHEBAFMEEG_CTOR_OFFSET UNITYSDK_OFFSET(0x188A1CE0)
#define PMHEBAFMEEG_EDGEMJJMKJM_OFFSET UNITYSDK_OFFSET(0x188A2190)
#define PMHEBAFMEEG_GET_AGILITYLEVEL_OFFSET UNITYSDK_OFFSET(0x188A1F30)
#define PMHEBAFMEEG_GET_ENDURANCELEVEL_OFFSET UNITYSDK_OFFSET(0x188A1F10)
#define PMHEBAFMEEG_GET_INVISIBLE_OFFSET UNITYSDK_OFFSET(0x188A1C80)
#define PMHEBAFMEEG_GET_LUCKLEVEL_OFFSET UNITYSDK_OFFSET(0x188A1F70)
#define PMHEBAFMEEG_GET_MANALEVEL_OFFSET UNITYSDK_OFFSET(0x188A1F50)
#define PMHEBAFMEEG_GET_STRENGTHLEVEL_OFFSET UNITYSDK_OFFSET(0x188A1EF0)
#define PMHEBAFMEEG_GET_UNKNOWN_OFFSET UNITYSDK_OFFSET(0x188A1C20)
#define PMHEBAFMEEG_LELOEPHMPLN_OFFSET UNITYSDK_OFFSET(0x188A2010)
#define PMHEBAFMEEG_MIJDKFNMNEO_OFFSET UNITYSDK_OFFSET(0x188A1F90)
#define PMHEBAFMEEG_NCICIBKODJD_OFFSET UNITYSDK_OFFSET(0x188A1DE0)
#define PMHEBAFMEEG_NFOHLCEGJJO_OFFSET UNITYSDK_OFFSET(0x188A2180)
#define PMHEBAFMEEG_SET_AGILITYLEVEL_OFFSET UNITYSDK_OFFSET(0x188A1F40)
#define PMHEBAFMEEG_SET_ENDURANCELEVEL_OFFSET UNITYSDK_OFFSET(0x188A1F20)
#define PMHEBAFMEEG_SET_LUCKLEVEL_OFFSET UNITYSDK_OFFSET(0x188A1F80)
#define PMHEBAFMEEG_SET_MANALEVEL_OFFSET UNITYSDK_OFFSET(0x188A1F60)
#define PMHEBAFMEEG_SET_STRENGTHLEVEL_OFFSET UNITYSDK_OFFSET(0x188A1F00)

inline static constexpr unsigned int PMHEBAFMEEG_TypeDefinitionIndex = 83555;

	class PMHEBAFMEEG : public ::HFBADOAGDHH
	{
	public:
		::System::String* _StrengthLevel_k__BackingField; // 0x20
		::System::String* ECNBBDHAEFO; // 0x28
		::System::String* _EnduranceLevel_k__BackingField; // 0x30
		::System::String* _AgilityLevel_k__BackingField; // 0x38
		::System::String* _LuckLevel_k__BackingField; // 0x40
		::System::String* _ManaLevel_k__BackingField; // 0x48
		static ::PMHEBAFMEEG** StaticGet__Unknown_k__BackingField()
		{
			return (::PMHEBAFMEEG**)UnitySDK::FromName("", "PMHEBAFMEEG")->GetStaticField(0x6F4E0);
		}

		static ::PMHEBAFMEEG** StaticGet__Invisible_k__BackingField()
		{
			return (::PMHEBAFMEEG**)UnitySDK::FromName("", "PMHEBAFMEEG")->GetStaticField(0x6F4E8);
		}

		// static const ::System::String* CFDJLOAJIBI; // 0x0
		::System::Void _ctor(::HFBADOAGDHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFBADOAGDHH*))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::PMHEBAFMEEG* a1, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::PMHEBAFMEEG*, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMHEBAFMEEG_CCTOR_OFFSET))();
		}

		static ::PMHEBAFMEEG* get_Unknown()
		{
			return ((::PMHEBAFMEEG*(*)())((::PBYTE)hIl2Cpp + PMHEBAFMEEG_GET_UNKNOWN_OFFSET))();
		}

		static ::PMHEBAFMEEG* get_Invisible()
		{
			return ((::PMHEBAFMEEG*(*)())((::PBYTE)hIl2Cpp + PMHEBAFMEEG_GET_INVISIBLE_OFFSET))();
		}

		::PMHEBAFMEEG* NCICIBKODJD(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode a1)
		{
			return ((::PMHEBAFMEEG*(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_NCICIBKODJD_OFFSET))(this, a1);
		}

		::System::String* get_StrengthLevel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_GET_STRENGTHLEVEL_OFFSET))(this);
		}

		::System::Void set_StrengthLevel(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_SET_STRENGTHLEVEL_OFFSET))(this, a1);
		}

		::System::String* get_EnduranceLevel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_GET_ENDURANCELEVEL_OFFSET))(this);
		}

		::System::Void set_EnduranceLevel(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_SET_ENDURANCELEVEL_OFFSET))(this, a1);
		}

		::System::String* get_AgilityLevel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_GET_AGILITYLEVEL_OFFSET))(this);
		}

		::System::Void set_AgilityLevel(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_SET_AGILITYLEVEL_OFFSET))(this, a1);
		}

		::System::String* get_ManaLevel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_GET_MANALEVEL_OFFSET))(this);
		}

		::System::Void set_ManaLevel(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_SET_MANALEVEL_OFFSET))(this, a1);
		}

		::System::String* get_LuckLevel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_GET_LUCKLEVEL_OFFSET))(this);
		}

		::System::Void set_LuckLevel(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_SET_LUCKLEVEL_OFFSET))(this, a1);
		}

		::System::String* MIJDKFNMNEO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_MIJDKFNMNEO_OFFSET))(this);
		}

		::System::Void NFOHLCEGJJO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_NFOHLCEGJJO_OFFSET))(this, a1);
		}

		::System::Boolean LELOEPHMPLN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_LELOEPHMPLN_OFFSET))(this);
		}

		::System::Boolean EDGEMJJMKJM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHEBAFMEEG_EDGEMJJMKJM_OFFSET))(this);
		}

	};
