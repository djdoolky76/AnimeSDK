#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEBMDOOMAHD.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLFLBGMNMOD__CTOR_OFFSET UNITYSDK_OFFSET(0x17A58D40)

inline static constexpr unsigned int HLFLBGMNMOD_TypeDefinitionIndex = 54060;

class HLFLBGMNMOD : public ::System::Object
{
public:
	::System::Action* GFNEJOJAMKF; // 0x10
	::System::String* PLOFHFCCKKI; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* FHOIIINADNB; // 0x20
	::System::String* PFNODFDAFAK; // 0x28
	::System::Action* CHIJOHDKLON; // 0x30
	::GEBMDOOMAHD MDAMHKOLAOI; // 0x38
	::System::Single ADPPNLIOGBF; // 0x3C
	::System::Boolean OIKFFMHNCHB; // 0x40
	::System::Boolean GLFMNEIBEFK; // 0x41
	::System::Byte _padding0[0x2];
	::System::Single GHBPNGDLDJE; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFLBGMNMOD__CTOR_OFFSET))(this);
	}
};
