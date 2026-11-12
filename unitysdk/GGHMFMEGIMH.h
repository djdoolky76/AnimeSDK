#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class NBHDFJLLFBN;
namespace System { class Type; }

#define GGHMFMEGIMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1693FA10)
#define GGHMFMEGIMH_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0x1693F7F0)
#define GGHMFMEGIMH_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0x1693F850)
#define GGHMFMEGIMH_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0x1693FA60)

inline static constexpr unsigned int GGHMFMEGIMH_TypeDefinitionIndex = 64023;

	class GGHMFMEGIMH : public ::System::Object
	{
	public:
		::NBHDFJLLFBN* FPAEBLKDDHI; // 0x10
		::System::Void _ctor(::NBHDFJLLFBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBHDFJLLFBN*))((::PBYTE)hIl2Cpp + GGHMFMEGIMH_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHMFMEGIMH_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHMFMEGIMH_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + GGHMFMEGIMH_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
