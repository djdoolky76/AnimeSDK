#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HKMICDOBLCA.h"

class MLKKDHPBPNJ;
class NFMPODGFBHE;
class OBKNEEOLOPB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJGHLHOILFN_ADMGMJIAMND_OFFSET UNITYSDK_OFFSET(0x158B4D50)
#define EJGHLHOILFN_FMIKMBBNMMM_OFFSET UNITYSDK_OFFSET(0x158B50A0)
#define EJGHLHOILFN_JGCAKDIKJHH_OFFSET UNITYSDK_OFFSET(0x158B5110)
#define EJGHLHOILFN_JKHHHBIEKOA_OFFSET UNITYSDK_OFFSET(0x158B4E70)
#define EJGHLHOILFN_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x158B5200)
#define EJGHLHOILFN__CTOR_OFFSET UNITYSDK_OFFSET(0x158B4CA0)

inline static constexpr unsigned int EJGHLHOILFN_TypeDefinitionIndex = 76310;

class EJGHLHOILFN : public ::System::Object
{
public:
	::OBKNEEOLOPB* HJLKIJBHDBM; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* ELKJLOFIDHG; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* LIABJDNDMEL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGHLHOILFN__CTOR_OFFSET))(this);
	}

	::OBKNEEOLOPB* ADMGMJIAMND()
	{
		return ((::OBKNEEOLOPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGHLHOILFN_ADMGMJIAMND_OFFSET))(this);
	}

	::System::Void JKHHHBIEKOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGHLHOILFN_JKHHHBIEKOA_OFFSET))(this);
	}

	::System::Boolean FMIKMBBNMMM(::NFMPODGFBHE* LFIMPAPICCG)
	{
		return ((::System::Boolean(*)(::PVOID, ::NFMPODGFBHE*))((::PBYTE)hIl2Cpp + EJGHLHOILFN_FMIKMBBNMMM_OFFSET))(this, LFIMPAPICCG);
	}

	::System::String* JGCAKDIKJHH(::NFMPODGFBHE* LFIMPAPICCG)
	{
		return ((::System::String*(*)(::PVOID, ::NFMPODGFBHE*))((::PBYTE)hIl2Cpp + EJGHLHOILFN_JGCAKDIKJHH_OFFSET))(this, LFIMPAPICCG);
	}

	::System::Void KNDMMHPDPIB(::MLKKDHPBPNJ* OHCLGPAAGAG, ::HKMICDOBLCA& IDJICFNMGLL)
	{
		return ((::System::Void(*)(::PVOID, ::MLKKDHPBPNJ*, ::HKMICDOBLCA&))((::PBYTE)hIl2Cpp + EJGHLHOILFN_KNDMMHPDPIB_OFFSET))(this, OHCLGPAAGAG, IDJICFNMGLL);
	}
};
