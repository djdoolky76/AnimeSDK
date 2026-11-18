#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MLJPJJOJGMH_FLCFEOOCLLD_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x177CAFB0)
#define MLJPJJOJGMH_FLCFEOOCLLD__CTOR_OFFSET UNITYSDK_OFFSET(0x177CAFA0)

inline static constexpr unsigned int MLJPJJOJGMH_FLCFEOOCLLD_TypeDefinitionIndex = 64425;

class MLJPJJOJGMH_FLCFEOOCLLD : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPJJOJGMH_FLCFEOOCLLD__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPJJOJGMH_FLCFEOOCLLD_PNGOHNLELDJ_OFFSET))(this);
	}
};
