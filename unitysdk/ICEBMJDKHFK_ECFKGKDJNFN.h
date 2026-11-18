#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define ICEBMJDKHFK_ECFKGKDJNFN__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA1570)

inline static constexpr unsigned int ICEBMJDKHFK_ECFKGKDJNFN_TypeDefinitionIndex = 70789;

class ICEBMJDKHFK_ECFKGKDJNFN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IGJAGLKPKBK; // 0x10
	::UnityEngine::Vector3 HBNPCBMMLCF; // 0x18
	::System::Single PEMFDMJPKFK; // 0x24
	::System::Single FPMCGJMIKFG; // 0x28
	::System::Boolean CCEEDKILGDH; // 0x2C
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 LPMDPLIOIBC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEBMJDKHFK_ECFKGKDJNFN__CTOR_OFFSET))(this);
	}
};
