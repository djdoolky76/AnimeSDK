#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BADOONPCDLO;
class EJNFAIOPNEO;
class KKKCJLHIGKO;
class MFMOKFNLNNB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EHFGOPCDBHP_ALJIOCDBMKO_1_OFFSET UNITYSDK_OFFSET(0x154993E0)
#define EHFGOPCDBHP_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x15498ED0)
#define EHFGOPCDBHP_BNBOKOCOJPC_OFFSET UNITYSDK_OFFSET(0x15499510)
#define EHFGOPCDBHP_CJCBDOEBBJC_OFFSET UNITYSDK_OFFSET(0x15498D20)
#define EHFGOPCDBHP_CTOR_OFFSET UNITYSDK_OFFSET(0x15499630)
#define EHFGOPCDBHP_FPPEBKCCBIO_OFFSET UNITYSDK_OFFSET(0x15498840)
#define EHFGOPCDBHP_KLOLGGHBABO_OFFSET UNITYSDK_OFFSET(0x154995D0)
#define EHFGOPCDBHP_OMGAPBGFKPJ_OFFSET UNITYSDK_OFFSET(0x15498900)
#define EHFGOPCDBHP_OPEFLHHAHNK_OFFSET UNITYSDK_OFFSET(0x15498BA0)

inline static constexpr unsigned int EHFGOPCDBHP_TypeDefinitionIndex = 61860;

	class EHFGOPCDBHP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BADOONPCDLO*>* AHLGJBBPJLE; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* DBBONNMNMKM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFGOPCDBHP_CTOR_OFFSET))(this);
		}

		::System::Void FPPEBKCCBIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFGOPCDBHP_FPPEBKCCBIO_OFFSET))(this);
		}

		::System::Void OMGAPBGFKPJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EHFGOPCDBHP_OMGAPBGFKPJ_OFFSET))(this, a1, a2);
		}

		::System::Void OPEFLHHAHNK(::MFMOKFNLNNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFMOKFNLNNB*))((::PBYTE)hIl2Cpp + EHFGOPCDBHP_OPEFLHHAHNK_OFFSET))(this, a1);
		}

		::System::Void CJCBDOEBBJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFGOPCDBHP_CJCBDOEBBJC_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::KKKCJLHIGKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKKCJLHIGKO*))((::PBYTE)hIl2Cpp + EHFGOPCDBHP_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::System::Void ALJIOCDBMKO_1(::EJNFAIOPNEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJNFAIOPNEO*))((::PBYTE)hIl2Cpp + EHFGOPCDBHP_ALJIOCDBMKO_1_OFFSET))(this, a1);
		}

		::System::UInt32 BNBOKOCOJPC(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EHFGOPCDBHP_BNBOKOCOJPC_OFFSET))(this, a1);
		}

		::System::Boolean KLOLGGHBABO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EHFGOPCDBHP_KLOLGGHBABO_OFFSET))(this, a1);
		}

	};
