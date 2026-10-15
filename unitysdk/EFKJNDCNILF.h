#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace System { class Action; }
namespace System { class String; }

#define EFKJNDCNILF_CTOR_OFFSET UNITYSDK_OFFSET(0x13A566F0)
#define EFKJNDCNILF_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x13A56700)
#define EFKJNDCNILF_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x13A56750)

	class EFKJNDCNILF : public ::System::Object
	{
	public:
		::RPG::GameCore::FloorCustomValueConfig* IGHAHBNLIJA; // 0x10
		::System::Action* PBJAENMIKEJ; // 0x18
		::System::Void _ctor(::RPG::GameCore::FloorCustomValueConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + EFKJNDCNILF_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKJNDCNILF_MJGKNFEILLI_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKJNDCNILF_MLMGEFIOION_OFFSET))(this);
		}

	};
