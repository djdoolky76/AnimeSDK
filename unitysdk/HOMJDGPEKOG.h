#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABFLFDHBOJF;
class HOMJDGPEKOG;
class IFEABBJBIGK;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define HOMJDGPEKOG_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0x15DB0730)
#define HOMJDGPEKOG_BJPFKNECHPL_OFFSET UNITYSDK_OFFSET(0x15DB06B0)
#define HOMJDGPEKOG_CLEAR_OFFSET UNITYSDK_OFFSET(0x15DB0770)
#define HOMJDGPEKOG_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB0800)
#define HOMJDGPEKOG_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x15DAF780)
#define HOMJDGPEKOG_ELGMGKGMCCM_OFFSET UNITYSDK_OFFSET(0x15DB0470)
#define HOMJDGPEKOG_EPCNLKCCEKO_OFFSET UNITYSDK_OFFSET(0x15DAF9B0)
#define HOMJDGPEKOG_FCKIKEKDDDB_OFFSET UNITYSDK_OFFSET(0x15DAFC10)
#define HOMJDGPEKOG_GBCIKKFDGLH_OFFSET UNITYSDK_OFFSET(0x15DAF950)
#define HOMJDGPEKOG_GNCPAIGBHBE_OFFSET UNITYSDK_OFFSET(0x15DB0230)

inline static constexpr unsigned int HOMJDGPEKOG_TypeDefinitionIndex = 71114;

	class HOMJDGPEKOG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::ABFLFDHBOJF*>* CGDIHOGDKKM; // 0x10
		::IFEABBJBIGK* KMCOHCLMAFD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMJDGPEKOG_CTOR_OFFSET))(this);
		}

		::HOMJDGPEKOG* EGFCFCBHJJP(::IFEABBJBIGK* a1)
		{
			return ((::HOMJDGPEKOG*(*)(::PVOID, ::IFEABBJBIGK*))((::PBYTE)hIl2Cpp + HOMJDGPEKOG_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::HOMJDGPEKOG* GBCIKKFDGLH(::IFEABBJBIGK* a1)
		{
			return ((::HOMJDGPEKOG*(*)(::PVOID, ::IFEABBJBIGK*))((::PBYTE)hIl2Cpp + HOMJDGPEKOG_GBCIKKFDGLH_OFFSET))(this, a1);
		}

		::HOMJDGPEKOG* EPCNLKCCEKO(::System::Int32 a1, ::System::Func_2<::System::Int32, ::IFEABBJBIGK*>* a2)
		{
			return ((::HOMJDGPEKOG*(*)(::PVOID, ::System::Int32, ::System::Func_2<::System::Int32, ::IFEABBJBIGK*>*))((::PBYTE)hIl2Cpp + HOMJDGPEKOG_EPCNLKCCEKO_OFFSET))(this, a1, a2);
		}

		::HOMJDGPEKOG* FCKIKEKDDDB(::System::Collections::Generic::IEnumerable_1<::IFEABBJBIGK*>* a1)
		{
			return ((::HOMJDGPEKOG*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::IFEABBJBIGK*>*))((::PBYTE)hIl2Cpp + HOMJDGPEKOG_FCKIKEKDDDB_OFFSET))(this, a1);
		}

		::HOMJDGPEKOG* GNCPAIGBHBE(::System::String* a1)
		{
			return ((::HOMJDGPEKOG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOMJDGPEKOG_GNCPAIGBHBE_OFFSET))(this, a1);
		}

		::HOMJDGPEKOG* ELGMGKGMCCM(::System::String* a1)
		{
			return ((::HOMJDGPEKOG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOMJDGPEKOG_ELGMGKGMCCM_OFFSET))(this, a1);
		}

		::HOMJDGPEKOG* BJPFKNECHPL()
		{
			return ((::HOMJDGPEKOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMJDGPEKOG_BJPFKNECHPL_OFFSET))(this);
		}

		::IFEABBJBIGK* AKJABINEGDJ()
		{
			return ((::IFEABBJBIGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMJDGPEKOG_AKJABINEGDJ_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMJDGPEKOG_CLEAR_OFFSET))(this);
		}

	};
