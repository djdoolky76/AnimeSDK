#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class KFDJFELEEGB;
namespace System { class Type; }

#define GOGFNPCEPBF_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2F3F0)
#define GOGFNPCEPBF_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0x15B2F150)
#define GOGFNPCEPBF_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0x15B2F1B0)
#define GOGFNPCEPBF_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0x15B2F440)

	class GOGFNPCEPBF : public ::System::Object
	{
	public:
		::KFDJFELEEGB* GGFJKIHOGDA; // 0x10
		::System::Void _ctor(::KFDJFELEEGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFDJFELEEGB*))((::PBYTE)hIl2Cpp + GOGFNPCEPBF_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGFNPCEPBF_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGFNPCEPBF_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + GOGFNPCEPBF_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
