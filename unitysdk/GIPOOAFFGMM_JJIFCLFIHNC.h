#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMPCODLIOLG;
class GIPOOAFFGMM;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define GIPOOAFFGMM_JJIFCLFIHNC_CTOR_OFFSET UNITYSDK_OFFSET(0x15A55490)

	class GIPOOAFFGMM_JJIFCLFIHNC : public ::System::Object
	{
	public:
		::System::Func_2<::GIPOOAFFGMM*, ::FMPCODLIOLG*>* MNOFFAGDOFO; // 0x10
		::System::Func_1<::System::Boolean>* ILLEKIIHHDE; // 0x18
		::System::Void _ctor(::System::Func_1<::System::Boolean>* a1, ::System::Func_2<::GIPOOAFFGMM*, ::FMPCODLIOLG*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*, ::System::Func_2<::GIPOOAFFGMM*, ::FMPCODLIOLG*>*))((::PBYTE)hIl2Cpp + GIPOOAFFGMM_JJIFCLFIHNC_CTOR_OFFSET))(this, a1, a2);
		}

	};
