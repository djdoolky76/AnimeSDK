#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define BMBDHEPENLD_CTOR_OFFSET UNITYSDK_OFFSET(0x18B658A0)
#define BMBDHEPENLD_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x18B65590)

inline static constexpr unsigned int BMBDHEPENLD_TypeDefinitionIndex = 81785;

	class BMBDHEPENLD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDHEPENLD_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + BMBDHEPENLD_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
