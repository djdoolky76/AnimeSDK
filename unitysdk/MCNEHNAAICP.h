#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MCNEHNAAICP_CTOR_OFFSET UNITYSDK_OFFSET(0xB889090)
#define MCNEHNAAICP_DFIDFBPLEGF_OFFSET UNITYSDK_OFFSET(0xB889020)

inline static constexpr unsigned int MCNEHNAAICP_TypeDefinitionIndex = 71471;

	class MCNEHNAAICP : public ::System::Object
	{
	public:
		// static const ::System::Object GAHPOMOLFPJ; // 0x0
		// static const ::System::String* NBFDEEDKLLG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNEHNAAICP_CTOR_OFFSET))(this);
		}

		::System::String* DFIDFBPLEGF(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MCNEHNAAICP_DFIDFBPLEGF_OFFSET))(this, a1);
		}

	};
