#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPNMPGDPPLF;
namespace System { class String; }

#define JPNMPGDPPLF_NFIGLCEIIBB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB2CE540)
#define JPNMPGDPPLF_NFIGLCEIIBB_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CE5D0)

inline static constexpr unsigned int JPNMPGDPPLF_NFIGLCEIIBB_TypeDefinitionIndex = 79720;

	class JPNMPGDPPLF_NFIGLCEIIBB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNMPGDPPLF_NFIGLCEIIBB_CTOR_OFFSET))(this);
		}

		::JPNMPGDPPLF* BPLPBPMEODA(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::JPNMPGDPPLF*(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + JPNMPGDPPLF_NFIGLCEIIBB_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
