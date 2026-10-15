#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicTypeExtra.h"
#include "unitysdk/System/Object.h"
class CEBMNLPNKFL;
namespace System { class String; }

#define CEBMNLPNKFL_CTOR_OFFSET UNITYSDK_OFFSET(0xC77C010)
#define CEBMNLPNKFL_DLJKPOAAKIE_OFFSET UNITYSDK_OFFSET(0xC77BEF0)
#define CEBMNLPNKFL_FIDCKJDKLHC_OFFSET UNITYSDK_OFFSET(0xC77BF00)
#define CEBMNLPNKFL_GET_ANIMATORSTATEHASH_OFFSET UNITYSDK_OFFSET(0xC77BFF0)
#define CEBMNLPNKFL_GET_ISFIXEDTRANSITION_OFFSET UNITYSDK_OFFSET(0xC77BFD0)
#define CEBMNLPNKFL_IGMDIBHBIAJ_OFFSET UNITYSDK_OFFSET(0xC77BF70)
#define CEBMNLPNKFL_MHCDLONMIDN_OFFSET UNITYSDK_OFFSET(0xC77BF60)
#define CEBMNLPNKFL_MNPJPHCGNDI_OFFSET UNITYSDK_OFFSET(0xC77BE20)
#define CEBMNLPNKFL_ODHANKKDHHB_OFFSET UNITYSDK_OFFSET(0xC77BE30)
#define CEBMNLPNKFL_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xC77BD80)
#define CEBMNLPNKFL_SET_ANIMATORSTATEHASH_OFFSET UNITYSDK_OFFSET(0xC77C000)
#define CEBMNLPNKFL_SET_ISFIXEDTRANSITION_OFFSET UNITYSDK_OFFSET(0xC77BFE0)

	class CEBMNLPNKFL : public ::System::Object
	{
	public:
		::System::String* BLKCDLBENFP; // 0x10
		::Il2CppArray<::RPG::GameCore::AnimStateLogicTypeExtra>* MCJBGFCJFDF; // 0x18
		::System::Boolean DJPDHADCKLO; // 0x20
		::System::Boolean _IsFixedTransition_k__BackingField; // 0x21
		::System::Byte _padding0[0x2];
		::System::Int32 BIKLAFLEIOC; // 0x24
		::System::Single FMHMAHCNDGB; // 0x28
		::RPG::GameCore::AnimStateLogicType HEOJLHCIINP; // 0x2C
		::System::UInt32 AECGNOEOCFC; // 0x30
		::System::Single NNNAGHMNFKB; // 0x34
		::System::Int32 _AnimatorStateHash_k__BackingField; // 0x38
		::RPG::GameCore::AnimStateLogicTypeExtra HBOPCMCGHAA; // 0x3C
		::System::Single EJOAJDOPCHE; // 0x40
		::System::Single ADPMMNEFDPA; // 0x44
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
