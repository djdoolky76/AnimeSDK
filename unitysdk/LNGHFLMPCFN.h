#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class JFKNHCMPADM;
class OKIBHNGFOLI;
namespace RPG::Client { class QuestData; }

#define LNGHFLMPCFN_CTOR_OFFSET UNITYSDK_OFFSET(0xB7D79B0)
#define LNGHFLMPCFN_DCGMMPIJCDB_OFFSET UNITYSDK_OFFSET(0xB7D7D70)
#define LNGHFLMPCFN_FDNFPCBBIKA_OFFSET UNITYSDK_OFFSET(0xB7D7EA0)
#define LNGHFLMPCFN_LADJOLNJBIK_OFFSET UNITYSDK_OFFSET(0xB7D7DE0)
#define LNGHFLMPCFN_LMICHKBKAPN_OFFSET UNITYSDK_OFFSET(0xB7D7C40)
#define LNGHFLMPCFN_MHOGDEIPMJH_OFFSET UNITYSDK_OFFSET(0xB7D79C0)
#define LNGHFLMPCFN_MJNALEIJGFM_OFFSET UNITYSDK_OFFSET(0xB7D7BE0)
#define LNGHFLMPCFN_PHGCJNJHENI_OFFSET UNITYSDK_OFFSET(0xB7D7F50)

inline static constexpr unsigned int LNGHFLMPCFN_TypeDefinitionIndex = 82105;

	class LNGHFLMPCFN : public ::System::Object
	{
	public:
		::OKIBHNGFOLI* JDGBDKHIEGG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGHFLMPCFN_CTOR_OFFSET))(this);
		}

		::JFKNHCMPADM* MHOGDEIPMJH()
		{
			return ((::JFKNHCMPADM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGHFLMPCFN_MHOGDEIPMJH_OFFSET))(this);
		}

		::System::Boolean MJNALEIJGFM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGHFLMPCFN_MJNALEIJGFM_OFFSET))(this);
		}

		::System::Void DCGMMPIJCDB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LNGHFLMPCFN_DCGMMPIJCDB_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID LADJOLNJBIK()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGHFLMPCFN_LADJOLNJBIK_OFFSET))(this);
		}

		::System::Boolean FDNFPCBBIKA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGHFLMPCFN_FDNFPCBBIKA_OFFSET))(this);
		}

		::System::Void PHGCJNJHENI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGHFLMPCFN_PHGCJNJHENI_OFFSET))(this);
		}

		::RPG::Client::QuestData* LMICHKBKAPN()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGHFLMPCFN_LMICHKBKAPN_OFFSET))(this);
		}

	};
