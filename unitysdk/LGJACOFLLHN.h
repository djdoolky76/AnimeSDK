#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LGJACOFLLHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90EB10)

	class LGJACOFLLHN : public ::System::Object
	{
	public:
		::System::Single FEKKPGELGHI; // 0x10
		::System::Single NFENNANEDJB; // 0x14
		::System::Single OCKFJLDILHE; // 0x18
		::System::Single JNJBMONIPLP; // 0x1C
		::System::Single PGFBFDJIDLM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGJACOFLLHN_CTOR_OFFSET))(this);
		}

	};
