#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class MELIBCMFFIL;
namespace System { class Type; }

#define LFDCNMIAOPN_CTOR_OFFSET UNITYSDK_OFFSET(0xB663D10)
#define LFDCNMIAOPN_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0xB663A70)
#define LFDCNMIAOPN_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0xB663AD0)
#define LFDCNMIAOPN_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0xB663D60)
#define LFDCNMIAOPN_MGPPINJHOBE_OFFSET UNITYSDK_OFFSET(0xB664070)

inline static constexpr unsigned int LFDCNMIAOPN_TypeDefinitionIndex = 62599;

	class LFDCNMIAOPN : public ::System::Object
	{
	public:
		::MELIBCMFFIL* DLOMCMKBMDP; // 0x10
		::System::Void _ctor(::MELIBCMFFIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MELIBCMFFIL*))((::PBYTE)hIl2Cpp + LFDCNMIAOPN_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDCNMIAOPN_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDCNMIAOPN_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + LFDCNMIAOPN_IHPAKOMCHGP_OFFSET))(this, a1);
		}

		::System::Void MGPPINJHOBE(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + LFDCNMIAOPN_MGPPINJHOBE_OFFSET))(this, a1);
		}

	};
