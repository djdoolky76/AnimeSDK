#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/OANNBEFHHCE_DAFHAOGDHBP.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define OANNBEFHHCE_FAMNDKEIFID_OFFSET UNITYSDK_OFFSET(0x13A44F40)
#define OANNBEFHHCE_FLDNKLBAEPH_OFFSET UNITYSDK_OFFSET(0x13A44DF0)
#define OANNBEFHHCE_LPOMAADEDNM_OFFSET UNITYSDK_OFFSET(0x13A451E0)
#define OANNBEFHHCE_MDGCKIAAKPF_OFFSET UNITYSDK_OFFSET(0x13A450E0)
#define OANNBEFHHCE_MHDMEGPEACO_OFFSET UNITYSDK_OFFSET(0x13A459C0)
#define OANNBEFHHCE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13A44FE0)
#define OANNBEFHHCE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A44D90)

inline static constexpr unsigned int OANNBEFHHCE_TypeDefinitionIndex = 52225;

class OANNBEFHHCE : public ::System::Object
{
public:
	// static const ::System::Int32 ANFPBJONCPP = -0xFD; // 0x0
	// static const ::System::Int32 KLJFIJHHNAK = -0xFC; // 0x0
	// static const ::System::Int32 BJBBGHDCIPN = -0xFB; // 0x0
	// static const ::System::UInt32 NONIGLDFFHG = 0xB; // 0x0
	::System::Action_2<::System::Int32, ::UnityEngine::Vector2>* ILGKFMBHEFI; // 0x10
	::Il2CppArray<::System::Object*>* HJCDGNHHCJL; // 0x18
	::Il2CppArray<::System::Object*>* OMGPIEJMMGC; // 0x20
	::System::Action_2<::System::Int32, ::UnityEngine::Vector2>* IBGAFONPAMJ; // 0x28
	::System::Action_2<::System::Int32, ::UnityEngine::Vector2>* CCFABLEKFFC; // 0x30
	::System::Boolean FJCCIHJMJEN; // 0x38
	::System::Boolean CMGLLEGGCDE; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANNBEFHHCE__CTOR_OFFSET))(this);
	}

	::System::Boolean FLDNKLBAEPH(::System::Int32 BAKJOJBPLFD, ::UnityEngine::Vector2 PFBGAKLFGPI, ::UnityEngine::Vector2& GNBEOPKIMHJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + OANNBEFHHCE_FLDNKLBAEPH_OFFSET))(this, BAKJOJBPLFD, PFBGAKLFGPI, GNBEOPKIMHJ);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANNBEFHHCE_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean MDGCKIAAKPF(::System::Int32 BAKJOJBPLFD, ::OANNBEFHHCE_DAFHAOGDHBP& BNHBALPDNIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OANNBEFHHCE_DAFHAOGDHBP&))((::PBYTE)hIl2Cpp + OANNBEFHHCE_MDGCKIAAKPF_OFFSET))(this, BAKJOJBPLFD, BNHBALPDNIP);
	}

	::UnityEngine::Vector2 FAMNDKEIFID(::UnityEngine::Vector2 NBLPLLAIDPM)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + OANNBEFHHCE_FAMNDKEIFID_OFFSET))(this, NBLPLLAIDPM);
	}

	::System::Void LPOMAADEDNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANNBEFHHCE_LPOMAADEDNM_OFFSET))(this);
	}

	::System::Void MHDMEGPEACO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANNBEFHHCE_MHDMEGPEACO_OFFSET))(this);
	}
};
