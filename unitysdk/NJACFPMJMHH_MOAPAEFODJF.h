#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJACFPMJMHH_PathNodeState.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/System/Object.h"
class NJACFPMJMHH_MOAPAEFODJF;

#define NJACFPMJMHH_MOAPAEFODJF_COMPARETO_OFFSET UNITYSDK_OFFSET(0xBC027B0)
#define NJACFPMJMHH_MOAPAEFODJF_CTOR_OFFSET UNITYSDK_OFFSET(0xBC028A0)
#define NJACFPMJMHH_MOAPAEFODJF_HFPMOBCHIHC_OFFSET UNITYSDK_OFFSET(0xBC02A60)

inline static constexpr unsigned int NJACFPMJMHH_MOAPAEFODJF_TypeDefinitionIndex = 54222;

	class NJACFPMJMHH_MOAPAEFODJF : public ::System::Object
	{
	public:
		::NJACFPMJMHH_MOAPAEFODJF* BNLCCCCMABF; // 0x10
		::System::Int32 MADAANLHPLB; // 0x18
		::NJACFPMJMHH_PathNodeState MEPFOEEGBEA; // 0x1C
		::System::Int32 IMKDDPAKNOL; // 0x20
		::System::Int32 ONPPBOKMMKL; // 0x24
		::RPG::GameCore::IVec2 PECPBEOHOJC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJACFPMJMHH_MOAPAEFODJF_CTOR_OFFSET))(this);
		}

		::System::Int32 CompareTo(::NJACFPMJMHH_MOAPAEFODJF* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::NJACFPMJMHH_MOAPAEFODJF*))((::PBYTE)hIl2Cpp + NJACFPMJMHH_MOAPAEFODJF_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 HFPMOBCHIHC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJACFPMJMHH_MOAPAEFODJF_HFPMOBCHIHC_OFFSET))(this);
		}

	};
