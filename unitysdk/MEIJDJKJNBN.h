#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKMPCEIGNNM.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MEIJDJKJNBN_KJMJIFAHADE_OFFSET UNITYSDK_OFFSET(0x10741FF0)
#define MEIJDJKJNBN_MPDGJIMLGIO_OFFSET UNITYSDK_OFFSET(0x10742340)
#define MEIJDJKJNBN_NGKOPBCHFOP_OFFSET UNITYSDK_OFFSET(0x10741FB0)
#define MEIJDJKJNBN__CTOR_OFFSET UNITYSDK_OFFSET(0x10741FD0)

inline static constexpr unsigned int MEIJDJKJNBN_TypeDefinitionIndex = 67696;

class MEIJDJKJNBN : public ::System::Object
{
public:
	::EKMPCEIGNNM ELBGKIJHCML; // 0x10

	::System::Void _ctor(::EKMPCEIGNNM JNDDJMAHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::EKMPCEIGNNM))((::PBYTE)hIl2Cpp + MEIJDJKJNBN__CTOR_OFFSET))(this, JNDDJMAHNAI);
	}

	::EKMPCEIGNNM NGKOPBCHFOP()
	{
		return ((::EKMPCEIGNNM(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIJDJKJNBN_NGKOPBCHFOP_OFFSET))(this);
	}

	::UnityEngine::Transform* KJMJIFAHADE()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIJDJKJNBN_KJMJIFAHADE_OFFSET))(this);
	}

	::UnityEngine::Transform* MPDGJIMLGIO(::System::String* JEFIFONIKKG)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MEIJDJKJNBN_MPDGJIMLGIO_OFFSET))(this, JEFIFONIKKG);
	}
};
