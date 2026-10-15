#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameFormation; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define KBINKDLPOEB_CMNFABLLBJN_OFFSET UNITYSDK_OFFSET(0xB302330)
#define KBINKDLPOEB_IFOBEGBPABN_OFFSET UNITYSDK_OFFSET(0xB3016A0)
#define KBINKDLPOEB_KJJFKCIHPPJ_OFFSET UNITYSDK_OFFSET(0xB302120)
#define KBINKDLPOEB_MKPIFPKICFJ_OFFSET UNITYSDK_OFFSET(0xB301980)
#define KBINKDLPOEB_MOOBBPMKELO_OFFSET UNITYSDK_OFFSET(0xB301BB0)

inline static constexpr unsigned int KBINKDLPOEB_TypeDefinitionIndex = 64621;

	class KBINKDLPOEB : public ::System::Object
	{
	public:
		static ::System::Void IFOBEGBPABN(::RPG::Client::GridFightGameFormation* a1, ::System::IO::BinaryReader* a2, ::System::IO::MemoryStream* a3)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightGameFormation*, ::System::IO::BinaryReader*, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + KBINKDLPOEB_IFOBEGBPABN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MKPIFPKICFJ(::System::IO::BinaryWriter* a1, ::RPG::Client::GridFightGameFormation* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + KBINKDLPOEB_MKPIFPKICFJ_OFFSET))(a1, a2);
		}

		static ::System::Void MOOBBPMKELO(::RPG::Client::GridFightGameFormation* a1, ::System::IO::BinaryReader* a2, ::System::IO::MemoryStream* a3)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightGameFormation*, ::System::IO::BinaryReader*, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + KBINKDLPOEB_MOOBBPMKELO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void KJJFKCIHPPJ(::System::IO::BinaryWriter* a1, ::RPG::Client::GridFightGameFormation* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + KBINKDLPOEB_KJJFKCIHPPJ_OFFSET))(a1, a2);
		}

		static ::System::Void CMNFABLLBJN(::RPG::Client::GridFightGameFormation* a1, ::System::IO::BinaryReader* a2, ::System::IO::MemoryStream* a3)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightGameFormation*, ::System::IO::BinaryReader*, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + KBINKDLPOEB_CMNFABLLBJN_OFFSET))(a1, a2, a3);
		}

	};
