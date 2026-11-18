#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MFPKCHIDKEC_IJHMHNJFECP_HICONFCAECP_OFFSET UNITYSDK_OFFSET(0x151CCED0)
#define MFPKCHIDKEC_IJHMHNJFECP__CTOR_OFFSET UNITYSDK_OFFSET(0x151CCEC0)

inline static constexpr unsigned int MFPKCHIDKEC_IJHMHNJFECP_TypeDefinitionIndex = 49401;

class MFPKCHIDKEC_IJHMHNJFECP : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPKCHIDKEC_IJHMHNJFECP__CTOR_OFFSET))(this);
	}

	::System::Void HICONFCAECP(::System::String* ELCCAICKGEC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MFPKCHIDKEC_IJHMHNJFECP_HICONFCAECP_OFFSET))(this, ELCCAICKGEC);
	}
};
