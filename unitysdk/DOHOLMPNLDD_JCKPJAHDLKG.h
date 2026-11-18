#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DOHOLMPNLDD_JCKPJAHDLKG_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x12BD6340)
#define DOHOLMPNLDD_JCKPJAHDLKG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD6330)

inline static constexpr unsigned int DOHOLMPNLDD_JCKPJAHDLKG_TypeDefinitionIndex = 49608;

class DOHOLMPNLDD_JCKPJAHDLKG : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHOLMPNLDD_JCKPJAHDLKG__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHOLMPNLDD_JCKPJAHDLKG_PNGOHNLELDJ_OFFSET))(this);
	}
};
