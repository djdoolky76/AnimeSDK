#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }

#define NCPPHHEDIIN_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x12FDEEB0)
#define NCPPHHEDIIN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12FDECA0)
#define NCPPHHEDIIN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x12FDEFF0)
#define NCPPHHEDIIN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x12FDEE20)
#define NCPPHHEDIIN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12FDEB80)
#define NCPPHHEDIIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FDECF0)
#define NCPPHHEDIIN__CTOR_OFFSET UNITYSDK_OFFSET(0x12FDED70)

inline static constexpr unsigned int NCPPHHEDIIN_TypeDefinitionIndex = 67328;

class NCPPHHEDIIN : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 LCLGHPPKLBM = 0x5; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x80; // 0x0
	::MoleMole::Battle::Entity* AMNIHACKELI; // 0x48
	::GEIHCPAOKKK* CMEMENGJHIM; // 0x50
	::MoleMole::Battle::ColliderEventDispatcher* FPEPLIGDHEP; // 0x58
	::UnityEngine::Rigidbody* MGKPIHJJGKG; // 0x60
	::Il2CppArray<::UnityEngine::Collider*>* PFMKFMKJJPL; // 0x68
	::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Collider*, ::System::UInt32>*>* HHNOIEBNALD; // 0x70
	::UnityEngine::Collider* ANPAHCEIKPC; // 0x78
	::System::Int32 PDEOFEMKFDK; // 0x80
	::UnityEngine::Vector3 LBHLDNIMFPE; // 0x84
	::System::Boolean KNHEIKJBGOD; // 0x90
	::System::Boolean FEMDGAMFEAO; // 0x91
	::System::Byte _padding0[0x2];
	::UnityEngine::LayerMask CFMJAACOODK; // 0x94

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCPPHHEDIIN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPPHHEDIIN__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPPHHEDIIN_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPPHHEDIIN_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPPHHEDIIN_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean FEMDGAMFEAO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + NCPPHHEDIIN_GALGFCPKMGC_OFFSET))(this, AMNIHACKELI, FEMDGAMFEAO);
	}

	static ::NCPPHHEDIIN* JFDOOELFAOA()
	{
		return ((::NCPPHHEDIIN*(*)())((::PBYTE)hIl2Cpp + NCPPHHEDIIN_JFDOOELFAOA_OFFSET))();
	}
};
