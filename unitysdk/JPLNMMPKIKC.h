#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class OBBHHEFPEHP;
namespace System { class Type; }

#define JPLNMMPKIKC_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C2BE0)
#define JPLNMMPKIKC_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0xB2C2B30)
#define JPLNMMPKIKC_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0xB2C2B90)
#define JPLNMMPKIKC_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0xB2C2C30)

inline static constexpr unsigned int JPLNMMPKIKC_TypeDefinitionIndex = 62595;

	class JPLNMMPKIKC : public ::System::Object
	{
	public:
		::OBBHHEFPEHP* CEFLLELKFOP; // 0x10
		::System::Void _ctor(::OBBHHEFPEHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBBHHEFPEHP*))((::PBYTE)hIl2Cpp + JPLNMMPKIKC_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLNMMPKIKC_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLNMMPKIKC_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + JPLNMMPKIKC_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
