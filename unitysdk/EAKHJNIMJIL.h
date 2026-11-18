#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INBOCAMFFEN.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AFDDDPKKEFJ;
class ELJPOFONBJH;
class JMLFHNIBMJO;
namespace MoleMole { class MorphBallPhysicsMiddleware; }
namespace MoleMole::Battle { class MorphBallConfig; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collision; }

#define EAKHJNIMJIL_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xF9B3020)
#define EAKHJNIMJIL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xF9B3100)
#define EAKHJNIMJIL_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xF9B3180)
#define EAKHJNIMJIL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xF9B2ED0)
#define EAKHJNIMJIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9B3070)
#define EAKHJNIMJIL__CTOR_OFFSET UNITYSDK_OFFSET(0xF9B30F0)

inline static constexpr unsigned int EAKHJNIMJIL_TypeDefinitionIndex = 62308;

class EAKHJNIMJIL : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x59; // 0x0
	::MoleMole::MorphBallPhysicsMiddleware* KELKELDMLJO; // 0x48
	::ELJPOFONBJH* JEDJAJNNGBK; // 0x50
	::MoleMole::Battle::MorphBallConfig* LKKGKOBOBPO; // 0x58
	::ELJPOFONBJH* FBIIKKDGLGM; // 0x60
	::MoleMole::Battle::MorphBallConfig* DFMKILICPFB; // 0x68
	::System::Action_2<::MoleMole::EntityHandle, ::UnityEngine::Collision*>* DDNDLMDKJFL; // 0x70
	::System::Collections::Generic::List_1<::JMLFHNIBMJO*>* PGGHLGNBCOO; // 0x78
	::System::Collections::Generic::List_1<::AFDDDPKKEFJ*>* JJIDHKNGDPL; // 0x80
	::ELJPOFONBJH* MHJLAGLJHMF; // 0x88
	::System::Boolean CPPGBPPOFOL; // 0x90
	::System::Boolean FFIGIIFNICN; // 0x91
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector3 JBEFPCFLIBD; // 0x94
	::UnityEngine::Vector3 FPIJFLMOGFC; // 0xA0
	::UnityEngine::Vector3 KIFAJKLOELH; // 0xAC
	::System::Boolean DECIDLELLCP; // 0xB8
	::System::Boolean MFMFIMCPJHO; // 0xB9
	::System::Boolean FACKDFIGECA; // 0xBA
	::System::Boolean CEMKINGFCFP; // 0xBB
	::UnityEngine::Vector3 NKBIHMIGCKF; // 0xBC
	::INBOCAMFFEN HCIKPODIPJG; // 0xC8
	::UnityEngine::Vector3 PMBMBGPHBEB; // 0xFC
	::UnityEngine::Vector3 KKEFFLJMDNP; // 0x108
	::UnityEngine::Vector2 KKHEMOFBCAG; // 0x114

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAKHJNIMJIL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKHJNIMJIL__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKHJNIMJIL_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKHJNIMJIL_GETCLASSID_OFFSET))(this);
	}

	static ::EAKHJNIMJIL* JFDOOELFAOA()
	{
		return ((::EAKHJNIMJIL*(*)())((::PBYTE)hIl2Cpp + EAKHJNIMJIL_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKHJNIMJIL_MEFBHFEOKGH_OFFSET))(this);
	}
};
