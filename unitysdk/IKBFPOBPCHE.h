#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PKHNHEBKPPI.h"
namespace System { class Object; }
namespace System { class String; }

#define IKBFPOBPCHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x16475310)
#define IKBFPOBPCHE_CLEAR_OFFSET UNITYSDK_OFFSET(0x16474DA0)
#define IKBFPOBPCHE_CTOR_OFFSET UNITYSDK_OFFSET(0x16475300)
#define IKBFPOBPCHE_DDCENCNBHDN_OFFSET UNITYSDK_OFFSET(0x16474DF0)
#define IKBFPOBPCHE_GET_PRECISION_OFFSET UNITYSDK_OFFSET(0x164752E0)
#define IKBFPOBPCHE_IHCGLGFILCH_OFFSET UNITYSDK_OFFSET(0x16475250)
#define IKBFPOBPCHE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16474D00)
#define IKBFPOBPCHE_PBBFABLNIGC_OFFSET UNITYSDK_OFFSET(0x164750E0)
#define IKBFPOBPCHE_SET_PRECISION_OFFSET UNITYSDK_OFFSET(0x164752F0)

inline static constexpr unsigned int IKBFPOBPCHE_TypeDefinitionIndex = 73378;

	class IKBFPOBPCHE : public ::System::Object
	{
	public:
		::System::Int32 _Precision_k__BackingField; // 0x10
		static ::Il2CppArray<::System::String*>** StaticGet_AKGDJAPIODG()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IKBFPOBPCHE")->GetStaticField(0x639A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKBFPOBPCHE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKBFPOBPCHE_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IKBFPOBPCHE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKBFPOBPCHE_CLEAR_OFFSET))(this);
		}

		::System::String* DDCENCNBHDN(::System::Object* a1, ::PKHNHEBKPPI a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::PKHNHEBKPPI))((::PBYTE)hIl2Cpp + IKBFPOBPCHE_DDCENCNBHDN_OFFSET))(this, a1, a2);
		}

		static ::System::String* PBBFABLNIGC(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IKBFPOBPCHE_PBBFABLNIGC_OFFSET))(a1);
		}

		static ::System::String* IHCGLGFILCH(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IKBFPOBPCHE_IHCGLGFILCH_OFFSET))(a1);
		}

		::System::Int32 get_Precision()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKBFPOBPCHE_GET_PRECISION_OFFSET))(this);
		}

		::System::Void set_Precision(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IKBFPOBPCHE_SET_PRECISION_OFFSET))(this, a1);
		}

	};
