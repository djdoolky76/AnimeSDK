#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class BEHKFEIHCDG;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define BEHKFEIHCDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD010A0)
#define BEHKFEIHCDG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD011A0)
#define BEHKFEIHCDG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD00F70)

	class BEHKFEIHCDG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* IGJJKEHKJOI; // 0x18
		::RPG::GameCore::DynamicFloat* CFAHJNIEMEM; // 0x20
		::RPG::GameCore::DynamicFloat* JODPHBJFOPL; // 0x28
		::RPG::GameCore::DynamicFloat* MAIMGNJKMEJ; // 0x30
		::RPG::GameCore::DynamicString* EALNBEBALJM; // 0x38
		::System::Boolean OPBKCOJPOPI; // 0x40
		::System::Byte _padding0[0x3];
		::RPG::MVector3 KCFICHILJEM; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHKFEIHCDG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BEHKFEIHCDG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BEHKFEIHCDG*))((::PBYTE)hIl2Cpp + BEHKFEIHCDG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BEHKFEIHCDG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BEHKFEIHCDG*))((::PBYTE)hIl2Cpp + BEHKFEIHCDG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
