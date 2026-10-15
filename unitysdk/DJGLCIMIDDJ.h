#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"
class PLMODIOCPAF;

#define DJGLCIMIDDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F2760)

	class DJGLCIMIDDJ : public ::Entitas::Systems
	{
	public:
		::System::Void _ctor(::PLMODIOCPAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLMODIOCPAF*))((::PBYTE)hIl2Cpp + DJGLCIMIDDJ_CTOR_OFFSET))(this, a1);
		}

	};
