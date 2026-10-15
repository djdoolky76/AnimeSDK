#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNMJHHJGIAF;
class INPDNMCAAIL;
class MDDJNELCOMK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define INPDNMCAAIL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x164F8BC0)
#define INPDNMCAAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x164F8C50)
#define INPDNMCAAIL_HFOJDOGKOGF_OFFSET UNITYSDK_OFFSET(0x164F8E50)
#define INPDNMCAAIL_JJLCMFNOGKM_OFFSET UNITYSDK_OFFSET(0x164F8C60)
#define INPDNMCAAIL_NKOEIDFKFLM_OFFSET UNITYSDK_OFFSET(0x164F89D0)

	class INPDNMCAAIL : public ::System::Object
	{
	public:
		::System::UInt32 ONJFHCJFPND; // 0x10
		::System::UInt32 DIABMCKDNEM; // 0x14
		// static const ::System::String* AEABFPFMGNP; // 0x0
		// static const ::System::String* FAMLNMBECBH; // 0x0
		// static const ::System::String* HPIEGMBLCII; // 0x0
		// static const ::System::String* OMONEPMDEDN; // 0x0
		// static const ::System::String* KKECJAAPEFL; // 0x0
		// static const ::System::String* MAMJKNMIHJG; // 0x0
		// static const ::System::String* MLFCBPOGMMB; // 0x0
		// static const ::System::String* HBMKEGDABJJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPDNMCAAIL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MDDJNELCOMK*>* NKOEIDFKFLM()
		{
			return ((::System::Collections::Generic::List_1<::MDDJNELCOMK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPDNMCAAIL_NKOEIDFKFLM_OFFSET))(this);
		}

		static ::INPDNMCAAIL* BPLPBPMEODA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::INPDNMCAAIL*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + INPDNMCAAIL_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::CNMJHHJGIAF*>* JJLCMFNOGKM()
		{
			return ((::System::Collections::Generic::List_1<::CNMJHHJGIAF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPDNMCAAIL_JJLCMFNOGKM_OFFSET))(this);
		}

		::System::String* HFOJDOGKOGF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPDNMCAAIL_HFOJDOGKOGF_OFFSET))(this);
		}

	};
