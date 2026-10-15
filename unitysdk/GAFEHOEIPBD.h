#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMDIHKEBDJJ;

#define GAFEHOEIPBD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA73BF0)
#define GAFEHOEIPBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA73C50)

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
