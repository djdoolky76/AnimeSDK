#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CharacterDisableLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define CKIJHFFNBNF_CTOR_OFFSET UNITYSDK_OFFSET(0xD75E350)
#define CKIJHFFNBNF_EDNJAFJEPJF_OFFSET UNITYSDK_OFFSET(0xD75E690)
#define CKIJHFFNBNF_KAKJEGBHHEI_OFFSET UNITYSDK_OFFSET(0xD75E3D0)
#define CKIJHFFNBNF_NDBOOAEKNMC_OFFSET UNITYSDK_OFFSET(0xD75E680)
#define CKIJHFFNBNF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD75E380)

	class CKIJHFFNBNF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterDisableLookAt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterDisableLookAt*))((::PBYTE)hIl2Cpp + CKIJHFFNBNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIJHFFNBNF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void KAKJEGBHHEI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKIJHFFNBNF_KAKJEGBHHEI_OFFSET))(this, a1);
		}

		::System::Boolean NDBOOAEKNMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIJHFFNBNF_NDBOOAEKNMC_OFFSET))(this);
		}

		::System::Void EDNJAFJEPJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIJHFFNBNF_EDNJAFJEPJF_OFFSET))(this);
		}

	};
