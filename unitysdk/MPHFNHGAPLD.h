#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MPHFNHGAPLD_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3E380)
#define MPHFNHGAPLD_GETNODEICON_OFFSET UNITYSDK_OFFSET(0xBA3E340)

inline static constexpr unsigned int MPHFNHGAPLD_TypeDefinitionIndex = 75157;

	class MPHFNHGAPLD : public ::System::Object
	{
	public:
		::System::String* FCDDMEAANPH; // 0x10
		::System::Void _ctor(::RPG::GameCore::IdleLiveNodeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveNodeType))((::PBYTE)hIl2Cpp + MPHFNHGAPLD_CTOR_OFFSET))(this, a1);
		}

		::System::String* GetNodeIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHFNHGAPLD_GETNODEICON_OFFSET))(this);
		}

	};
