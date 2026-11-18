#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BGJCOEKKMBG_INKDMMKMNLE_DHJCFFPBEHC_OFFSET UNITYSDK_OFFSET(0xFF6F560)
#define BGJCOEKKMBG_INKDMMKMNLE__CTOR_OFFSET UNITYSDK_OFFSET(0xFF6F550)

inline static constexpr unsigned int BGJCOEKKMBG_INKDMMKMNLE_TypeDefinitionIndex = 46542;

class BGJCOEKKMBG_INKDMMKMNLE : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_INKDMMKMNLE__CTOR_OFFSET))(this);
	}

	::System::Void DHJCFFPBEHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_INKDMMKMNLE_DHJCFFPBEHC_OFFSET))(this);
	}
};
