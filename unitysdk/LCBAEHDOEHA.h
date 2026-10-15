#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class AFNDGNFOAKC;
class CAGDMMGCFBA;
class ICCLDNDNHPD;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define LCBAEHDOEHA_CTOR_OFFSET UNITYSDK_OFFSET(0xB60A0A0)
#define LCBAEHDOEHA_FIPFKDCNLIH_OFFSET UNITYSDK_OFFSET(0xB60A790)
#define LCBAEHDOEHA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB60A480)
#define LCBAEHDOEHA_KMLHFIELMPJ_OFFSET UNITYSDK_OFFSET(0xB60A210)
#define LCBAEHDOEHA_LMEKNGLCPCN_OFFSET UNITYSDK_OFFSET(0xB60A660)
#define LCBAEHDOEHA_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB60A190)

inline static constexpr unsigned int LCBAEHDOEHA_TypeDefinitionIndex = 78258;

	class LCBAEHDOEHA : public ::KNFCEJEJINK
	{
	public:
		::ICCLDNDNHPD* EEFMDEHLLFI; // 0x18
		::System::Collections::Generic::Queue_1<::AFNDGNFOAKC*>* KAJLOPONJCP; // 0x20
		::System::Collections::Generic::Queue_1<::AFNDGNFOAKC*>* GFJLEILGMPC; // 0x28
		::CAGDMMGCFBA* MKKLHFCCCNF; // 0x30
		::System::Single COCJDAKNIAP; // 0x38
		::System::Boolean MDLNJJPMGCE; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Int32 FBDCHMOCGLK; // 0x40
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
