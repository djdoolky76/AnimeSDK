#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }
template <typename T> class LJHFMILANJA_1;

#define NGOGKECOBBN_ACJHNPIAPFM_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xE57F980)
#define NGOGKECOBBN_ACJHNPIAPFM__CTOR_OFFSET UNITYSDK_OFFSET(0xE57FAC0)

inline static constexpr unsigned int NGOGKECOBBN_ACJHNPIAPFM_TypeDefinitionIndex = 79406;

class NGOGKECOBBN_ACJHNPIAPFM : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* BHLCDCEOPHP; // 0x88
	::LJHFMILANJA_1<::System::Boolean>* AJIBHBJNOCE; // 0x90
	::LJHFMILANJA_1<::System::Object*>* BBCEFEECMGI; // 0x98
	::LJHFMILANJA_1<::System::String*>* JNAJDCADOOA; // 0xA0
	::LJHFMILANJA_1<::System::Object*>* OBDLPGILHHL; // 0xA8
	::LJHFMILANJA_1<::System::String*>* MGEDBKBHJPM; // 0xB0
	::UnityEngine::Events::UnityAction* KCMCFIBMPBK; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOGKECOBBN_ACJHNPIAPFM__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOGKECOBBN_ACJHNPIAPFM_ONCREATEPROPERTY_OFFSET))(this);
	}
};
