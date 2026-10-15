#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialBPDisplayStyle.h"
#include "unitysdk/System/Object.h"

#define LJABAMCMDLI_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D8490)
#define LJABAMCMDLI_HCEMCBLDIFD_OFFSET UNITYSDK_OFFSET(0xB6D83E0)
#define LJABAMCMDLI_MGKOOCKFANI_OFFSET UNITYSDK_OFFSET(0xB6D8440)
#define LJABAMCMDLI_NBNFDFKDBCI_OFFSET UNITYSDK_OFFSET(0xB6D8380)

inline static constexpr unsigned int LJABAMCMDLI_TypeDefinitionIndex = 71495;

	class LJABAMCMDLI : public ::System::Object
	{
	public:
		::System::Boolean NCNEFLDKEHJ; // 0x10
		::System::Boolean GBAKKEJICJO; // 0x11
		::System::Boolean CAGCHKJHMPD; // 0x12
		::System::Byte _padding0[0x1];
		::RPG::GameCore::SpecialBPDisplayStyle CONJNAGLPDO; // 0x14
		::System::Int32 IFLBAAABKAI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJABAMCMDLI_CTOR_OFFSET))(this);
		}

		::System::Boolean NBNFDFKDBCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJABAMCMDLI_NBNFDFKDBCI_OFFSET))(this);
		}

		::System::Boolean HCEMCBLDIFD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJABAMCMDLI_HCEMCBLDIFD_OFFSET))(this);
		}

		::System::Boolean MGKOOCKFANI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJABAMCMDLI_MGKOOCKFANI_OFFSET))(this);
		}

	};
