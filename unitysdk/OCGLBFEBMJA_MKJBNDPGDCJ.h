#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IAEOCKOHIMH;
class LOHPBEPDLOG;
class OCGLBFEBMJA;

#define OCGLBFEBMJA_MKJBNDPGDCJ_NAKPBEDNCFL_OFFSET UNITYSDK_OFFSET(0x1291FB30)
#define OCGLBFEBMJA_MKJBNDPGDCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1291FB20)

inline static constexpr unsigned int OCGLBFEBMJA_MKJBNDPGDCJ_TypeDefinitionIndex = 90790;

class OCGLBFEBMJA_MKJBNDPGDCJ : public ::System::Object
{
public:
	::IAEOCKOHIMH* HHIJHDFHPOI; // 0x10
	::OCGLBFEBMJA* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGLBFEBMJA_MKJBNDPGDCJ__CTOR_OFFSET))(this);
	}

	::System::Void NAKPBEDNCFL(::LOHPBEPDLOG* PLBEAIIJADM)
	{
		return ((::System::Void(*)(::PVOID, ::LOHPBEPDLOG*))((::PBYTE)hIl2Cpp + OCGLBFEBMJA_MKJBNDPGDCJ_NAKPBEDNCFL_OFFSET))(this, PLBEAIIJADM);
	}
};
