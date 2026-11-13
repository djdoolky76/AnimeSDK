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

#define NCMPHMDJENK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15104520)
#define NCMPHMDJENK_CTOR_OFFSET UNITYSDK_OFFSET(0x151046A0)

inline static constexpr unsigned int NCMPHMDJENK_TypeDefinitionIndex = 84515;

	class NCMPHMDJENK : public ::System::Object
	{
	public:
		::PJAPDCPOBGC* FCCMAEFHDIA; // 0x10
		::JLJMMKPGDGH* MJHHLOPFDNK; // 0x18
		::EHNCBICHIGP* PGJDKJPNJFN; // 0x20
		::IDCOJJANCCK* MPFFGNPIDOA; // 0x28
		::BDHINPLKOPK* GKLKOIJJEKJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMPHMDJENK_CTOR_OFFSET))(this);
		}

		::JKKHGHOAONN* BPLPBPMEODA(::RPG::GameCore::B51RacingContentType a1, ::KBKFLNHFHPF* a2)
		{
			return ((::JKKHGHOAONN*(*)(::PVOID, ::RPG::GameCore::B51RacingContentType, ::KBKFLNHFHPF*))((::PBYTE)hIl2Cpp + NCMPHMDJENK_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
