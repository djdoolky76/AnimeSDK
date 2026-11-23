#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define EB7F1F99017EFFA6_FDCB80F556A0EB7D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EB7F1F99017EFFA6_FDCB80F556A0EB7D_TypeDefinitionIndex = 18215;

class EB7F1F99017EFFA6_FDCB80F556A0EB7D : public ::System::Object
{
public:
	::System::Int64 EAB20F4371B755A2; // 0x10
	::UnityEngine::Material* AAA9905DA6739077; // 0x18
	::System::Int32 B371E3F0F325BB9B; // 0x20
	::System::Byte _padding0[0x4];
	::UnityEngine::Material* FF62661DF92753A8; // 0x28
	::System::Int32 A70E5C58B2C7A692; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB7F1F99017EFFA6_FDCB80F556A0EB7D__CTOR_OFFSET))(this);
	}
};
