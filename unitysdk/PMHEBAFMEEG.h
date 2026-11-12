#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFBADOAGDHH.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/CaseBoardAvatarTextMode.h"
class HFBADOAGDHH;
class PMHEBAFMEEG;
namespace System { class String; }

#define PMHEBAFMEEG_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC4BE70)
#define PMHEBAFMEEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0xCC4B8F0)
#define PMHEBAFMEEG_CTOR_OFFSET UNITYSDK_OFFSET(0xCC4B880)
#define PMHEBAFMEEG_EDGEMJJMKJM_OFFSET UNITYSDK_OFFSET(0xCC4BD30)
#define PMHEBAFMEEG_GET_AGILITYLEVEL_OFFSET UNITYSDK_OFFSET(0xCC4BAD0)
#define PMHEBAFMEEG_GET_ENDURANCELEVEL_OFFSET UNITYSDK_OFFSET(0xCC4BAB0)
#define PMHEBAFMEEG_GET_INVISIBLE_OFFSET UNITYSDK_OFFSET(0xCC4B820)
#define PMHEBAFMEEG_GET_LUCKLEVEL_OFFSET UNITYSDK_OFFSET(0xCC4BB10)
#define PMHEBAFMEEG_GET_MANALEVEL_OFFSET UNITYSDK_OFFSET(0xCC4BAF0)
#define PMHEBAFMEEG_GET_STRENGTHLEVEL_OFFSET UNITYSDK_OFFSET(0xCC4BA90)
#define PMHEBAFMEEG_GET_UNKNOWN_OFFSET UNITYSDK_OFFSET(0xCC4B7C0)
#define PMHEBAFMEEG_LELOEPHMPLN_OFFSET UNITYSDK_OFFSET(0xCC4BBB0)
#define PMHEBAFMEEG_MIJDKFNMNEO_OFFSET UNITYSDK_OFFSET(0xCC4BB30)
#define PMHEBAFMEEG_NCICIBKODJD_OFFSET UNITYSDK_OFFSET(0xCC4B980)
#define PMHEBAFMEEG_NFOHLCEGJJO_OFFSET UNITYSDK_OFFSET(0xCC4BD20)
#define PMHEBAFMEEG_SET_AGILITYLEVEL_OFFSET UNITYSDK_OFFSET(0xCC4BAE0)
#define PMHEBAFMEEG_SET_ENDURANCELEVEL_OFFSET UNITYSDK_OFFSET(0xCC4BAC0)
#define PMHEBAFMEEG_SET_LUCKLEVEL_OFFSET UNITYSDK_OFFSET(0xCC4BB20)
#define PMHEBAFMEEG_SET_MANALEVEL_OFFSET UNITYSDK_OFFSET(0xCC4BB00)
#define PMHEBAFMEEG_SET_STRENGTHLEVEL_OFFSET UNITYSDK_OFFSET(0xCC4BAA0)

inline static constexpr unsigned int PMHEBAFMEEG_TypeDefinitionIndex = 83556;

	class PMHEBAFMEEG : public ::HFBADOAGDHH
	{
	public:
		::System::String* _EnduranceLevel_k__BackingField; // 0x20
		::System::String* ECNBBDHAEFO; // 0x28
		::System::String* _StrengthLevel_k__BackingField; // 0x30
		::System::String* _AgilityLevel_k__BackingField; // 0x38
		::System::String* _LuckLevel_k__BackingField; // 0x40
		::System::String* _ManaLevel_k__BackingField; // 0x48
		static ::PMHEBAFMEEG** StaticGet__Unknown_k__BackingField()
		{
			return (::PMHEBAFMEEG**)UnitySDK::FromName("", "PMHEBAFMEEG")->GetStaticField(0x689D0);
		}

		static ::PMHEBAFMEEG** StaticGet__Invisible_k__BackingField()
		{
			return (::PMHEBAFMEEG**)UnitySDK::FromName("", "PMHEBAFMEEG")->GetStaticField(0x689D8);
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
