#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

#define ENTITAS_SINGLEENTITYEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x16758850)

namespace Entitas
{
	class SingleEntityException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_SINGLEENTITYEXCEPTION_CTOR_OFFSET))(this, a1);
		}

	};
}
