#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODLJOLJDLNI.h"
namespace System { class String; }

#define NEFPADIOLPB_CTOR_OFFSET UNITYSDK_OFFSET(0xBB5D800)
#define NEFPADIOLPB_HKILPOPCDPJ_OFFSET UNITYSDK_OFFSET(0xBB5D5B0)

	class NEFPADIOLPB : public ::ODLJOLJDLNI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFPADIOLPB_CTOR_OFFSET))(this);
		}

		::System::String* HKILPOPCDPJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NEFPADIOLPB_HKILPOPCDPJ_OFFSET))(this, a1, a2);
		}

	};
