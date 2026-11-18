#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCHOANCLADD;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIADAHHJDAA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2FBC0)

inline static constexpr unsigned int MIADAHHJDAA_TypeDefinitionIndex = 80754;

class MIADAHHJDAA : public ::System::Object
{
public:
	::System::String* LNOPNAMJCAM; // 0x10
	::System::Action_2<::BCHOANCLADD*, ::MoleMole::HollowChessboard::HollowEntity*>* APGAPHMNHDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIADAHHJDAA__CTOR_OFFSET))(this);
	}
};
