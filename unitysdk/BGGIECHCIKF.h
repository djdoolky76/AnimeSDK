#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/SurfGameItemDataEntry.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define BGGIECHCIKF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x18561E60)
#define BGGIECHCIKF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x18561F40)
#define BGGIECHCIKF_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x18561FC0)
#define BGGIECHCIKF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x18561E00)
#define BGGIECHCIKF__CCTOR_OFFSET UNITYSDK_OFFSET(0x18561EB0)
#define BGGIECHCIKF__CTOR_OFFSET UNITYSDK_OFFSET(0x18561F30)

inline static constexpr unsigned int BGGIECHCIKF_TypeDefinitionIndex = 92356;

class BGGIECHCIKF : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xE4; // 0x0
	::System::Func_2<::MoleMole::EntityHandle, ::System::Boolean>* DMHOJODKAHK; // 0x48
	::MoleMole::Config::SurfGameItemDataEntry AHMFPFACACD; // 0x50
	::System::Boolean MAHBNEBLLEK; // 0x68
	::System::Byte _padding0[0x3];
	::System::Int32 GOLLIDOALMD; // 0x6C
	::UnityEngine::Vector3 NNGIMMFCIAP; // 0x70
	::UnityEngine::Vector3 FKLCFBCLJLI; // 0x7C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGGIECHCIKF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGIECHCIKF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGIECHCIKF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGIECHCIKF_GETCLASSID_OFFSET))(this);
	}

	static ::BGGIECHCIKF* JFDOOELFAOA()
	{
		return ((::BGGIECHCIKF*(*)())((::PBYTE)hIl2Cpp + BGGIECHCIKF_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGIECHCIKF_MEFBHFEOKGH_OFFSET))(this);
	}
};
