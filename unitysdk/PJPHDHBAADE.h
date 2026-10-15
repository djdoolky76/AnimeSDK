#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define PJPHDHBAADE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F66B0)

	class PJPHDHBAADE : public ::System::Attribute
	{
	public:
		::System::Type* GMPGDEINODK; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PJPHDHBAADE_CTOR_OFFSET))(this, a1);
		}

	};
