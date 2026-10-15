#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PKHNHEBKPPI.h"
namespace System { class Object; }
namespace System { class String; }

#define MPBEEEJDIJF_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA33280)
#define MPBEEEJDIJF_CLEAR_OFFSET UNITYSDK_OFFSET(0xBA324F0)
#define MPBEEEJDIJF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA33270)
#define MPBEEEJDIJF_DDCENCNBHDN_OFFSET UNITYSDK_OFFSET(0xBA32540)
#define MPBEEEJDIJF_GET_PRECISION_OFFSET UNITYSDK_OFFSET(0xBA33250)
#define MPBEEEJDIJF_IHCGLGFILCH_OFFSET UNITYSDK_OFFSET(0xBA331B0)
#define MPBEEEJDIJF_JHEMIKNFEFK_OFFSET UNITYSDK_OFFSET(0xBA32B50)
#define MPBEEEJDIJF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBA32450)
#define MPBEEEJDIJF_MMBOBIJPFCF_OFFSET UNITYSDK_OFFSET(0xBA32780)
#define MPBEEEJDIJF_PBBFABLNIGC_OFFSET UNITYSDK_OFFSET(0xBA33040)
#define MPBEEEJDIJF_SET_PRECISION_OFFSET UNITYSDK_OFFSET(0xBA33260)

inline static constexpr unsigned int MPBEEEJDIJF_TypeDefinitionIndex = 73387;

	class MPBEEEJDIJF : public ::System::Object
	{
	public:
		::System::Int32 _Precision_k__BackingField; // 0x10
		static ::Il2CppArray<::System::String*>** StaticGet_AKGDJAPIODG()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MPBEEEJDIJF")->GetStaticField(0x17B40);
		}

		// static const ::System::Object PIHPADHCDGM; // 0x0
		// static const ::System::Object GLGNDNODFCM; // 0x0
		// static const ::System::Object CLFGGFOALGB; // 0x0
		// static const ::System::Object PPCFAKLGFNM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPBEEEJDIJF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPBEEEJDIJF_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MPBEEEJDIJF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPBEEEJDIJF_CLEAR_OFFSET))(this);
		}

		::System::String* DDCENCNBHDN(::System::Object* a1, ::PKHNHEBKPPI a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::PKHNHEBKPPI))((::PBYTE)hIl2Cpp + MPBEEEJDIJF_DDCENCNBHDN_OFFSET))(this, a1, a2);
		}

		::System::String* MMBOBIJPFCF(::System::Object* a1, ::PKHNHEBKPPI a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::PKHNHEBKPPI))((::PBYTE)hIl2Cpp + MPBEEEJDIJF_MMBOBIJPFCF_OFFSET))(this, a1, a2);
		}

		::System::String* JHEMIKNFEFK(::System::Object* a1, ::PKHNHEBKPPI a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::PKHNHEBKPPI))((::PBYTE)hIl2Cpp + MPBEEEJDIJF_JHEMIKNFEFK_OFFSET))(this, a1, a2);
		}

		static ::System::String* PBBFABLNIGC(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MPBEEEJDIJF_PBBFABLNIGC_OFFSET))(a1);
		}

		static ::System::String* IHCGLGFILCH(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MPBEEEJDIJF_IHCGLGFILCH_OFFSET))(a1);
		}

		::System::Int32 get_Precision()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPBEEEJDIJF_GET_PRECISION_OFFSET))(this);
		}

		::System::Void set_Precision(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MPBEEEJDIJF_SET_PRECISION_OFFSET))(this, a1);
		}

	};
