#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class SkillData; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define NFBKGADNBBO_BCPFLKOFNIF_OFFSET UNITYSDK_OFFSET(0xBB71D70)
#define NFBKGADNBBO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB71E80)
#define NFBKGADNBBO_FLHHOEAHFPB_OFFSET UNITYSDK_OFFSET(0xBB71CE0)
#define NFBKGADNBBO_JBEIIFLCADG_OFFSET UNITYSDK_OFFSET(0xBB71DF0)

inline static constexpr unsigned int NFBKGADNBBO_TypeDefinitionIndex = 57668;

	class NFBKGADNBBO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::RPG::GameCore::SkillData*>* DMFCMIMHLGD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBKGADNBBO_CTOR_OFFSET))(this);
		}

		::System::Void FLHHOEAHFPB(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + NFBKGADNBBO_FLHHOEAHFPB_OFFSET))(this, a1);
		}

		::RPG::GameCore::SkillData* BCPFLKOFNIF()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBKGADNBBO_BCPFLKOFNIF_OFFSET))(this);
		}

		::RPG::GameCore::SkillData* JBEIIFLCADG()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBKGADNBBO_JBEIIFLCADG_OFFSET))(this);
		}

	};
