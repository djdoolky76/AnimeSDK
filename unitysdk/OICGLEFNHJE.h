#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDEPIHNOOHF;
class OHDDNNJKFID;

#define OICGLEFNHJE_CTOR_OFFSET UNITYSDK_OFFSET(0xBE6F540)
#define OICGLEFNHJE_INLDCKEONBL_OFFSET UNITYSDK_OFFSET(0xBE6F470)

inline static constexpr unsigned int OICGLEFNHJE_TypeDefinitionIndex = 72788;

	class OICGLEFNHJE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICGLEFNHJE_CTOR_OFFSET))(this);
		}

		static ::OHDDNNJKFID* INLDCKEONBL(::HDEPIHNOOHF* a1)
		{
			return ((::OHDDNNJKFID*(*)(::HDEPIHNOOHF*))((::PBYTE)hIl2Cpp + OICGLEFNHJE_INLDCKEONBL_OFFSET))(a1);
		}

	};
