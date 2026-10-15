#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinPrepareFightTalker.h"
#include "unitysdk/System/Object.h"
class MFKCHBKHKLO;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define MFKCHBKHKLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB904FD0)
#define MFKCHBKHKLO_CTOR_OFFSET UNITYSDK_OFFSET(0xB904600)
#define MFKCHBKHKLO_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xB905000)
#define MFKCHBKHKLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB904A20)
#define MFKCHBKHKLO_EQUALS_OFFSET UNITYSDK_OFFSET(0xB904F60)
#define MFKCHBKHKLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB904CA0)
#define MFKCHBKHKLO_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xB904610)
#define MFKCHBKHKLO_GET_TALKER_OFFSET UNITYSDK_OFFSET(0xB904640)
#define MFKCHBKHKLO_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xB904660)
#define MFKCHBKHKLO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB904A00)
#define MFKCHBKHKLO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB9049D0)
#define MFKCHBKHKLO_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xB904840)
#define MFKCHBKHKLO_SET_TALKER_OFFSET UNITYSDK_OFFSET(0xB904650)
#define MFKCHBKHKLO_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xB904670)
#define MFKCHBKHKLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB904680)
#define MFKCHBKHKLO__CLONE___OFFSET UNITYSDK_OFFSET(0xB904F90)

inline static constexpr unsigned int MFKCHBKHKLO_TypeDefinitionIndex = 80753;

	class MFKCHBKHKLO : public ::System::Object
	{
	public:
		::RPG::Client::TextID _Text_k__BackingField; // 0x10
		::RPG::GameCore::FateRinPrepareFightTalker _Talker_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::GameCore::FateRinPrepareFightTalker a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinPrepareFightTalker, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MFKCHBKHKLO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::MFKCHBKHKLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFKCHBKHKLO*))((::PBYTE)hIl2Cpp + MFKCHBKHKLO_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKCHBKHKLO_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::RPG::GameCore::FateRinPrepareFightTalker get_Talker()
		{
			return ((::RPG::GameCore::FateRinPrepareFightTalker(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKCHBKHKLO_GET_TALKER_OFFSET))(this);
		}

		::System::Void set_Talker(::RPG::GameCore::FateRinPrepareFightTalker a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinPrepareFightTalker))((::PBYTE)hIl2Cpp + MFKCHBKHKLO_SET_TALKER_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Text()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKCHBKHKLO_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MFKCHBKHKLO_SET_TEXT_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKCHBKHKLO_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + MFKCHBKHKLO_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::MFKCHBKHKLO* a1, ::MFKCHBKHKLO* a2)
		{
			return ((::System::Boolean(*)(::MFKCHBKHKLO*, ::MFKCHBKHKLO*))((::PBYTE)hIl2Cpp + MFKCHBKHKLO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::MFKCHBKHKLO* a1, ::MFKCHBKHKLO* a2)
		{
			return ((::System::Boolean(*)(::MFKCHBKHKLO*, ::MFKCHBKHKLO*))((::PBYTE)hIl2Cpp + MFKCHBKHKLO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKCHBKHKLO_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFKCHBKHKLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MFKCHBKHKLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFKCHBKHKLO*))((::PBYTE)hIl2Cpp + MFKCHBKHKLO_EQUALS_1_OFFSET))(this, a1);
		}

		::MFKCHBKHKLO* _Clone__()
		{
			return ((::MFKCHBKHKLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKCHBKHKLO__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::RPG::GameCore::FateRinPrepareFightTalker a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinPrepareFightTalker, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MFKCHBKHKLO_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
