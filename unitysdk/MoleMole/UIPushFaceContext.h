#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JDIFHHEMPHF;

#define MOLEMOLE_UIPUSHFACECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x168DCBD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPushFaceContext_TypeDefinitionIndex = 60918;

	class UIPushFaceContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JDIFHHEMPHF* pushFaceHandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHFACECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
