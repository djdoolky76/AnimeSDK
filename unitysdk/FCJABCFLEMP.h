#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class JOOHBDMHGCA;
class MGBPBGBHKFB;
class MMBKAKPDHIF;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define FCJABCFLEMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169C5640)
#define FCJABCFLEMP_FKJCCAHHLMG_OFFSET UNITYSDK_OFFSET(0x169C64F0)
#define FCJABCFLEMP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x169C56A0)
#define FCJABCFLEMP_LIJJJIHDKIE_OFFSET UNITYSDK_OFFSET(0x169C6570)
#define FCJABCFLEMP_OACCMJGMDCH_OFFSET UNITYSDK_OFFSET(0x169C6340)
#define FCJABCFLEMP_OCMCJHBPENI_OFFSET UNITYSDK_OFFSET(0x169C6450)
#define FCJABCFLEMP_PROCESS_1_OFFSET UNITYSDK_OFFSET(0x169C60E0)
#define FCJABCFLEMP_PROCESS_OFFSET UNITYSDK_OFFSET(0x169C5BC0)
#define FCJABCFLEMP__CTOR_OFFSET UNITYSDK_OFFSET(0x169C5620)

inline static constexpr unsigned int FCJABCFLEMP_TypeDefinitionIndex = 74785;

class FCJABCFLEMP : public ::System::Object
{
public:
	::MMBKAKPDHIF* LFAFBNODJBN; // 0x10
	::GEIHCPAOKKK* EKHKNFILMGJ; // 0x18
	::JOOHBDMHGCA* ADPGHCMLFPH; // 0x20
	::System::Action* EGBBBMAIKNP; // 0x28
	::System::Int32 BDDIDIAAAFL; // 0x30
	::System::Boolean IFJMDDJIAPD; // 0x34
	::System::Boolean BBLLDFPMLIM; // 0x35
	::System::Byte _padding0[0x2];
	::System::Int32 OIPDGAPFJFD; // 0x38
	::System::Single OAPEOLIMDIM; // 0x3C
	::UnityEngine::Vector2 JMLHHALFIGK; // 0x40
	::System::Single HOFGJOHPGLP; // 0x48
	::UnityEngine::Vector2 AIOEGHELELG; // 0x4C

	::System::Void _ctor(::UnityEngine::Vector2 PINEIPABFBK, ::System::Single OANFCBEEIFO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + FCJABCFLEMP__CTOR_OFFSET))(this, PINEIPABFBK, OANFCBEEIFO);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCJABCFLEMP_DISPOSE_OFFSET))(this);
	}

	::System::Void Initialize(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FCJABCFLEMP_INITIALIZE_OFFSET))(this, KECKGDFIALJ);
	}

	::UnityEngine::Vector3 Process(::MGBPBGBHKFB* HLFFCMIFFIB, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MGBPBGBHKFB*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FCJABCFLEMP_PROCESS_OFFSET))(this, HLFFCMIFFIB, OHOGDOMNHNK, BFBELMDIAHI);
	}

	::UnityEngine::Quaternion Process_1(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FCJABCFLEMP_PROCESS_1_OFFSET))(this, OHOGDOMNHNK, BFBELMDIAHI);
	}

	::UnityEngine::Vector2 OACCMJGMDCH()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FCJABCFLEMP_OACCMJGMDCH_OFFSET))(this);
	}

	::System::Void OCMCJHBPENI(::UnityEngine::Vector2 HLFFCMIFFIB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FCJABCFLEMP_OCMCJHBPENI_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Void FKJCCAHHLMG(::System::Single HLFFCMIFFIB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCJABCFLEMP_FKJCCAHHLMG_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Single LIJJJIHDKIE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FCJABCFLEMP_LIJJJIHDKIE_OFFSET))(this);
	}
};
