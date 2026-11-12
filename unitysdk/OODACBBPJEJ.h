#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class OODACBBPJEJ;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define OODACBBPJEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC86FE30)
#define OODACBBPJEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC86F1D0)
#define OODACBBPJEJ_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xC86FE60)
#define OODACBBPJEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xC86F610)
#define OODACBBPJEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0xC86FD60)
#define OODACBBPJEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC86F990)
#define OODACBBPJEJ_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xC86F1E0)
#define OODACBBPJEJ_GET_SENTENCETEXT_OFFSET UNITYSDK_OFFSET(0xC86F230)
#define OODACBBPJEJ_GET_TALKERICONPATH_OFFSET UNITYSDK_OFFSET(0xC86F250)
#define OODACBBPJEJ_GET_TALKNUMBER_OFFSET UNITYSDK_OFFSET(0xC86F210)
#define OODACBBPJEJ_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC86F5F0)
#define OODACBBPJEJ_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC86F5C0)
#define OODACBBPJEJ_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xC86F430)
#define OODACBBPJEJ_SET_SENTENCETEXT_OFFSET UNITYSDK_OFFSET(0xC86F240)
#define OODACBBPJEJ_SET_TALKERICONPATH_OFFSET UNITYSDK_OFFSET(0xC86F260)
#define OODACBBPJEJ_SET_TALKNUMBER_OFFSET UNITYSDK_OFFSET(0xC86F220)
#define OODACBBPJEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC86F270)
#define OODACBBPJEJ__CLONE___OFFSET UNITYSDK_OFFSET(0xC86FDC0)

inline static constexpr unsigned int OODACBBPJEJ_TypeDefinitionIndex = 77065;

	class OODACBBPJEJ : public ::System::Object
	{
	public:
		::System::String* _TalkerIconPath_k__BackingField; // 0x10
		::System::UInt32 _TalkNumber_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _SentenceText_k__BackingField; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::TextID a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + OODACBBPJEJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::OODACBBPJEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OODACBBPJEJ*))((::PBYTE)hIl2Cpp + OODACBBPJEJ_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + OODACBBPJEJ_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::UInt32 get_TalkNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OODACBBPJEJ_GET_TALKNUMBER_OFFSET))(this);
		}

		::System::Void set_TalkNumber(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OODACBBPJEJ_SET_TALKNUMBER_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SentenceText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + OODACBBPJEJ_GET_SENTENCETEXT_OFFSET))(this);
		}

		::System::Void set_SentenceText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + OODACBBPJEJ_SET_SENTENCETEXT_OFFSET))(this, a1);
		}

		::System::String* get_TalkerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OODACBBPJEJ_GET_TALKERICONPATH_OFFSET))(this);
		}

		::System::Void set_TalkerIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OODACBBPJEJ_SET_TALKERICONPATH_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OODACBBPJEJ_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + OODACBBPJEJ_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::OODACBBPJEJ* a1, ::OODACBBPJEJ* a2)
		{
			return ((::System::Boolean(*)(::OODACBBPJEJ*, ::OODACBBPJEJ*))((::PBYTE)hIl2Cpp + OODACBBPJEJ_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::OODACBBPJEJ* a1, ::OODACBBPJEJ* a2)
		{
			return ((::System::Boolean(*)(::OODACBBPJEJ*, ::OODACBBPJEJ*))((::PBYTE)hIl2Cpp + OODACBBPJEJ_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OODACBBPJEJ_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OODACBBPJEJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OODACBBPJEJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OODACBBPJEJ*))((::PBYTE)hIl2Cpp + OODACBBPJEJ_EQUALS_1_OFFSET))(this, a1);
		}

		::OODACBBPJEJ* _Clone__()
		{
			return ((::OODACBBPJEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OODACBBPJEJ__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::System::UInt32 a1, ::RPG::Client::TextID a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + OODACBBPJEJ_DECONSTRUCT_OFFSET))(this, a1, a2, a3);
		}

	};
