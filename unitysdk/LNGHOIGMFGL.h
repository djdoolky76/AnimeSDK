#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAJELNMMPIP.h"

class AIPCECJCJLK;
class AJAMLAJJNHA;
class CKKDNKKKIPD;

#define LNGHOIGMFGL_IBELDKINIOF_OFFSET UNITYSDK_OFFSET(0x14DCA910)
#define LNGHOIGMFGL_OFINMOFKGFI_OFFSET UNITYSDK_OFFSET(0x14DCB280)
#define LNGHOIGMFGL__CTOR_OFFSET UNITYSDK_OFFSET(0x14DCA850)

inline static constexpr unsigned int LNGHOIGMFGL_TypeDefinitionIndex = 50893;

class LNGHOIGMFGL : public ::KAJELNMMPIP
{
public:
	::AIPCECJCJLK* OCABOIKKIOJ; // 0x48
	::CKKDNKKKIPD* HKKIPLPOGBB; // 0x50

	::System::Void _ctor(::AJAMLAJJNHA* KAINLJMNCHE)
	{
		return ((::System::Void(*)(::PVOID, ::AJAMLAJJNHA*))((::PBYTE)hIl2Cpp + LNGHOIGMFGL__CTOR_OFFSET))(this, KAINLJMNCHE);
	}

	::System::Void IBELDKINIOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGHOIGMFGL_IBELDKINIOF_OFFSET))(this);
	}

	::System::Void OFINMOFKGFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGHOIGMFGL_OFINMOFKGFI_OFFSET))(this);
	}
};
