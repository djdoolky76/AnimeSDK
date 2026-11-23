#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F37EA96937710617/FCD368AF543E08A7.h"
#include "unitysdk/F37EA96937710617/FD2F0AEDF9CF14A7.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define AA1C22385B58DE8C_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x3CECA40)
#define AA1C22385B58DE8C_AD6ACF3F23CE9BBA_OFFSET UNITYSDK_OFFSET(0x3CECAE0)
#define AA1C22385B58DE8C_B55F110FE70C0B40_OFFSET UNITYSDK_OFFSET(0x3CECAA0)
#define AA1C22385B58DE8C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AA1C22385B58DE8C_TypeDefinitionIndex = 10712;

class AA1C22385B58DE8C : public ::System::Object
{
public:
	::System::String* A3A89762EDDFCE42; // 0x10
	::System::Int64 F15F8FDE40D7EE89; // 0x18
	::System::Int64 EE567F1896F4604E; // 0x20
	::F37EA96937710617::FD2F0AEDF9CF14A7 EB355F4C0ABEE0AE; // 0x28
	::System::Byte _padding0[0x4];
	::System::Type* BCF7842658C90C0E; // 0x30
	::System::Boolean A295F53D68AD096B; // 0x38
	::System::Boolean ADDEA2A4B083CDDD; // 0x39
	::System::Boolean E3FA485EC3D4847E; // 0x3A
	::System::Boolean EC255E394FBB0A84; // 0x3B
	::System::Boolean BB988B0338548F76; // 0x3C
	::System::Boolean A651B409B34C1D96; // 0x3D
	::System::Byte _padding1[0x2];
	::F37EA96937710617::FCD368AF543E08A7 BE0DFC8D20F0A1B8; // 0x40
	::System::Boolean A5616071300928F2; // 0x44

	::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA1C22385B58DE8C_A1E97155B145443C_OFFSET))(this);
	}

	::System::String* AD6ACF3F23CE9BBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AA1C22385B58DE8C_AD6ACF3F23CE9BBA_OFFSET))(this);
	}

	::System::Boolean B55F110FE70C0B40()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AA1C22385B58DE8C_B55F110FE70C0B40_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA1C22385B58DE8C__CTOR_OFFSET))(this);
	}
};
