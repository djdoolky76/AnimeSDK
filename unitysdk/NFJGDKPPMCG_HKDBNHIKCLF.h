#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NFJGDKPPMCG_HKDBNHIKCLF_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x10D730C0)
#define NFJGDKPPMCG_HKDBNHIKCLF__CTOR_OFFSET UNITYSDK_OFFSET(0x10D730B0)

inline static constexpr unsigned int NFJGDKPPMCG_HKDBNHIKCLF_TypeDefinitionIndex = 38982;

class NFJGDKPPMCG_HKDBNHIKCLF : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJGDKPPMCG_HKDBNHIKCLF__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJGDKPPMCG_HKDBNHIKCLF_PNGOHNLELDJ_OFFSET))(this);
	}
};
