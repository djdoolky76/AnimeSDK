#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
class IAJLOFLABIB;
namespace System { class String; }

#define IAJLOFLABIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDABD0)
#define IAJLOFLABIB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEDABE0)
#define IAJLOFLABIB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEDAB80)

	class IAJLOFLABIB : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::String* EDLFBJEJJPB; // 0x10
		::System::String* NBAPNNJAJLE; // 0x18
		::System::String* AJMDINFOJLE; // 0x20
		::System::String* HHALMPFBJPC; // 0x28
		::System::Single GECLIFGNLKM; // 0x30
		::System::UInt32 MAGEFLCHECM; // 0x34
		::System::Boolean NPBLOMFBHBH; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 IMKHIDEBGEB; // 0x3C
		::System::UInt32 FLIEDGKFNOL; // 0x40
		::System::Single JLLFPNIFOMB; // 0x44
		::System::UInt32 OBCOHALAFNG; // 0x48
		::System::Single JOACOBOICAF; // 0x4C
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
