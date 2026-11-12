#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class IBPGDJEBPFN;

#define DAMIINECKKH_CTOR_OFFSET UNITYSDK_OFFSET(0xE9290E0)
#define DAMIINECKKH_EEBFMFBOIHN_OFFSET UNITYSDK_OFFSET(0xE9296D0)
#define DAMIINECKKH_EHLNIBCNJLE_OFFSET UNITYSDK_OFFSET(0xE9294B0)
#define DAMIINECKKH_HABLCBFBMLE_OFFSET UNITYSDK_OFFSET(0xE929670)
#define DAMIINECKKH_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xE9295F0)
#define DAMIINECKKH_JNOPBHPAKGP_OFFSET UNITYSDK_OFFSET(0xE9291E0)
#define DAMIINECKKH_LFFBCABFBOK_OFFSET UNITYSDK_OFFSET(0xE929630)
#define DAMIINECKKH_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xE929150)
#define DAMIINECKKH_MNIMHKLFMGJ_OFFSET UNITYSDK_OFFSET(0xE9293D0)
#define DAMIINECKKH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xE9290F0)

inline static constexpr unsigned int DAMIINECKKH_TypeDefinitionIndex = 61619;

	class DAMIINECKKH : public ::EFNJLACKEDH
	{
	public:
		::IBPGDJEBPFN* JLGLHMJIKOF; // 0x18
		::System::Boolean INJJGMIGFFD; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single JINIJIDFKJC; // 0x24
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::IBPGDJEBPFN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::IBPGDJEBPFN*))((::PBYTE)hIl2Cpp + DAMIINECKKH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMIINECKKH_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void JNOPBHPAKGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMIINECKKH_JNOPBHPAKGP_OFFSET))(this);
		}

		::System::Void MNIMHKLFMGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMIINECKKH_MNIMHKLFMGJ_OFFSET))(this);
		}

		::System::Void EHLNIBCNJLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMIINECKKH_EHLNIBCNJLE_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DAMIINECKKH_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMIINECKKH_HCOFMFKFMDK_OFFSET))(this);
		}

		::System::Void LFFBCABFBOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMIINECKKH_LFFBCABFBOK_OFFSET))(this);
		}

		::System::Void HABLCBFBMLE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DAMIINECKKH_HABLCBFBMLE_OFFSET))(this, a1);
		}

		::System::Void EEBFMFBOIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMIINECKKH_EEBFMFBOIHN_OFFSET))(this);
		}

	};
