#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EOKEPOEOCBJ;
class FCOEMCEDLNL;
namespace System { class String; }

#define EOKEPOEOCBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD8C920)
#define EOKEPOEOCBJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD8C930)
#define EOKEPOEOCBJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD8C8E0)

inline static constexpr unsigned int EOKEPOEOCBJ_TypeDefinitionIndex = 24112;

	class EOKEPOEOCBJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* MKGLDELKOJF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKEPOEOCBJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EOKEPOEOCBJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EOKEPOEOCBJ*))((::PBYTE)hIl2Cpp + EOKEPOEOCBJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EOKEPOEOCBJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EOKEPOEOCBJ*))((::PBYTE)hIl2Cpp + EOKEPOEOCBJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
