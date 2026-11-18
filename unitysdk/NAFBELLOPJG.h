#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NAFBELLOPJG_CGEBMDIHJAA_OFFSET UNITYSDK_OFFSET(0x113A6330)
#define NAFBELLOPJG_DHPMHLOLFNB_OFFSET UNITYSDK_OFFSET(0x113A5E80)
#define NAFBELLOPJG_FFGHOCPHEGL_OFFSET UNITYSDK_OFFSET(0x113A6440)
#define NAFBELLOPJG__CTOR_OFFSET UNITYSDK_OFFSET(0x113A5E70)

inline static constexpr unsigned int NAFBELLOPJG_TypeDefinitionIndex = 93239;

class NAFBELLOPJG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFBELLOPJG__CTOR_OFFSET))(this);
	}

	static ::System::Void DHPMHLOLFNB(::System::String* JBIADOFJMMH, ::System::Int32& LENPFOMPLND)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + NAFBELLOPJG_DHPMHLOLFNB_OFFSET))(JBIADOFJMMH, LENPFOMPLND);
	}

	static ::System::String* CGEBMDIHJAA(::System::String* INAIEMEOMDG)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NAFBELLOPJG_CGEBMDIHJAA_OFFSET))(INAIEMEOMDG);
	}

	static ::System::Void FFGHOCPHEGL(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAFBELLOPJG_FFGHOCPHEGL_OFFSET))(JEIDPPCEHLD);
	}
};
