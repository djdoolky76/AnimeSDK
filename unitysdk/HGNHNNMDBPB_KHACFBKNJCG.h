#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGNHNNMDBPB;
class MFMNHELPIMP;

#define HGNHNNMDBPB_KHACFBKNJCG_OAGGBJJCCPF_OFFSET UNITYSDK_OFFSET(0x15DA8AF0)
#define HGNHNNMDBPB_KHACFBKNJCG__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA8AE0)

inline static constexpr unsigned int HGNHNNMDBPB_KHACFBKNJCG_TypeDefinitionIndex = 51522;

class HGNHNNMDBPB_KHACFBKNJCG : public ::System::Object
{
public:
	::HGNHNNMDBPB* KLHPEBKNIFB; // 0x10
	::System::Int32 HBJOLKHGGDD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNHNNMDBPB_KHACFBKNJCG__CTOR_OFFSET))(this);
	}

	::System::Boolean OAGGBJJCCPF(::MFMNHELPIMP* PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MFMNHELPIMP*))((::PBYTE)hIl2Cpp + HGNHNNMDBPB_KHACFBKNJCG_OAGGBJJCCPF_OFFSET))(this, PELAJIFDIPN);
	}
};
