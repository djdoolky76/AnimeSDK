#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FADFIFIOFNC_DIGBLDCFCGP_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x14AB5EB0)
#define FADFIFIOFNC_DIGBLDCFCGP__CTOR_OFFSET UNITYSDK_OFFSET(0x14AB5EA0)

inline static constexpr unsigned int FADFIFIOFNC_DIGBLDCFCGP_TypeDefinitionIndex = 61621;

class FADFIFIOFNC_DIGBLDCFCGP : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FADFIFIOFNC_DIGBLDCFCGP__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FADFIFIOFNC_DIGBLDCFCGP_PNGOHNLELDJ_OFFSET))(this);
	}
};
