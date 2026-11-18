#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }

#define MLLIJILKJCF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1406EBA0)
#define MLLIJILKJCF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1406ED10)
#define MLLIJILKJCF_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1406EC80)
#define MLLIJILKJCF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1406EB50)
#define MLLIJILKJCF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1406EBF0)
#define MLLIJILKJCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1406EC70)

inline static constexpr unsigned int MLLIJILKJCF_TypeDefinitionIndex = 41486;

class MLLIJILKJCF : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x28; // 0x0
	::System::Action_1<::UnityEngine::Vector3>* CPCOGCDGKEC; // 0x48
	::System::Int32 MFHLFOAAMHN; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLLIJILKJCF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLIJILKJCF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLIJILKJCF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLIJILKJCF_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLIJILKJCF_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::MLLIJILKJCF* JFDOOELFAOA()
	{
		return ((::MLLIJILKJCF*(*)())((::PBYTE)hIl2Cpp + MLLIJILKJCF_JFDOOELFAOA_OFFSET))();
	}
};
