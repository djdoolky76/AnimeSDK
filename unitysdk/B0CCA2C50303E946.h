#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F37EA96937710617/FBEF558F24F0B294.h"
#include "unitysdk/System/Object.h"

class AF234E8204C67E80;
class F5C7E3E7BF78F5D8;
namespace System { class Array; }
namespace System { class String; }
namespace System::Reflection { class MemberInfo; }

#define B0CCA2C50303E946_BF7F00DBAC68A018_OFFSET UNITYSDK_OFFSET(0x3BD9B20)
#define B0CCA2C50303E946__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BD9E70)
#define B0CCA2C50303E946__CTOR_OFFSET UNITYSDK_OFFSET(0x3BD9ED0)

inline static constexpr unsigned int B0CCA2C50303E946_TypeDefinitionIndex = 11229;

class B0CCA2C50303E946 : public ::System::Object
{
public:
	static ::System::Reflection::MemberInfo** StaticGet_E63C665B6092FDF7()
	{
		return (::System::Reflection::MemberInfo**)Il2CppClass::FromTypeDefinitionIndex(B0CCA2C50303E946_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::F37EA96937710617::FBEF558F24F0B294 F62924E77D15EF37; // 0x10
	::System::Byte _padding0[0x4];
	::System::Array* E1E33ED7613A8B3A; // 0x18
	::Il2CppArray<::System::Int32>* FDDD5F3680EB70A6; // 0x20
	::System::Object* A6E476DEDB99637C; // 0x28
	::System::Object* F202BA94090F23B6; // 0x30
	::AF234E8204C67E80* E85A86B5AF5A7C1A; // 0x38
	::System::String* FA01EC0C56CB1DBC; // 0x40

	::System::Void BF7F00DBAC68A018(::F5C7E3E7BF78F5D8* B4E4937C5E1E0450, ::F5C7E3E7BF78F5D8* EFE497ABF6BF98D8)
	{
		return ((::System::Void(*)(::PVOID, ::F5C7E3E7BF78F5D8*, ::F5C7E3E7BF78F5D8*))((::PBYTE)hIl2Cpp + B0CCA2C50303E946_BF7F00DBAC68A018_OFFSET))(this, B4E4937C5E1E0450, EFE497ABF6BF98D8);
	}

	::System::Void _ctor(::System::Object* F202BA94090F23B6, ::System::String* FA01EC0C56CB1DBC, ::AF234E8204C67E80* E85A86B5AF5A7C1A)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::AF234E8204C67E80*))((::PBYTE)hIl2Cpp + B0CCA2C50303E946__CTOR_OFFSET))(this, F202BA94090F23B6, FA01EC0C56CB1DBC, E85A86B5AF5A7C1A);
	}

	::System::Void _ctor_1(::System::Array* E1E33ED7613A8B3A, ::Il2CppArray<::System::Int32>* FDDD5F3680EB70A6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Array*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + B0CCA2C50303E946__CTOR_1_OFFSET))(this, E1E33ED7613A8B3A, FDDD5F3680EB70A6);
	}
};
