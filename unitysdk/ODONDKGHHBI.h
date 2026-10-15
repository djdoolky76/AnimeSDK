#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ExtraEffectRow; }

#define ODONDKGHHBI_CBHGELFFLKG_OFFSET UNITYSDK_OFFSET(0xBDF2150)
#define ODONDKGHHBI_CTOR_OFFSET UNITYSDK_OFFSET(0xBDF21C0)

inline static constexpr unsigned int ODONDKGHHBI_TypeDefinitionIndex = 81047;

	class ODONDKGHHBI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODONDKGHHBI_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ExtraEffectRow* CBHGELFFLKG(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ExtraEffectRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODONDKGHHBI_CBHGELFFLKG_OFFSET))(this, a1);
		}

	};
