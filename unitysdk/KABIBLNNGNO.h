#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNAIELOHEFF.h"
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define KABIBLNNGNO_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D0EC0)
#define KABIBLNNGNO_EOFLNMDNGNI_OFFSET UNITYSDK_OFFSET(0xB2D1170)
#define KABIBLNNGNO_MEOIADCCMAK_OFFSET UNITYSDK_OFFSET(0xB2D1040)
#define KABIBLNNGNO_MJDGLDPCBOG_OFFSET UNITYSDK_OFFSET(0xB2D10F0)

	class KABIBLNNGNO : public ::BNAIELOHEFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + KABIBLNNGNO_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 MEOIADCCMAK(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + KABIBLNNGNO_MEOIADCCMAK_OFFSET))(this, a1, a2);
		}

		::System::UInt32 MJDGLDPCBOG(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KABIBLNNGNO_MJDGLDPCBOG_OFFSET))(this, a1);
		}

		::System::UInt32 EOFLNMDNGNI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KABIBLNNGNO_EOFLNMDNGNI_OFFSET))(this, a1, a2);
		}

	};
