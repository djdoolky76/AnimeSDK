#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace System { class Object; }
template <typename T> class ADJHBNPPGEE_1;

#define OMNADEGBJKG_DNLOICDDEBI_OFFSET UNITYSDK_OFFSET(0x1B7AB6E0)
#define OMNADEGBJKG_FPGJHPBPLPJ_OFFSET UNITYSDK_OFFSET(0x1B7AB2B0)
#define OMNADEGBJKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7AB780)

inline static constexpr unsigned int OMNADEGBJKG_TypeDefinitionIndex = 49441;

class OMNADEGBJKG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNADEGBJKG__CTOR_OFFSET))(this);
	}

	::MoleMole::ScrollViewItemWidgetController* FPGJHPBPLPJ(::System::Int32 ABHBKFJKINO)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OMNADEGBJKG_FPGJHPBPLPJ_OFFSET))(this, ABHBKFJKINO);
	}

	::ADJHBNPPGEE_1<::System::Object*>* DNLOICDDEBI(::System::Int32 ABHBKFJKINO)
	{
		return ((::ADJHBNPPGEE_1<::System::Object*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OMNADEGBJKG_DNLOICDDEBI_OFFSET))(this, ABHBKFJKINO);
	}
};
