#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Collision; }

#define HJONAEFFEEP_ONNOGNHMGPH_BFOJKLIEDPC_OFFSET UNITYSDK_OFFSET(0x15DBD270)
#define HJONAEFFEEP_ONNOGNHMGPH__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBD260)

inline static constexpr unsigned int HJONAEFFEEP_ONNOGNHMGPH_TypeDefinitionIndex = 38425;

class HJONAEFFEEP_ONNOGNHMGPH : public ::System::Object
{
public:
	::MoleMole::EntityHandle HPADNAEINPK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJONAEFFEEP_ONNOGNHMGPH__CTOR_OFFSET))(this);
	}

	::System::Void BFOJKLIEDPC(::UnityEngine::Collision* GMKILPBDCFN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + HJONAEFFEEP_ONNOGNHMGPH_BFOJKLIEDPC_OFFSET))(this, GMKILPBDCFN);
	}
};
