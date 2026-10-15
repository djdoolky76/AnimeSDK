#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define JLGAPJLCIKO_CFADAOFGDGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x117E0)
#define JLGAPJLCIKO_CFADAOFGDGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x117F0)

	struct alignas(4) JLGAPJLCIKO_CFADAOFGDGF
	{
		::System::Int32 NBPINLGNJOJ; // 0x10
		::System::Int32 CBLMJGECJON; // 0x14
		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_CFADAOFGDGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_CFADAOFGDGF_GETHASHCODE_OFFSET))(this);
		}

	};
