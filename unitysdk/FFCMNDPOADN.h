#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FFCMNDPOADN;
namespace System { class String; }

#define FFCMNDPOADN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB6470)
#define FFCMNDPOADN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDB6490)
#define FFCMNDPOADN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDB6420)

inline static constexpr unsigned int FFCMNDPOADN_TypeDefinitionIndex = 21493;

	class FFCMNDPOADN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CDMFNHJGGKF; // 0x18
		::System::Boolean FIKBKDJAFON; // 0x20
		::System::Boolean IOBJFEJFLJP; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single IIPKCANDFBK; // 0x24
		::RPG::GameCore::PPEffectFilterPriorityGroup OMJNGMHJPBD; // 0x28
		::RPG::GameCore::PPEffectFilterPriority NALMBOOCCIN; // 0x2C
		::System::Single JGNDPDFEBBO; // 0x30
		::System::Single IEHPFADHJFD; // 0x34
		::System::Single KFLFCJLBCBC; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCMNDPOADN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FFCMNDPOADN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFCMNDPOADN*))((::PBYTE)hIl2Cpp + FFCMNDPOADN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FFCMNDPOADN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFCMNDPOADN*))((::PBYTE)hIl2Cpp + FFCMNDPOADN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
