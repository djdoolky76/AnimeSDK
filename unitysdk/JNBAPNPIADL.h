#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNBAPNPIADL;
class KMAEPFCHJIB;

#define JNBAPNPIADL_BNHFCCKDFCK_OFFSET UNITYSDK_OFFSET(0xB276300)
#define JNBAPNPIADL_CTOR_OFFSET UNITYSDK_OFFSET(0xB2764D0)
#define JNBAPNPIADL_GET_ID_OFFSET UNITYSDK_OFFSET(0xB2761F0)
#define JNBAPNPIADL_ICKIPADBBLJ_OFFSET UNITYSDK_OFFSET(0xB276260)
#define JNBAPNPIADL_LHLALAKKKKJ_OFFSET UNITYSDK_OFFSET(0xB276440)
#define JNBAPNPIADL_OKHLHJFFKCN_OFFSET UNITYSDK_OFFSET(0xB2763A0)
#define JNBAPNPIADL_PDAENODHFCM_OFFSET UNITYSDK_OFFSET(0xB276200)

	class JNBAPNPIADL : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNBAPNPIADL_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBAPNPIADL_GET_ID_OFFSET))(this);
		}

		::KMAEPFCHJIB* PDAENODHFCM()
		{
			return ((::KMAEPFCHJIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBAPNPIADL_PDAENODHFCM_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* ICKIPADBBLJ()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBAPNPIADL_ICKIPADBBLJ_OFFSET))(this);
		}

		::System::UInt32 BNHFCCKDFCK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBAPNPIADL_BNHFCCKDFCK_OFFSET))(this);
		}

		::System::UInt32 OKHLHJFFKCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBAPNPIADL_OKHLHJFFKCN_OFFSET))(this);
		}

		static ::System::Boolean LHLALAKKKKJ(::System::UInt32 a1, ::JNBAPNPIADL* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::JNBAPNPIADL*))((::PBYTE)hIl2Cpp + JNBAPNPIADL_LHLALAKKKKJ_OFFSET))(a1, a2);
		}

	};
