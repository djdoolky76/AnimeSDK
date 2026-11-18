#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PFOIKAAOENL_CMOEMFLHECC_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1AFE0720)
#define PFOIKAAOENL_CMOEMFLHECC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE0710)

inline static constexpr unsigned int PFOIKAAOENL_CMOEMFLHECC_TypeDefinitionIndex = 68942;

class PFOIKAAOENL_CMOEMFLHECC : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOIKAAOENL_CMOEMFLHECC__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOIKAAOENL_CMOEMFLHECC_PNGOHNLELDJ_OFFSET))(this);
	}
};
