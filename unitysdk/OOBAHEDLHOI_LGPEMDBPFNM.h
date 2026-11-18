#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

#define OOBAHEDLHOI_LGPEMDBPFNM_COIMGEDGIBJ_OFFSET UNITYSDK_OFFSET(0x16F89B10)
#define OOBAHEDLHOI_LGPEMDBPFNM__CTOR_OFFSET UNITYSDK_OFFSET(0x16F89B00)

inline static constexpr unsigned int OOBAHEDLHOI_LGPEMDBPFNM_TypeDefinitionIndex = 75523;

class OOBAHEDLHOI_LGPEMDBPFNM : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowChessboardUID IACHFFGPFMF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_LGPEMDBPFNM__CTOR_OFFSET))(this);
	}

	::System::Void COIMGEDGIBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_LGPEMDBPFNM_COIMGEDGIBJ_OFFSET))(this);
	}
};
