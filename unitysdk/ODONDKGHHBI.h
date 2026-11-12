#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ExtraEffectRow; }

#define ODONDKGHHBI_CBHGELFFLKG_OFFSET UNITYSDK_OFFSET(0xC6A7AC0)
#define ODONDKGHHBI_CTOR_OFFSET UNITYSDK_OFFSET(0xC6A7B30)

inline static constexpr unsigned int ODONDKGHHBI_TypeDefinitionIndex = 83827;

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
