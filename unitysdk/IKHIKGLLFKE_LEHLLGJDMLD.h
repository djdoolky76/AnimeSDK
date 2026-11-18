#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IKHIKGLLFKE_LEHLLGJDMLD_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xEBE7450)
#define IKHIKGLLFKE_LEHLLGJDMLD__CTOR_OFFSET UNITYSDK_OFFSET(0xEBE7440)

inline static constexpr unsigned int IKHIKGLLFKE_LEHLLGJDMLD_TypeDefinitionIndex = 60341;

class IKHIKGLLFKE_LEHLLGJDMLD : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHIKGLLFKE_LEHLLGJDMLD__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHIKGLLFKE_LEHLLGJDMLD_PNGOHNLELDJ_OFFSET))(this);
	}
};
