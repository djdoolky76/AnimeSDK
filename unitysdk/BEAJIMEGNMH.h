#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIBOPLOBAFN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEAJIMEGNMH_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x16309C90)
#define BEAJIMEGNMH_CGENPCCKFNI_OFFSET UNITYSDK_OFFSET(0x16309E30)
#define BEAJIMEGNMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1630A0B0)
#define BEAJIMEGNMH_DBFGHDGILBG_OFFSET UNITYSDK_OFFSET(0x16309F00)
#define BEAJIMEGNMH_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x16309820)
#define BEAJIMEGNMH_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x16309EA0)
#define BEAJIMEGNMH_OCFGPFNMLNH_OFFSET UNITYSDK_OFFSET(0x16309EF0)

	class BEAJIMEGNMH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::AIBOPLOBAFN*, ::System::Collections::Generic::LinkedListNode_1<::AIBOPLOBAFN*>*>* MCMAFIBCMIL; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::LinkedListNode_1<::AIBOPLOBAFN*>*>* BGGLCMPFICA; // 0x18
		::System::Collections::Generic::LinkedList_1<::AIBOPLOBAFN*>* HHPKFMDHKPH; // 0x20
		::System::Int32 NFINOKLNDEN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAJIMEGNMH_CTOR_OFFSET))(this);
		}

		::System::Boolean EGFCFCBHJJP(::AIBOPLOBAFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIBOPLOBAFN*))((::PBYTE)hIl2Cpp + BEAJIMEGNMH_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Boolean AALCFBOGFKP(::AIBOPLOBAFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIBOPLOBAFN*))((::PBYTE)hIl2Cpp + BEAJIMEGNMH_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::AIBOPLOBAFN* CGENPCCKFNI()
		{
			return ((::AIBOPLOBAFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAJIMEGNMH_CGENPCCKFNI_OFFSET))(this);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAJIMEGNMH_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Int32 OCFGPFNMLNH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAJIMEGNMH_OCFGPFNMLNH_OFFSET))(this);
		}

		::System::Void DBFGHDGILBG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEAJIMEGNMH_DBFGHDGILBG_OFFSET))(this, a1);
		}

	};
