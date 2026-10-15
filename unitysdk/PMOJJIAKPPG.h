#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinSwitchDayTalker.h"
#include "unitysdk/System/Object.h"
class PMOJJIAKPPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define PMOJJIAKPPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC329E10)
#define PMOJJIAKPPG_CTOR_OFFSET UNITYSDK_OFFSET(0xC329150)
#define PMOJJIAKPPG_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xC329E40)
#define PMOJJIAKPPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xC3295C0)
#define PMOJJIAKPPG_EQUALS_OFFSET UNITYSDK_OFFSET(0xC329D50)
#define PMOJJIAKPPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC329960)
#define PMOJJIAKPPG_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xC329160)
#define PMOJJIAKPPG_GET_TALKER_OFFSET UNITYSDK_OFFSET(0xC3291B0)
#define PMOJJIAKPPG_GET_TALKNO_OFFSET UNITYSDK_OFFSET(0xC329190)
#define PMOJJIAKPPG_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xC3291D0)
#define PMOJJIAKPPG_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC3295A0)
#define PMOJJIAKPPG_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC329570)
#define PMOJJIAKPPG_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xC3293B0)
#define PMOJJIAKPPG_SET_TALKER_OFFSET UNITYSDK_OFFSET(0xC3291C0)
#define PMOJJIAKPPG_SET_TALKNO_OFFSET UNITYSDK_OFFSET(0xC3291A0)
#define PMOJJIAKPPG_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xC3291E0)
#define PMOJJIAKPPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC3291F0)
#define PMOJJIAKPPG__CLONE___OFFSET UNITYSDK_OFFSET(0xC329DB0)

inline static constexpr unsigned int PMOJJIAKPPG_TypeDefinitionIndex = 81067;

	class PMOJJIAKPPG : public ::System::Object
	{
	public:
		::RPG::Client::TextID _Text_k__BackingField; // 0x10
		::RPG::GameCore::FateRinSwitchDayTalker _Talker_k__BackingField; // 0x20
		::System::UInt32 _TalkNo_k__BackingField; // 0x24
		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::FateRinSwitchDayTalker a2, ::RPG::Client::TextID a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FateRinSwitchDayTalker, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::PMOJJIAKPPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMOJJIAKPPG*))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::UInt32 get_TalkNo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_GET_TALKNO_OFFSET))(this);
		}

		::System::Void set_TalkNo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_SET_TALKNO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FateRinSwitchDayTalker get_Talker()
		{
			return ((::RPG::GameCore::FateRinSwitchDayTalker(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_GET_TALKER_OFFSET))(this);
		}

		::System::Void set_Talker(::RPG::GameCore::FateRinSwitchDayTalker a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinSwitchDayTalker))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_SET_TALKER_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Text()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_SET_TEXT_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::PMOJJIAKPPG* a1, ::PMOJJIAKPPG* a2)
		{
			return ((::System::Boolean(*)(::PMOJJIAKPPG*, ::PMOJJIAKPPG*))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::PMOJJIAKPPG* a1, ::PMOJJIAKPPG* a2)
		{
			return ((::System::Boolean(*)(::PMOJJIAKPPG*, ::PMOJJIAKPPG*))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PMOJJIAKPPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PMOJJIAKPPG*))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_EQUALS_1_OFFSET))(this, a1);
		}

		::PMOJJIAKPPG* _Clone__()
		{
			return ((::PMOJJIAKPPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOJJIAKPPG__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::System::UInt32 a1, ::RPG::GameCore::FateRinSwitchDayTalker a2, ::RPG::Client::TextID a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FateRinSwitchDayTalker, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + PMOJJIAKPPG_DECONSTRUCT_OFFSET))(this, a1, a2, a3);
		}

	};
