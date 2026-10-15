#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEraFlipSpotOutlineEdgeParam; }
namespace RPG::GameCore { class TaskContext; }

#define EINFHIFAAHP_CTOR_OFFSET UNITYSDK_OFFSET(0x154D32D0)
#define EINFHIFAAHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154D3300)

inline static constexpr unsigned int EINFHIFAAHP_TypeDefinitionIndex = 52771;

	class EINFHIFAAHP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEraFlipSpotOutlineEdgeParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEraFlipSpotOutlineEdgeParam*))((::PBYTE)hIl2Cpp + EINFHIFAAHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINFHIFAAHP_ONTASKBEGIN_OFFSET))(this);
		}

	};
