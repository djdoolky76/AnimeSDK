#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace System { class Object; }
template <typename T> class ADJHBNPPGEE_1;

#define IDCJBLCKHNN_DNLOICDDEBI_OFFSET UNITYSDK_OFFSET(0x165658D0)
#define IDCJBLCKHNN_FPGJHPBPLPJ_OFFSET UNITYSDK_OFFSET(0x165653B0)
#define IDCJBLCKHNN__CTOR_OFFSET UNITYSDK_OFFSET(0x16565A20)

inline static constexpr unsigned int IDCJBLCKHNN_TypeDefinitionIndex = 60065;

class IDCJBLCKHNN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCJBLCKHNN__CTOR_OFFSET))(this);
	}

	::MoleMole::ScrollViewItemWidgetController* FPGJHPBPLPJ(::System::Int32 ABHBKFJKINO)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IDCJBLCKHNN_FPGJHPBPLPJ_OFFSET))(this, ABHBKFJKINO);
	}

	::ADJHBNPPGEE_1<::System::Object*>* DNLOICDDEBI(::System::Int32 ABHBKFJKINO)
	{
		return ((::ADJHBNPPGEE_1<::System::Object*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IDCJBLCKHNN_DNLOICDDEBI_OFFSET))(this, ABHBKFJKINO);
	}
};
