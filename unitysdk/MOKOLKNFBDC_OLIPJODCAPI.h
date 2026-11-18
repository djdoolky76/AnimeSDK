#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOKOLKNFBDC_OLIPJODCAPI_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1274A1F0)
#define MOKOLKNFBDC_OLIPJODCAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1274A1E0)

inline static constexpr unsigned int MOKOLKNFBDC_OLIPJODCAPI_TypeDefinitionIndex = 70025;

class MOKOLKNFBDC_OLIPJODCAPI : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKOLKNFBDC_OLIPJODCAPI__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKOLKNFBDC_OLIPJODCAPI_PNGOHNLELDJ_OFFSET))(this);
	}
};
