#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define BLNAJEMEEOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B3010)

inline static constexpr unsigned int BLNAJEMEEOJ_TypeDefinitionIndex = 24997;

	class BLNAJEMEEOJ : public ::System::Attribute
	{
	public:
		::System::Type* DAMBPFMFGJN; // 0x10
		::System::Int32 ADOIGJICCEE; // 0x18
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + BLNAJEMEEOJ_CTOR_OFFSET))(this, a1);
		}

	};
