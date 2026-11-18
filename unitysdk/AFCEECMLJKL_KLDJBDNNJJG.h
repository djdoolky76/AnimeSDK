#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKGACDKKAIL.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/LayerMaskStatic_LDGDJLOILCG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MLFADFNMJFO;
namespace MoleMole::Config { class ConfigEntityAttackPattern; }
namespace System { class String; }

#define AFCEECMLJKL_KLDJBDNNJJG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1264B560)
#define AFCEECMLJKL_KLDJBDNNJJG__CTOR_OFFSET UNITYSDK_OFFSET(0x1264B550)

inline static constexpr unsigned int AFCEECMLJKL_KLDJBDNNJJG_TypeDefinitionIndex = 71523;

class AFCEECMLJKL_KLDJBDNNJJG : public ::System::Object
{
public:
	::MLFADFNMJFO* LBPBFHIPIBF; // 0x10
	::MoleMole::EntityHandle KMLDHNKIGEI; // 0x18
	::MoleMole::EntityHandle MFMPICKHAMJ; // 0x28
	::Il2CppArray<::System::String*>* JMDOANHOEJG; // 0x38
	::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO; // 0x40
	::UnityEngine::LayerMask FBNGKPGLADH; // 0x48
	::UnityEngine::Quaternion MDPOLFIGONG; // 0x4C
	::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB; // 0x5C
	::System::Boolean HHNPOPFBMID; // 0x60
	::System::Boolean NPBJIFNEMHG; // 0x61
	::System::Boolean FOJFMJKALKO; // 0x62
	::System::Byte _padding0[0x1];
	::LKGACDKKAIL OCKMDPLBKFH; // 0x64
	::UnityEngine::Vector3 IFMELCDBBPC; // 0x74
	::System::UInt32 IBJNHPABKLL; // 0x80
	::System::Int32 BKCJBPPJCEL; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCEECMLJKL_KLDJBDNNJJG__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 BKCJBPPJCEL, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO, ::MLFADFNMJFO* LBPBFHIPIBF, ::MoleMole::EntityHandle MFMPICKHAMJ, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB, ::System::Boolean FOJFMJKALKO, ::Il2CppArray<::System::String*>* JMDOANHOEJG, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean HHNPOPFBMID, ::UnityEngine::Vector3 IFMELCDBBPC, ::UnityEngine::Quaternion MDPOLFIGONG, ::System::Boolean NPBJIFNEMHG, ::System::UInt32 IBJNHPABKLL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MLFADFNMJFO*, ::MoleMole::EntityHandle, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::LKGACDKKAIL, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + AFCEECMLJKL_KLDJBDNNJJG_BBOMJDBNHIC_OFFSET))(this, BKCJBPPJCEL, KBCCBKNJJOO, LBPBFHIPIBF, MFMPICKHAMJ, FBNGKPGLADH, BBFAJBKOAOB, FOJFMJKALKO, JMDOANHOEJG, OCKMDPLBKFH, HHNPOPFBMID, IFMELCDBBPC, MDPOLFIGONG, NPBJIFNEMHG, IBJNHPABKLL);
	}
};
