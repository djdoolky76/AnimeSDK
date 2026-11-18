#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KAHAIFPJBOO_NKLHOMJGPNF_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x13AEC0D0)
#define KAHAIFPJBOO_NKLHOMJGPNF__CTOR_OFFSET UNITYSDK_OFFSET(0x13AEC0C0)

inline static constexpr unsigned int KAHAIFPJBOO_NKLHOMJGPNF_TypeDefinitionIndex = 54425;

class KAHAIFPJBOO_NKLHOMJGPNF : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_NKLHOMJGPNF__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_NKLHOMJGPNF_PNGOHNLELDJ_OFFSET))(this);
	}
};
