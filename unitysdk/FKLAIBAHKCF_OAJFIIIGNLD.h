#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FKLAIBAHKCF_OAJFIIIGNLD_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x116BA040)
#define FKLAIBAHKCF_OAJFIIIGNLD__CTOR_OFFSET UNITYSDK_OFFSET(0x116BA030)

inline static constexpr unsigned int FKLAIBAHKCF_OAJFIIIGNLD_TypeDefinitionIndex = 57193;

class FKLAIBAHKCF_OAJFIIIGNLD : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAIBAHKCF_OAJFIIIGNLD__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLAIBAHKCF_OAJFIIIGNLD_PNGOHNLELDJ_OFFSET))(this);
	}
};
