#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingPropertyRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGPROPERTYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F91B810)
#define RPG_GAMECORE_CHENLINGPROPERTYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F91B5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingPropertyRow_TypeDefinitionIndex = 11075;

	class ChenLingPropertyRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::Int32 Property; // 0x28
		::System::Boolean IsShow; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPROPERTYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingPropertyRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingPropertyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPROPERTYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
