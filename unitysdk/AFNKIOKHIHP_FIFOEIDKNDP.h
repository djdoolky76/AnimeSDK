#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"

class AFNKIOKHIHP_JMFAOFEEDGM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFNKIOKHIHP_FIFOEIDKNDP__CTOR_OFFSET UNITYSDK_OFFSET(0x181F0950)

inline static constexpr unsigned int AFNKIOKHIHP_FIFOEIDKNDP_TypeDefinitionIndex = 79098;

class AFNKIOKHIHP_FIFOEIDKNDP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>* LKJNFADGAFD; // 0x10
	::AFNKIOKHIHP_JMFAOFEEDGM* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_FIFOEIDKNDP__CTOR_OFFSET))(this);
	}
};
