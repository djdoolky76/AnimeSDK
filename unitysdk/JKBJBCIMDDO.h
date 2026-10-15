#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class JKBJBCIMDDO;
namespace System { class String; }

#define JKBJBCIMDDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D03F720)
#define JKBJBCIMDDO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D03F490)

inline static constexpr unsigned int JKBJBCIMDDO_TypeDefinitionIndex = 22868;

	class JKBJBCIMDDO : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* IHHJGPJLNGD; // 0x10
		::System::String* CEJBDKKJPBN; // 0x18
		::System::Single IEFLOMPIIAK; // 0x20
		::System::Single AABCFBDDNIE; // 0x24
		::System::Boolean KMFHIAABCOC; // 0x28
		::System::Boolean GBPJCBMDNAN; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBJBCIMDDO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JKBJBCIMDDO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JKBJBCIMDDO*))((::PBYTE)hIl2Cpp + JKBJBCIMDDO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
