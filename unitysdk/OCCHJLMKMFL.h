#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Random; }

#define OCCHJLMKMFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7CBCD0)
#define OCCHJLMKMFL_GET_GEN_OFFSET UNITYSDK_OFFSET(0x1C7CBC90)
#define OCCHJLMKMFL_GET_SEED_OFFSET UNITYSDK_OFFSET(0x1C7CBCB0)
#define OCCHJLMKMFL_PGHNKCGHBGP_OFFSET UNITYSDK_OFFSET(0x1C7CBBF0)
#define OCCHJLMKMFL_SET_GEN_OFFSET UNITYSDK_OFFSET(0x1C7CBCA0)
#define OCCHJLMKMFL_SET_SEED_OFFSET UNITYSDK_OFFSET(0x1C7CBCC0)

	class OCCHJLMKMFL : public ::System::Object
	{
	public:
		::System::Random* _Gen_k__BackingField; // 0x10
		::System::Int32 _Seed_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCHJLMKMFL_CTOR_OFFSET))(this);
		}

		::System::Void PGHNKCGHBGP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCCHJLMKMFL_PGHNKCGHBGP_OFFSET))(this, a1);
		}

		::System::Random* get_Gen()
		{
			return ((::System::Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCHJLMKMFL_GET_GEN_OFFSET))(this);
		}

		::System::Void set_Gen(::System::Random* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Random*))((::PBYTE)hIl2Cpp + OCCHJLMKMFL_SET_GEN_OFFSET))(this, a1);
		}

		::System::Int32 get_Seed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCHJLMKMFL_GET_SEED_OFFSET))(this);
		}

		::System::Void set_Seed(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCCHJLMKMFL_SET_SEED_OFFSET))(this, a1);
		}

	};
