#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class SpecialNPCDataRow; }
namespace System { class String; }

#define KNDOCIJHHFA_CTOR_OFFSET UNITYSDK_OFFSET(0xB581750)

inline static constexpr unsigned int KNDOCIJHHFA_TypeDefinitionIndex = 68105;

	class KNDOCIJHHFA : public ::System::Object
	{
	public:
		::System::String* IFIKOCPHOAP; // 0x10
		::RPG::GameCore::SpecialNPCDataRow* NKFANPJFKFN; // 0x18
		::System::UInt32 FDOELDMEBPE; // 0x20
		::System::UInt32 GAKJEOCGEIN; // 0x24
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNDOCIJHHFA_CTOR_OFFSET))(this, a1);
		}

	};
