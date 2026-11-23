#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define E009FDCA5A75AD3F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E009FDCA5A75AD3F_TypeDefinitionIndex = 8061;

class E009FDCA5A75AD3F : public ::System::Object
{
public:
	::System::Int32 ECD5A90C28CA2DED; // 0x10
	::System::Byte _padding0[0x4];
	::UnityEngine::Renderer* BFF40661C6530F79; // 0x18
	::Il2CppArray<::System::Int32>* E1A97EBB0B6123AA; // 0x20
	::Il2CppArray<::UnityEngine::Material*>* EDE46C59374D1E85; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E009FDCA5A75AD3F__CTOR_OFFSET))(this);
	}
};
