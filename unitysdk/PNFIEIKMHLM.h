#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAJHHDCPLHD.h"
class MCDOIAPPMBF;
namespace System { class String; }

#define PNFIEIKMHLM_CTOR_OFFSET UNITYSDK_OFFSET(0xCC6B030)
#define PNFIEIKMHLM_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xCC6B040)
#define PNFIEIKMHLM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCC6B230)

inline static constexpr unsigned int PNFIEIKMHLM_TypeDefinitionIndex = 85023;

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
