#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LKHEPDOAOLB_BDGJGFDMJNE_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x14DBCC70)
#define LKHEPDOAOLB_BDGJGFDMJNE__CTOR_OFFSET UNITYSDK_OFFSET(0x14DBCC60)

inline static constexpr unsigned int LKHEPDOAOLB_BDGJGFDMJNE_TypeDefinitionIndex = 43350;

class LKHEPDOAOLB_BDGJGFDMJNE : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHEPDOAOLB_BDGJGFDMJNE__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHEPDOAOLB_BDGJGFDMJNE_PNGOHNLELDJ_OFFSET))(this);
	}
};
