#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class NIABHDOFEGL;
namespace System { class Type; }

#define DJIJJONPFGD_CTOR_OFFSET UNITYSDK_OFFSET(0xF2359A0)
#define DJIJJONPFGD_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0xF2358F0)
#define DJIJJONPFGD_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0xF235950)
#define DJIJJONPFGD_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0xF2359F0)

inline static constexpr unsigned int DJIJJONPFGD_TypeDefinitionIndex = 62683;

	class DJIJJONPFGD : public ::System::Object
	{
	public:
		::NIABHDOFEGL* CEFLLELKFOP; // 0x10
		::System::Void _ctor(::NIABHDOFEGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIABHDOFEGL*))((::PBYTE)hIl2Cpp + DJIJJONPFGD_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIJJONPFGD_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIJJONPFGD_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + DJIJJONPFGD_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
