#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/CirticalTrackType.h"
#include "unitysdk/System/Object.h"
class ALMFLCJCHKP;
class JPFAMCGMHEL;
class LMFOOOLDECA;

#define AIAMKDMMJFE_CTOR_OFFSET UNITYSDK_OFFSET(0xEB91600)
#define AIAMKDMMJFE_FKFDADNHMLJ_OFFSET UNITYSDK_OFFSET(0xEB91B20)
#define AIAMKDMMJFE_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xEB91610)

	class AIAMKDMMJFE : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::LMFOOOLDECA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + AIAMKDMMJFE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean PKADDEPKJFN(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::JPFAMCGMHEL* a3, ::RPG::Client::LittleGame::ChenLing::CirticalTrackType a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::JPFAMCGMHEL*, ::RPG::Client::LittleGame::ChenLing::CirticalTrackType))((::PBYTE)hIl2Cpp + AIAMKDMMJFE_PKADDEPKJFN_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::LittleGame::ChenLing::CirticalTrackType FKFDADNHMLJ(::ALMFLCJCHKP* a1)
		{
			return ((::RPG::Client::LittleGame::ChenLing::CirticalTrackType(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + AIAMKDMMJFE_FKFDADNHMLJ_OFFSET))(this, a1);
		}

	};
