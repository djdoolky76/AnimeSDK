#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIMMNOKEGBE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AFMMLCHNCDM_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xCF19080)
#define AFMMLCHNCDM_CTOR_OFFSET UNITYSDK_OFFSET(0xCF19240)

	class AFMMLCHNCDM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MIMMNOKEGBE*>* DPHNABJHCFI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMMLCHNCDM_CTOR_OFFSET))(this);
		}

		::MIMMNOKEGBE* ACMKLFOMPFC(::System::UInt32 a1)
		{
			return ((::MIMMNOKEGBE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFMMLCHNCDM_ACMKLFOMPFC_OFFSET))(this, a1);
		}

	};
