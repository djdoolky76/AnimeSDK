#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDNLDDJELIH.h"
#include "unitysdk/MMPBJBCMNIG.h"
#include "unitysdk/System/Object.h"

#define HIICLLFHGFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1494DE00)

inline static constexpr unsigned int HIICLLFHGFG_TypeDefinitionIndex = 44165;

class HIICLLFHGFG : public ::System::Object
{
public:
	::System::Int32 BLAELAOPLBH; // 0x10
	::MMPBJBCMNIG FOHHIGHEFBP; // 0x14
	::MMPBJBCMNIG JIABJIFIMGL; // 0x18
	::GDNLDDJELIH FAFJLHEGMIP; // 0x1C
	::System::Int32 ANCJFLOJNDD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICLLFHGFG__CTOR_OFFSET))(this);
	}
};
