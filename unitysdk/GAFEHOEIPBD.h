#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMDIHKEBDJJ;

#define GAFEHOEIPBD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA45740)
#define GAFEHOEIPBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA457A0)

inline static constexpr unsigned int GAFEHOEIPBD_TypeDefinitionIndex = 43568;

	class GAFEHOEIPBD : public ::System::Object
	{
	public:
		::DMDIHKEBDJJ* NNANJMDMAOC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFEHOEIPBD_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFEHOEIPBD_CLEAR_OFFSET))(this);
		}

	};
