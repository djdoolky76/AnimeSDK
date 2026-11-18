#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNMACLJACAA.h"
#include "unitysdk/JEOPNELGEIC.h"
#include "unitysdk/KJCAGEJFMBH.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class NBKGFBNJAEP;

#define JCOFBNAJIJI_DBDALNLCMFH_OFFSET UNITYSDK_OFFSET(0x14A54180)
#define JCOFBNAJIJI_EAHAHGEDJND_OFFSET UNITYSDK_OFFSET(0x14A53970)
#define JCOFBNAJIJI_HLDHILFOKBH_OFFSET UNITYSDK_OFFSET(0x14A54200)
#define JCOFBNAJIJI__CTOR_OFFSET UNITYSDK_OFFSET(0x14A53960)

inline static constexpr unsigned int JCOFBNAJIJI_TypeDefinitionIndex = 81800;

class JCOFBNAJIJI : public ::LNMACLJACAA
{
public:
	::System::Void _ctor(::NBKGFBNJAEP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::NBKGFBNJAEP*))((::PBYTE)hIl2Cpp + JCOFBNAJIJI__CTOR_OFFSET))(this, AAOCANGHBDG);
	}

	::JEOPNELGEIC EAHAHGEDJND()
	{
		return ((::JEOPNELGEIC(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOFBNAJIJI_EAHAHGEDJND_OFFSET))(this);
	}

	::KJCAGEJFMBH DBDALNLCMFH(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::KJCAGEJFMBH(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + JCOFBNAJIJI_DBDALNLCMFH_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Boolean HLDHILFOKBH(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::Single& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Single&))((::PBYTE)hIl2Cpp + JCOFBNAJIJI_HLDHILFOKBH_OFFSET))(this, EKPEBNCLJPM, IGAAKDOIPNN);
	}
};
