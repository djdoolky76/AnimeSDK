#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCHOANCLADD;
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define HLCGFDAHELG_OBDIONEKIAK_NKHIFHEPMML_OFFSET UNITYSDK_OFFSET(0x14707D60)
#define HLCGFDAHELG_OBDIONEKIAK__CTOR_OFFSET UNITYSDK_OFFSET(0x14707D50)

inline static constexpr unsigned int HLCGFDAHELG_OBDIONEKIAK_TypeDefinitionIndex = 68885;

class HLCGFDAHELG_OBDIONEKIAK : public ::System::Object
{
public:
	::System::Int32 LPJIPEGDNNL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCGFDAHELG_OBDIONEKIAK__CTOR_OFFSET))(this);
	}

	::System::Void NKHIFHEPMML(::BCHOANCLADD* FCHGPPLBGDD, ::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::BCHOANCLADD*, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + HLCGFDAHELG_OBDIONEKIAK_NKHIFHEPMML_OFFSET))(this, FCHGPPLBGDD, KECKGDFIALJ);
	}
};
