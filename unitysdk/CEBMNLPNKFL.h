#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicTypeExtra.h"
#include "unitysdk/System/Object.h"
class CEBMNLPNKFL;
namespace System { class String; }

#define CEBMNLPNKFL_CTOR_OFFSET UNITYSDK_OFFSET(0xD0E65A0)
#define CEBMNLPNKFL_DLJKPOAAKIE_OFFSET UNITYSDK_OFFSET(0xD0E6480)
#define CEBMNLPNKFL_FIDCKJDKLHC_OFFSET UNITYSDK_OFFSET(0xD0E6490)
#define CEBMNLPNKFL_GET_ANIMATORSTATEHASH_OFFSET UNITYSDK_OFFSET(0xD0E6580)
#define CEBMNLPNKFL_GET_ISFIXEDTRANSITION_OFFSET UNITYSDK_OFFSET(0xD0E6560)
#define CEBMNLPNKFL_IGMDIBHBIAJ_OFFSET UNITYSDK_OFFSET(0xD0E6500)
#define CEBMNLPNKFL_MHCDLONMIDN_OFFSET UNITYSDK_OFFSET(0xD0E64F0)
#define CEBMNLPNKFL_MNPJPHCGNDI_OFFSET UNITYSDK_OFFSET(0xD0E63B0)
#define CEBMNLPNKFL_ODHANKKDHHB_OFFSET UNITYSDK_OFFSET(0xD0E63C0)
#define CEBMNLPNKFL_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xD0E6310)
#define CEBMNLPNKFL_SET_ANIMATORSTATEHASH_OFFSET UNITYSDK_OFFSET(0xD0E6590)
#define CEBMNLPNKFL_SET_ISFIXEDTRANSITION_OFFSET UNITYSDK_OFFSET(0xD0E6570)

inline static constexpr unsigned int CEBMNLPNKFL_TypeDefinitionIndex = 57143;

	class CEBMNLPNKFL : public ::System::Object
	{
	public:
		::System::String* BLKCDLBENFP; // 0x10
		::Il2CppArray<::RPG::GameCore::AnimStateLogicTypeExtra>* MCJBGFCJFDF; // 0x18
		::RPG::GameCore::AnimStateLogicTypeExtra HBOPCMCGHAA; // 0x20
		::System::UInt32 AECGNOEOCFC; // 0x24
		::System::Single EJOAJDOPCHE; // 0x28
		::System::Int32 BIKLAFLEIOC; // 0x2C
		::RPG::GameCore::AnimStateLogicType HEOJLHCIINP; // 0x30
		::System::Single FMHMAHCNDGB; // 0x34
		::System::Single ADPMMNEFDPA; // 0x38
		::System::Single NNNAGHMNFKB; // 0x3C
		::System::Int32 _AnimatorStateHash_k__BackingField; // 0x40
		::System::Boolean DJPDHADCKLO; // 0x44
		::System::Boolean _IsFixedTransition_k__BackingField; // 0x45
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBMNLPNKFL_CTOR_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::CEBMNLPNKFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEBMNLPNKFL*))((::PBYTE)hIl2Cpp + CEBMNLPNKFL_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::String* MNPJPHCGNDI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBMNLPNKFL_MNPJPHCGNDI_OFFSET))(this);
		}

		::System::Void ODHANKKDHHB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CEBMNLPNKFL_ODHANKKDHHB_OFFSET))(this, a1);
		}

		::System::Single DLJKPOAAKIE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBMNLPNKFL_DLJKPOAAKIE_OFFSET))(this);
		}

		::System::Void FIDCKJDKLHC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CEBMNLPNKFL_FIDCKJDKLHC_OFFSET))(this, a1);
		}

		::System::Single MHCDLONMIDN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBMNLPNKFL_MHCDLONMIDN_OFFSET))(this);
		}

		::System::Void IGMDIBHBIAJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CEBMNLPNKFL_IGMDIBHBIAJ_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFixedTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBMNLPNKFL_GET_ISFIXEDTRANSITION_OFFSET))(this);
		}

		::System::Void set_IsFixedTransition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CEBMNLPNKFL_SET_ISFIXEDTRANSITION_OFFSET))(this, a1);
		}

		::System::Int32 get_AnimatorStateHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBMNLPNKFL_GET_ANIMATORSTATEHASH_OFFSET))(this);
		}

		::System::Void set_AnimatorStateHash(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CEBMNLPNKFL_SET_ANIMATORSTATEHASH_OFFSET))(this, a1);
		}

	};
