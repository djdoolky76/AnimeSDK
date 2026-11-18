#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCKJMKBPMCC_LLKEPNDKGAD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class String; }

#define MMLCFMEIOJB_GCNHBEMPDJJ_IKFGKHOLJOC_OFFSET UNITYSDK_OFFSET(0x12178C90)
#define MMLCFMEIOJB_GCNHBEMPDJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12178C80)

inline static constexpr unsigned int MMLCFMEIOJB_GCNHBEMPDJJ_TypeDefinitionIndex = 87276;

class MMLCFMEIOJB_GCNHBEMPDJJ : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* DGLCKFDCBOL; // 0x10
	::System::String* CEOABKCAFOF; // 0x18
	::Il2CppArray<::System::String*>* DNKAKCEAGFC; // 0x20
	::UnityEngine::LayerMask FBNGKPGLADH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLCFMEIOJB_GCNHBEMPDJJ__CTOR_OFFSET))(this);
	}

	::MCKJMKBPMCC_LLKEPNDKGAD IKFGKHOLJOC(::UnityEngine::RaycastHit& OFLHPPDJLNL)
	{
		return ((::MCKJMKBPMCC_LLKEPNDKGAD(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + MMLCFMEIOJB_GCNHBEMPDJJ_IKFGKHOLJOC_OFFSET))(this, OFLHPPDJLNL);
	}
};
