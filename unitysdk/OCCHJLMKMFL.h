#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Random; }

#define OCCHJLMKMFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94D560)
#define OCCHJLMKMFL_GET_GEN_OFFSET UNITYSDK_OFFSET(0x1D94D520)
#define OCCHJLMKMFL_GET_SEED_OFFSET UNITYSDK_OFFSET(0x1D94D540)
#define OCCHJLMKMFL_PGHNKCGHBGP_OFFSET UNITYSDK_OFFSET(0x1D94D480)
#define OCCHJLMKMFL_SET_GEN_OFFSET UNITYSDK_OFFSET(0x1D94D530)
#define OCCHJLMKMFL_SET_SEED_OFFSET UNITYSDK_OFFSET(0x1D94D550)

inline static constexpr unsigned int OCCHJLMKMFL_TypeDefinitionIndex = 37932;

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
