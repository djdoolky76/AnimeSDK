#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AB74579FB18469C1_GeetestModel;
namespace System { class String; }

#define AB74579FB18469C1_CHECKRESULTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x39E8E70)

inline static constexpr unsigned int AB74579FB18469C1_CheckResultModel_TypeDefinitionIndex = 11883;

class AB74579FB18469C1_CheckResultModel : public ::System::Object
{
public:
	::System::String* action; // 0x10
	::System::String* id; // 0x18
	::AB74579FB18469C1_GeetestModel* geetest; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB74579FB18469C1_CHECKRESULTMODEL__CTOR_OFFSET))(this);
	}
};
