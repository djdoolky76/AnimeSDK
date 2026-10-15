#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class OPHHOHALNND;
namespace System { class Type; }

#define PJECFJOCGMD_CTOR_OFFSET UNITYSDK_OFFSET(0xC27C390)
#define PJECFJOCGMD_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0xC27C250)
#define PJECFJOCGMD_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0xC27C2B0)
#define PJECFJOCGMD_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0xC27C3E0)

inline static constexpr unsigned int PJECFJOCGMD_TypeDefinitionIndex = 62602;

	class PJECFJOCGMD : public ::System::Object
	{
	public:
		::OPHHOHALNND* MDNEKPJFAKF; // 0x10
		::System::Void _ctor(::OPHHOHALNND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPHHOHALNND*))((::PBYTE)hIl2Cpp + PJECFJOCGMD_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJECFJOCGMD_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJECFJOCGMD_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + PJECFJOCGMD_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
