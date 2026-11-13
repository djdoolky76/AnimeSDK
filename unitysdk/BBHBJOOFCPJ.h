#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define BBHBJOOFCPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x199F6770)
#define BBHBJOOFCPJ_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x199F6690)

inline static constexpr unsigned int BBHBJOOFCPJ_TypeDefinitionIndex = 64991;

	class BBHBJOOFCPJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHBJOOFCPJ_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + BBHBJOOFCPJ_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
