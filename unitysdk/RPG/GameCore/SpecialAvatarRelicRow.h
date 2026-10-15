#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
class OKGJHHOHIIJ;
namespace RPG::GameCore { class SpecialAvatarRelicRow; }
namespace System { class String; }

#define RPG_GAMECORE_SPECIALAVATARRELICROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACFBB0)
#define RPG_GAMECORE_SPECIALAVATARRELICROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1DACF900)
#define RPG_GAMECORE_SPECIALAVATARRELICROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DACFA50)
#define RPG_GAMECORE_SPECIALAVATARRELICROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1DACFBC0)
#define RPG_GAMECORE_SPECIALAVATARRELICROW_RESET_OFFSET UNITYSDK_OFFSET(0x1DACFC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarRelicRow_TypeDefinitionIndex = 15117;

	class SpecialAvatarRelicRow : public ::System::Object
	{
	public:
		::Il2CppArray<::OKGJHHOHIIJ*>* RelicIDList; // 0x10
		::System::String* Comment2; // 0x18
		::System::UInt32 RelicPropertyType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialAvatarRelicRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialAvatarRelicRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialAvatarRelicRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialAvatarRelicRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_RESET_OFFSET))(this);
		}

	};
}
