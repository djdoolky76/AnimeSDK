#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIKGHHJKNCE;
class MBGLDEKGJJD;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define OIDBGEPJCLN_JMMLBPGJPFM_BJIBMIBAOAA_OFFSET UNITYSDK_OFFSET(0x11B34900)
#define OIDBGEPJCLN_JMMLBPGJPFM__CTOR_OFFSET UNITYSDK_OFFSET(0x11B348F0)

inline static constexpr unsigned int OIDBGEPJCLN_JMMLBPGJPFM_TypeDefinitionIndex = 52632;

class OIDBGEPJCLN_JMMLBPGJPFM : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowEntity* IJBMAFPLKEC; // 0x10
	::AIKGHHJKNCE* NBBKEIOPPNH; // 0x18
	::MoleMole::UIHollowChessboard3DModelController* JJNLIEGENMB; // 0x20
	::MBGLDEKGJJD* DPPFJDCEIOO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDBGEPJCLN_JMMLBPGJPFM__CTOR_OFFSET))(this);
	}

	::System::Void BJIBMIBAOAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDBGEPJCLN_JMMLBPGJPFM_BJIBMIBAOAA_OFFSET))(this);
	}
};
