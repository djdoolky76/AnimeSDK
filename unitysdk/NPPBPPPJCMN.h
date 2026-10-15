#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGMMFJHJECA.h"
namespace RPG::Client { class FateBuffData; }

#define NPPBPPPJCMN_CTOR_OFFSET UNITYSDK_OFFSET(0xBD136C0)
#define NPPBPPPJCMN_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xBD136D0)
#define NPPBPPPJCMN__EVALUATE_B__1_0_OFFSET UNITYSDK_OFFSET(0xBD139B0)

inline static constexpr unsigned int NPPBPPPJCMN_TypeDefinitionIndex = 64136;

	class NPPBPPPJCMN : public ::HGMMFJHJECA
	{
	public:
		::System::UInt32 BDHMCFLOEOC; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPPBPPPJCMN_CTOR_OFFSET))(this, a1);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPBPPPJCMN_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Boolean _Evaluate_b__1_0(::RPG::Client::FateBuffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateBuffData*))((::PBYTE)hIl2Cpp + NPPBPPPJCMN__EVALUATE_B__1_0_OFFSET))(this, a1);
		}

	};
