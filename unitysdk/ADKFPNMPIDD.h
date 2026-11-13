#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJFHGODIBPN;
class NJFHGODIBPN_BNDKBMLLKBO;

#define ADKFPNMPIDD_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0x182B1240)
#define ADKFPNMPIDD_CLEAR_OFFSET UNITYSDK_OFFSET(0x182B0F60)
#define ADKFPNMPIDD_CTOR_OFFSET UNITYSDK_OFFSET(0x182B14B0)
#define ADKFPNMPIDD_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x182B1430)
#define ADKFPNMPIDD_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x182B0F40)
#define ADKFPNMPIDD_GET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x182B0F20)
#define ADKFPNMPIDD_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x182B1130)
#define ADKFPNMPIDD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x182B1350)
#define ADKFPNMPIDD_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x182B13B0)
#define ADKFPNMPIDD_MGJLINFADJK_OFFSET UNITYSDK_OFFSET(0x182B13F0)
#define ADKFPNMPIDD_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x182B1070)
#define ADKFPNMPIDD_PODJJPBKLDC_OFFSET UNITYSDK_OFFSET(0x182B1470)
#define ADKFPNMPIDD_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x182B0F50)
#define ADKFPNMPIDD_SET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x182B0F30)

inline static constexpr unsigned int ADKFPNMPIDD_TypeDefinitionIndex = 58215;

	class ADKFPNMPIDD : public ::System::Object
	{
	public:
		::NJFHGODIBPN* JIIKAEMELPJ; // 0x10
		::NJFHGODIBPN_BNDKBMLLKBO* BPNJBGFNBFB; // 0x18
		::System::Boolean _IsFinished_k__BackingField; // 0x20
		::System::Boolean _IsStarted_k__BackingField; // 0x21
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
