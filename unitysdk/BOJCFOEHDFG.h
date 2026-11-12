#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOJCFOEHDFG;
class LFGNEHOMBLJ;
namespace System { class Object; }

#define BOJCFOEHDFG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC773100)
#define BOJCFOEHDFG_CTOR_OFFSET UNITYSDK_OFFSET(0xC773400)
#define BOJCFOEHDFG_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0xC7736D0)
#define BOJCFOEHDFG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xC7735B0)
#define BOJCFOEHDFG_EQUALS_OFFSET UNITYSDK_OFFSET(0xC773410)
#define BOJCFOEHDFG_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0xC7734D0)
#define BOJCFOEHDFG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC773640)
#define BOJCFOEHDFG_GET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xC7737F0)
#define BOJCFOEHDFG_GET_CURRENTBP_OFFSET UNITYSDK_OFFSET(0xC7737B0)
#define BOJCFOEHDFG_GET_DIRTYBPCOUNT_OFFSET UNITYSDK_OFFSET(0xC773810)
#define BOJCFOEHDFG_GET_NEGATIVEBPDISPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xC773830)
#define BOJCFOEHDFG_GET_POSITIVEBPDISPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xC7737D0)
#define BOJCFOEHDFG_JDDOLBNGDAO_OFFSET UNITYSDK_OFFSET(0xC773360)
#define BOJCFOEHDFG_OBOJEIPJBBJ_OFFSET UNITYSDK_OFFSET(0xC7732D0)
#define BOJCFOEHDFG_SET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xC773800)
#define BOJCFOEHDFG_SET_CURRENTBP_OFFSET UNITYSDK_OFFSET(0xC7737C0)
#define BOJCFOEHDFG_SET_DIRTYBPCOUNT_OFFSET UNITYSDK_OFFSET(0xC773820)
#define BOJCFOEHDFG_SET_NEGATIVEBPDISPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xC773840)
#define BOJCFOEHDFG_SET_POSITIVEBPDISPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xC7737E0)

inline static constexpr unsigned int BOJCFOEHDFG_TypeDefinitionIndex = 73393;

	class BOJCFOEHDFG : public ::System::Object
	{
	public:
		::System::Int32 _PositiveBPDisplayCount_k__BackingField; // 0x10
		::System::Int32 _DirtyBPCount_k__BackingField; // 0x14
		::System::Int32 _CurrentBP_k__BackingField; // 0x18
		::System::Int32 _ChangeValue_k__BackingField; // 0x1C
		::System::Int32 _NegativeBPDisplayCount_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_CTOR_OFFSET))(this);
		}

		static ::BOJCFOEHDFG* BPLPBPMEODA(::LFGNEHOMBLJ* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::BOJCFOEHDFG*(*)(::LFGNEHOMBLJ*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		static ::BOJCFOEHDFG* JDDOLBNGDAO()
		{
			return ((::BOJCFOEHDFG*(*)())((::PBYTE)hIl2Cpp + BOJCFOEHDFG_JDDOLBNGDAO_OFFSET))();
		}

		static ::BOJCFOEHDFG* OBOJEIPJBBJ(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::BOJCFOEHDFG*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_OBOJEIPJBBJ_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Boolean Equals(::BOJCFOEHDFG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOJCFOEHDFG*))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::BOJCFOEHDFG* a1, ::BOJCFOEHDFG* a2)
		{
			return ((::System::Boolean(*)(::BOJCFOEHDFG*, ::BOJCFOEHDFG*))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::BOJCFOEHDFG* a1, ::BOJCFOEHDFG* a2)
		{
			return ((::System::Boolean(*)(::BOJCFOEHDFG*, ::BOJCFOEHDFG*))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

		::System::Int32 get_CurrentBP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_GET_CURRENTBP_OFFSET))(this);
		}

		::System::Void set_CurrentBP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_SET_CURRENTBP_OFFSET))(this, a1);
		}

		::System::Int32 get_PositiveBPDisplayCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_GET_POSITIVEBPDISPLAYCOUNT_OFFSET))(this);
		}

		::System::Void set_PositiveBPDisplayCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_SET_POSITIVEBPDISPLAYCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_ChangeValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_GET_CHANGEVALUE_OFFSET))(this);
		}

		::System::Void set_ChangeValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_SET_CHANGEVALUE_OFFSET))(this, a1);
		}

		::System::Int32 get_DirtyBPCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_GET_DIRTYBPCOUNT_OFFSET))(this);
		}

		::System::Void set_DirtyBPCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_SET_DIRTYBPCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_NegativeBPDisplayCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_GET_NEGATIVEBPDISPLAYCOUNT_OFFSET))(this);
		}

		::System::Void set_NegativeBPDisplayCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOJCFOEHDFG_SET_NEGATIVEBPDISPLAYCOUNT_OFFSET))(this, a1);
		}

	};
