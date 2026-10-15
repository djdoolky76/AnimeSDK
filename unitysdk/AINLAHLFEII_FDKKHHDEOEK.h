#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMPNPPMLNPH.h"
#include "unitysdk/LKLOMEEPIEM.h"
#include "unitysdk/System/Nullable_1.h"
class AINLAHLFEII;
namespace RPG::GameCore { class FreeStyleController; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }

#define AINLAHLFEII_FDKKHHDEOEK_CTOR_OFFSET UNITYSDK_OFFSET(0x12CA46A0)
#define AINLAHLFEII_FDKKHHDEOEK_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x12CA84B0)

inline static constexpr unsigned int AINLAHLFEII_FDKKHHDEOEK_TypeDefinitionIndex = 57278;

	class AINLAHLFEII_FDKKHHDEOEK : public ::IMPNPPMLNPH
	{
	public:
		::RPG::GameCore::FreeStyleMotionInfoConfig* CIKPBGDIABO; // 0x10
		::System::Int32 PLMMBJPPJKL; // 0x18
		::System::Nullable_1<::LKLOMEEPIEM> JBMDOCDAKMH; // 0x1C
		::System::Byte _padding0[0x1C];
		::System::UInt32 BBBOEBDNOHD; // 0x40
		::System::Void _ctor(::AINLAHLFEII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AINLAHLFEII*))((::PBYTE)hIl2Cpp + AINLAHLFEII_FDKKHHDEOEK_CTOR_OFFSET))(this, a1);
		}

		::System::Void PKADDEPKJFN(::RPG::GameCore::FreeStyleController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleController*))((::PBYTE)hIl2Cpp + AINLAHLFEII_FDKKHHDEOEK_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
