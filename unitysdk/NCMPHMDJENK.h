#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingContentType.h"
#include "unitysdk/System/Object.h"
class BDHINPLKOPK;
class EHNCBICHIGP;
class IDCOJJANCCK;
class JKKHGHOAONN;
class JLJMMKPGDGH;
class KBKFLNHFHPF;
class PJAPDCPOBGC;

#define NCMPHMDJENK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBB10B60)
#define NCMPHMDJENK_CTOR_OFFSET UNITYSDK_OFFSET(0xBB10CE0)

inline static constexpr unsigned int NCMPHMDJENK_TypeDefinitionIndex = 81734;

	class NCMPHMDJENK : public ::System::Object
	{
	public:
		::JLJMMKPGDGH* MJHHLOPFDNK; // 0x10
		::EHNCBICHIGP* PGJDKJPNJFN; // 0x18
		::BDHINPLKOPK* GKLKOIJJEKJ; // 0x20
		::IDCOJJANCCK* MPFFGNPIDOA; // 0x28
		::PJAPDCPOBGC* FCCMAEFHDIA; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMPHMDJENK_CTOR_OFFSET))(this);
		}

		::JKKHGHOAONN* BPLPBPMEODA(::RPG::GameCore::B51RacingContentType a1, ::KBKFLNHFHPF* a2)
		{
			return ((::JKKHGHOAONN*(*)(::PVOID, ::RPG::GameCore::B51RacingContentType, ::KBKFLNHFHPF*))((::PBYTE)hIl2Cpp + NCMPHMDJENK_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
