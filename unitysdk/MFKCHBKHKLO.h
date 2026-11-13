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

#define MFKCHBKHKLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C8F130)
#define MFKCHBKHKLO_CTOR_OFFSET UNITYSDK_OFFSET(0x17C8E760)
#define MFKCHBKHKLO_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x17C8F160)
#define MFKCHBKHKLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C8EB80)
#define MFKCHBKHKLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C8F0C0)
#define MFKCHBKHKLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C8EE00)
#define MFKCHBKHKLO_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x17C8E770)
#define MFKCHBKHKLO_GET_TALKER_OFFSET UNITYSDK_OFFSET(0x17C8E7A0)
#define MFKCHBKHKLO_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x17C8E7C0)
#define MFKCHBKHKLO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17C8EB60)
#define MFKCHBKHKLO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17C8EB30)
#define MFKCHBKHKLO_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x17C8E9A0)
#define MFKCHBKHKLO_SET_TALKER_OFFSET UNITYSDK_OFFSET(0x17C8E7B0)
#define MFKCHBKHKLO_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x17C8E7D0)
#define MFKCHBKHKLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C8E7E0)
#define MFKCHBKHKLO__CLONE___OFFSET UNITYSDK_OFFSET(0x17C8F0F0)

inline static constexpr unsigned int MFKCHBKHKLO_TypeDefinitionIndex = 83532;

	class MFKCHBKHKLO : public ::System::Object
	{
	public:
		::RPG::GameCore::FateRinPrepareFightTalker _Talker_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Text_k__BackingField; // 0x18
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
