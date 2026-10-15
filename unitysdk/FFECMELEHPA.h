#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ItemConfig; }

#define FFECMELEHPA_COMPARE_OFFSET UNITYSDK_OFFSET(0x15727900)
#define FFECMELEHPA_CTOR_OFFSET UNITYSDK_OFFSET(0x157279D0)

inline static constexpr unsigned int FFECMELEHPA_TypeDefinitionIndex = 61700;

	class FFECMELEHPA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFECMELEHPA_CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::GameCore::ItemConfig* a1, ::RPG::GameCore::ItemConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + FFECMELEHPA_COMPARE_OFFSET))(this, a1, a2);
		}

	};
