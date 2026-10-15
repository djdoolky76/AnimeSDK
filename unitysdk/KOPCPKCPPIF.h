#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KOPCPKCPPIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71D9A0)

	class KOPCPKCPPIF : public ::System::Object
	{
	public:
		::System::UInt32 MHHIKFDCELA; // 0x10
		::System::UInt32 FDOELDMEBPE; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPCPKCPPIF_CTOR_OFFSET))(this);
		}

	};
