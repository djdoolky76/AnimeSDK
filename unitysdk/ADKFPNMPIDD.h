#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJFHGODIBPN;
class NJFHGODIBPN_BNDKBMLLKBO;

#define ADKFPNMPIDD_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0xB1416F0)
#define ADKFPNMPIDD_CLEAR_OFFSET UNITYSDK_OFFSET(0xB141410)
#define ADKFPNMPIDD_CTOR_OFFSET UNITYSDK_OFFSET(0xB141960)
#define ADKFPNMPIDD_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xB1418E0)
#define ADKFPNMPIDD_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB1413F0)
#define ADKFPNMPIDD_GET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0xB1413D0)
#define ADKFPNMPIDD_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB1415E0)
#define ADKFPNMPIDD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB141800)
#define ADKFPNMPIDD_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB141860)
#define ADKFPNMPIDD_MGJLINFADJK_OFFSET UNITYSDK_OFFSET(0xB1418A0)
#define ADKFPNMPIDD_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB141520)
#define ADKFPNMPIDD_PODJJPBKLDC_OFFSET UNITYSDK_OFFSET(0xB141920)
#define ADKFPNMPIDD_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB141400)
#define ADKFPNMPIDD_SET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0xB1413E0)

inline static constexpr unsigned int ADKFPNMPIDD_TypeDefinitionIndex = 56989;

	class ADKFPNMPIDD : public ::System::Object
	{
	public:
		::NJFHGODIBPN_BNDKBMLLKBO* BPNJBGFNBFB; // 0x10
		::NJFHGODIBPN* JIIKAEMELPJ; // 0x18
		::System::Boolean _IsStarted_k__BackingField; // 0x20
		::System::Boolean _IsFinished_k__BackingField; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKFPNMPIDD_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKFPNMPIDD_GET_ISSTARTED_OFFSET))(this);
		}

		::System::Void set_IsStarted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADKFPNMPIDD_SET_ISSTARTED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKFPNMPIDD_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADKFPNMPIDD_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKFPNMPIDD_CLEAR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKFPNMPIDD_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKFPNMPIDD_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void CIHFGJDCHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKFPNMPIDD_CIHFGJDCHIA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADKFPNMPIDD_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKFPNMPIDD_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void MGJLINFADJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKFPNMPIDD_MGJLINFADJK_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKFPNMPIDD_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void PODJJPBKLDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKFPNMPIDD_PODJJPBKLDC_OFFSET))(this);
		}

	};
