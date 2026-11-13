#pragma once
#include "unitysdk/unitysdk.h"
class AKPJIJPHHKN;
namespace RPG::GameCore { class TaskContext; }

#define EGNDNEPDDJD_ANIBGMNOJOG_OFFSET UNITYSDK_OFFSET(0x17C1B2B0)
#define EGNDNEPDDJD_CTOR_OFFSET UNITYSDK_OFFSET(0x17C1AFC0)
#define EGNDNEPDDJD_GOIKDODLAAF_OFFSET UNITYSDK_OFFSET(0x17C1B050)
#define EGNDNEPDDJD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C1AFF0)

inline static constexpr unsigned int EGNDNEPDDJD_TypeDefinitionIndex = 53811;

	class EGNDNEPDDJD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AKPJIJPHHKN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AKPJIJPHHKN*))((::PBYTE)hIl2Cpp + EGNDNEPDDJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNDNEPDDJD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void GOIKDODLAAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNDNEPDDJD_GOIKDODLAAF_OFFSET))(this);
		}

		::System::Void ANIBGMNOJOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNDNEPDDJD_ANIBGMNOJOG_OFFSET))(this);
		}

	};
