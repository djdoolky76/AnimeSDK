#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleHideAuxiliaryLine; }

#define DALKKABIAGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E5A50)
#define DALKKABIAGJ_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C9E5A60)

inline static constexpr unsigned int DALKKABIAGJ_TypeDefinitionIndex = 43123;

	class DALKKABIAGJ : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleHideAuxiliaryLine* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleHideAuxiliaryLine* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleHideAuxiliaryLine*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + DALKKABIAGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DALKKABIAGJ_KDNAAOHECPD_OFFSET))(this);
		}

	};
