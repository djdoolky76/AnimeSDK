#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }

#define HGJEMIBOFNI_DKGNBJKJPNN_JCAHCNDFLJK_OFFSET UNITYSDK_OFFSET(0x14A0DFD0)
#define HGJEMIBOFNI_DKGNBJKJPNN__CTOR_OFFSET UNITYSDK_OFFSET(0x14A0DFC0)

inline static constexpr unsigned int HGJEMIBOFNI_DKGNBJKJPNN_TypeDefinitionIndex = 73672;

class HGJEMIBOFNI_DKGNBJKJPNN : public ::System::Object
{
public:
	::System::Action* IHLBALNBGKM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_DKGNBJKJPNN__CTOR_OFFSET))(this);
	}

	::System::Void JCAHCNDFLJK(::MoleMole::IVideoPlayer* HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_DKGNBJKJPNN_JCAHCNDFLJK_OFFSET))(this, HFMHOELKCAJ);
	}
};
