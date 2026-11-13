#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class AFEPOFEOCDI;
class OMPCEECHGJK;
namespace System { class Object; }

#define HKIGIDJEIPF_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x19882220)
#define HKIGIDJEIPF_BCFAKFMPIFL_OFFSET UNITYSDK_OFFSET(0x19882830)
#define HKIGIDJEIPF_CTOR_OFFSET UNITYSDK_OFFSET(0x19882210)
#define HKIGIDJEIPF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x198829E0)
#define HKIGIDJEIPF_FDNAALFOBCN_OFFSET UNITYSDK_OFFSET(0x19882880)
#define HKIGIDJEIPF_FJPIKMALKAF_OFFSET UNITYSDK_OFFSET(0x198827E0)
#define HKIGIDJEIPF_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19882280)
#define HKIGIDJEIPF_KDANPEMICNM_OFFSET UNITYSDK_OFFSET(0x19882990)
#define HKIGIDJEIPF_LADKKOMKHIG_OFFSET UNITYSDK_OFFSET(0x198828D0)
#define HKIGIDJEIPF_LCCPIEJMNEG_OFFSET UNITYSDK_OFFSET(0x19882740)
#define HKIGIDJEIPF_NHOBMFKPNEG_OFFSET UNITYSDK_OFFSET(0x19882C10)
#define HKIGIDJEIPF_PKNBNCEGJAO_OFFSET UNITYSDK_OFFSET(0x19882790)
#define HKIGIDJEIPF_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x198824E0)

inline static constexpr unsigned int HKIGIDJEIPF_TypeDefinitionIndex = 78995;

	class HKIGIDJEIPF : public ::System::Object
	{
	public:
		::OMPCEECHGJK* PDENFEFCAGN; // 0x10
		::AFEPOFEOCDI* FKINCGODJEP; // 0x18
		::UnityEngine::Vector2 LDLGDBPAAFK; // 0x20
		::UnityEngine::Vector2 PNOAGLELHAK; // 0x28
		::System::Boolean BDGJGKMAGJE; // 0x30
		::System::Boolean EPEMPMHOGGL; // 0x31
		::System::Boolean EMCKJLINIBA; // 0x32
		::System::Boolean KCGEHFBEDJE; // 0x33
		::System::Void _ctor(::AFEPOFEOCDI* a1, ::OMPCEECHGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AFEPOFEOCDI*, ::OMPCEECHGJK*))((::PBYTE)hIl2Cpp + HKIGIDJEIPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIGIDJEIPF_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIGIDJEIPF_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIGIDJEIPF_TEARDOWN_OFFSET))(this);
		}

		::System::Void LCCPIEJMNEG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKIGIDJEIPF_LCCPIEJMNEG_OFFSET))(this, a1);
		}

		::System::Void PKNBNCEGJAO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKIGIDJEIPF_PKNBNCEGJAO_OFFSET))(this, a1);
		}

		::System::Void FJPIKMALKAF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKIGIDJEIPF_FJPIKMALKAF_OFFSET))(this, a1);
		}

		::System::Void BCFAKFMPIFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKIGIDJEIPF_BCFAKFMPIFL_OFFSET))(this, a1);
		}

		::System::Void FDNAALFOBCN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKIGIDJEIPF_FDNAALFOBCN_OFFSET))(this, a1);
		}

		::System::Void LADKKOMKHIG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKIGIDJEIPF_LADKKOMKHIG_OFFSET))(this, a1);
		}

		::System::Void KDANPEMICNM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKIGIDJEIPF_KDANPEMICNM_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIGIDJEIPF_EXECUTE_OFFSET))(this);
		}

		::System::Void NHOBMFKPNEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIGIDJEIPF_NHOBMFKPNEG_OFFSET))(this);
		}

	};
