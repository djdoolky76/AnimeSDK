#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class AFNDGNFOAKC;
class CAGDMMGCFBA;
class ICCLDNDNHPD;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define LCBAEHDOEHA_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA2DD0)
#define LCBAEHDOEHA_FIPFKDCNLIH_OFFSET UNITYSDK_OFFSET(0xBEA34C0)
#define LCBAEHDOEHA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBEA31B0)
#define LCBAEHDOEHA_KMLHFIELMPJ_OFFSET UNITYSDK_OFFSET(0xBEA2F40)
#define LCBAEHDOEHA_LMEKNGLCPCN_OFFSET UNITYSDK_OFFSET(0xBEA3390)
#define LCBAEHDOEHA_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xBEA2EC0)

inline static constexpr unsigned int LCBAEHDOEHA_TypeDefinitionIndex = 80994;

	class LCBAEHDOEHA : public ::KNFCEJEJINK
	{
	public:
		::System::Collections::Generic::Queue_1<::AFNDGNFOAKC*>* GFJLEILGMPC; // 0x18
		::CAGDMMGCFBA* MKKLHFCCCNF; // 0x20
		::ICCLDNDNHPD* EEFMDEHLLFI; // 0x28
		::System::Collections::Generic::Queue_1<::AFNDGNFOAKC*>* KAJLOPONJCP; // 0x30
		::System::Boolean MDLNJJPMGCE; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 FBDCHMOCGLK; // 0x3C
		::System::Single COCJDAKNIAP; // 0x40
		::System::Void _ctor(::CAGDMMGCFBA* a1, ::ICCLDNDNHPD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CAGDMMGCFBA*, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + LCBAEHDOEHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBAEHDOEHA_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LCBAEHDOEHA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KMLHFIELMPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBAEHDOEHA_KMLHFIELMPJ_OFFSET))(this);
		}

		::System::Void LMEKNGLCPCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBAEHDOEHA_LMEKNGLCPCN_OFFSET))(this);
		}

		::System::Void FIPFKDCNLIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBAEHDOEHA_FIPFKDCNLIH_OFFSET))(this);
		}

	};
