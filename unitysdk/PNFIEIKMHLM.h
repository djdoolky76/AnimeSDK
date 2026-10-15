#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAJHHDCPLHD.h"
class MCDOIAPPMBF;
namespace System { class String; }

#define PNFIEIKMHLM_CTOR_OFFSET UNITYSDK_OFFSET(0xC338490)
#define PNFIEIKMHLM_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xC3384A0)
#define PNFIEIKMHLM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC338690)

	class PNFIEIKMHLM : public ::FAJHHDCPLHD
	{
	public:
		::System::Void _ctor(::MCDOIAPPMBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + PNFIEIKMHLM_CTOR_OFFSET))(this, a1);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFIEIKMHLM_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFIEIKMHLM_TOSTRING_OFFSET))(this);
		}

	};
