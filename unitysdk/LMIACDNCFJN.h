#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define LMIACDNCFJN_CKKGEBFPKAE_OFFSET UNITYSDK_OFFSET(0xB77C2C0)
#define LMIACDNCFJN_CTOR_OFFSET UNITYSDK_OFFSET(0xB77C2A0)

inline static constexpr unsigned int LMIACDNCFJN_TypeDefinitionIndex = 64696;

	class LMIACDNCFJN : public ::System::Object
	{
	public:
		::System::String* Title; // 0x10
		::Il2CppArray<::System::Object*>* RoleList; // 0x18
		::System::UInt32 PlayerLevel; // 0x20
		::System::UInt32 DivisiionID; // 0x24
		::System::UInt32 SectionID; // 0x28
		::System::UInt32 CampID; // 0x2C
		::System::UInt32 ChapterID; // 0x30
		::System::UInt32 UID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIACDNCFJN_CTOR_OFFSET))(this);
		}

		::System::Void CKKGEBFPKAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIACDNCFJN_CKKGEBFPKAE_OFFSET))(this);
		}

	};
