#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/StackingType.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJLDFCNNNHD_AHJLMLOADFE_OFFSET UNITYSDK_OFFSET(0x1C9FCBC0)
#define DJLDFCNNNHD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9FC700)
#define DJLDFCNNNHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9FD210)
#define DJLDFCNNNHD_FGHLAGJJMKC_OFFSET UNITYSDK_OFFSET(0x1C9FC7B0)
#define DJLDFCNNNHD_FLILIHPBIDH_OFFSET UNITYSDK_OFFSET(0x1C9FCAA0)
#define DJLDFCNNNHD_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C9FD1F0)
#define DJLDFCNNNHD_JJCLOOKDBGN_OFFSET UNITYSDK_OFFSET(0x1C9FCC40)
#define DJLDFCNNNHD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C9FC540)
#define DJLDFCNNNHD_LJLDEDDNALJ_OFFSET UNITYSDK_OFFSET(0x1C9FCDB0)
#define DJLDFCNNNHD_OGECFMOFGNB_OFFSET UNITYSDK_OFFSET(0x1C9FD080)
#define DJLDFCNNNHD_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C9FC620)
#define DJLDFCNNNHD_ONPCKAGJGON_OFFSET UNITYSDK_OFFSET(0x1C9FCA20)
#define DJLDFCNNNHD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C9FC770)
#define DJLDFCNNNHD_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C9FD200)

inline static constexpr unsigned int DJLDFCNNNHD_TypeDefinitionIndex = 42132;

	class DJLDFCNNNHD : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::Single>* MBNNBJKFLIL; // 0x10
		::RPG::PoolList_1<::System::Boolean>* ILLGNFNKKME; // 0x18
		::System::Single POJFJHOJEKI; // 0x20
		::System::Single NDOGICGCDIP; // 0x24
		::System::Single BFLNNOEKIGE; // 0x28
		::System::Single _Value_k__BackingField; // 0x2C
		::System::Int32 JMCEABGIEGA; // 0x30
		::RPG::Client::LittleGame::StackingType BMAIKHNKEJD; // 0x34
		::System::Int32 COEMCOBPMKD; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLDFCNNNHD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::LittleGame::StackingType a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::StackingType, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DJLDFCNNNHD_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLDFCNNNHD_ONALLOC_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLDFCNNNHD_CLEAR_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLDFCNNNHD_ONRECYCLE_OFFSET))(this);
		}

		::System::Int32 FGHLAGJJMKC(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DJLDFCNNNHD_FGHLAGJJMKC_OFFSET))(this, a1);
		}

		::System::Void FLILIHPBIDH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJLDFCNNNHD_FLILIHPBIDH_OFFSET))(this, a1);
		}

		::System::Single AHJLMLOADFE(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJLDFCNNNHD_AHJLMLOADFE_OFFSET))(this, a1);
		}

		::System::Void JJCLOOKDBGN(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DJLDFCNNNHD_JJCLOOKDBGN_OFFSET))(this, a1, a2);
		}

		::System::Single LJLDEDDNALJ(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DJLDFCNNNHD_LJLDEDDNALJ_OFFSET))(this, a1);
		}

		::System::Void ONPCKAGJGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLDFCNNNHD_ONPCKAGJGON_OFFSET))(this);
		}

		::System::Single OGECFMOFGNB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLDFCNNNHD_OGECFMOFGNB_OFFSET))(this);
		}

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLDFCNNNHD_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DJLDFCNNNHD_SET_VALUE_OFFSET))(this, a1);
		}

	};
