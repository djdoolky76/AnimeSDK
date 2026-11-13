#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EFKJNDCNILF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A340F00)
#define EFKJNDCNILF_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x1A340F10)
#define EFKJNDCNILF_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1A340F60)

inline static constexpr unsigned int EFKJNDCNILF_TypeDefinitionIndex = 63495;

	class EFKJNDCNILF : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* PBJAENMIKEJ; // 0x10
		::RPG::GameCore::FloorCustomValueConfig* IGHAHBNLIJA; // 0x18
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
