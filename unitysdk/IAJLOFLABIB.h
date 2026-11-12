#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
class IAJLOFLABIB;
namespace System { class String; }

#define IAJLOFLABIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CC900)
#define IAJLOFLABIB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E0CC910)
#define IAJLOFLABIB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E0CC8B0)

inline static constexpr unsigned int IAJLOFLABIB_TypeDefinitionIndex = 17015;

	class IAJLOFLABIB : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::String* AJMDINFOJLE; // 0x10
		::System::String* EDLFBJEJJPB; // 0x18
		::System::String* NBAPNNJAJLE; // 0x20
		::System::String* HHALMPFBJPC; // 0x28
		::System::Single JOACOBOICAF; // 0x30
		::System::UInt32 FLIEDGKFNOL; // 0x34
		::System::UInt32 OBCOHALAFNG; // 0x38
		::System::Int32 IMKHIDEBGEB; // 0x3C
		::System::Single GECLIFGNLKM; // 0x40
		::System::UInt32 MAGEFLCHECM; // 0x44
		::System::Single JLLFPNIFOMB; // 0x48
		::System::Boolean NPBLOMFBHBH; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJLOFLABIB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IAJLOFLABIB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IAJLOFLABIB*))((::PBYTE)hIl2Cpp + IAJLOFLABIB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IAJLOFLABIB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IAJLOFLABIB*))((::PBYTE)hIl2Cpp + IAJLOFLABIB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
