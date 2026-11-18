#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LLCNMJGBANI_JGBPPDLCKML_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x14DBE6F0)
#define LLCNMJGBANI_JGBPPDLCKML__CTOR_OFFSET UNITYSDK_OFFSET(0x14DBE6E0)

inline static constexpr unsigned int LLCNMJGBANI_JGBPPDLCKML_TypeDefinitionIndex = 50004;

class LLCNMJGBANI_JGBPPDLCKML : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCNMJGBANI_JGBPPDLCKML__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCNMJGBANI_JGBPPDLCKML_PNGOHNLELDJ_OFFSET))(this);
	}
};
