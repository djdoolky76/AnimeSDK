#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KBDGKAJPALP;
namespace System { class Action; }

#define HBAEODMMGPH_BADEMDFCBFN_PNDINKNPOLG_OFFSET UNITYSDK_OFFSET(0x1DB7FDD0)
#define HBAEODMMGPH_BADEMDFCBFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7FDC0)

inline static constexpr unsigned int HBAEODMMGPH_BADEMDFCBFN_TypeDefinitionIndex = 93738;

class HBAEODMMGPH_BADEMDFCBFN : public ::System::Object
{
public:
	::KBDGKAJPALP* GEEHGDABNJF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAEODMMGPH_BADEMDFCBFN__CTOR_OFFSET))(this);
	}

	::System::Void PNDINKNPOLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAEODMMGPH_BADEMDFCBFN_PNDINKNPOLG_OFFSET))(this);
	}
};
