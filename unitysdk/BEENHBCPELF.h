#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNEDFAKBNBC.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/JHPEPDKHCJP.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AnchorPointForwardAxis.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class HCIANHKCFIL;
class KBEJDIFPLDP;
class LONKKOMHFMD;
namespace System { class Action; }

#define BEENHBCPELF_BJJFIODFCHM_OFFSET UNITYSDK_OFFSET(0x169E91E0)
#define BEENHBCPELF_CEGMNHJCECC_OFFSET UNITYSDK_OFFSET(0x169E9620)
#define BEENHBCPELF_COBPIICGJJA_OFFSET UNITYSDK_OFFSET(0x169E8850)
#define BEENHBCPELF_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x169E8A00)
#define BEENHBCPELF_FNNECGKFALM_OFFSET UNITYSDK_OFFSET(0x169E9C00)
#define BEENHBCPELF_KDBFMEGCCII_OFFSET UNITYSDK_OFFSET(0x169E92F0)
#define BEENHBCPELF_LPAGONBLDHD_OFFSET UNITYSDK_OFFSET(0x169E8830)
#define BEENHBCPELF_MODMBKFFMHC_OFFSET UNITYSDK_OFFSET(0x169E9AE0)
#define BEENHBCPELF_NEJABFNFKIN_OFFSET UNITYSDK_OFFSET(0x169E9590)
#define BEENHBCPELF_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x169E9260)
#define BEENHBCPELF_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x169E8860)
#define BEENHBCPELF__CTOR_OFFSET UNITYSDK_OFFSET(0x169E9250)

inline static constexpr unsigned int BEENHBCPELF_TypeDefinitionIndex = 63949;

class BEENHBCPELF : public ::JHPEPDKHCJP
{
public:
	::System::Action* EGBBBMAIKNP; // 0x10
	::FNEDFAKBNBC AKELDEJGJPA; // 0x18
	::System::Boolean DJCKLFKLMOO; // 0x50
	::System::Byte _padding0[0x3];
	::Foundation::Unreal::FTransform ACDOKEGBJAO; // 0x54
	::UnityEngine::Vector3 AMBIAFBCONI; // 0x74
	::System::Nullable_1<::UnityEngine::Vector3> ANMBEFHLING; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEENHBCPELF__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 LPAGONBLDHD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BEENHBCPELF_LPAGONBLDHD_OFFSET))(this);
	}

	::UnityEngine::Quaternion COBPIICGJJA()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + BEENHBCPELF_COBPIICGJJA_OFFSET))(this);
	}

	::System::Void OKLLFEIJKHN(::LONKKOMHFMD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + BEENHBCPELF_OKLLFEIJKHN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void EDEFLFIKNFK(::HCIANHKCFIL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + BEENHBCPELF_EDEFLFIKNFK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void BJJFIODFCHM(::KBEJDIFPLDP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + BEENHBCPELF_BJJFIODFCHM_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void NIGDIMFIAEJ(::HCIANHKCFIL* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + BEENHBCPELF_NIGDIMFIAEJ_OFFSET))(this, MIALFKCCCPI);
	}

	static ::UnityEngine::Quaternion KDBFMEGCCII(::UnityEngine::Quaternion HLFFCMIFFIB, ::System::Nullable_1<::UnityEngine::Vector3> BHFAGMPDIGJ)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + BEENHBCPELF_KDBFMEGCCII_OFFSET))(HLFFCMIFFIB, BHFAGMPDIGJ);
	}

	::System::Void NEJABFNFKIN(::LONKKOMHFMD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + BEENHBCPELF_NEJABFNFKIN_OFFSET))(this, MIALFKCCCPI);
	}

	::Foundation::Unreal::FTransform CEGMNHJCECC()
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + BEENHBCPELF_CEGMNHJCECC_OFFSET))(this);
	}

	static ::System::Nullable_1<::UnityEngine::Vector3> MODMBKFFMHC(::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis BHFAGMPDIGJ)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis))((::PBYTE)hIl2Cpp + BEENHBCPELF_MODMBKFFMHC_OFFSET))(BHFAGMPDIGJ);
	}

	::System::Void FNNECGKFALM(::KBEJDIFPLDP* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + BEENHBCPELF_FNNECGKFALM_OFFSET))(this, MIALFKCCCPI);
	}
};
