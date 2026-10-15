#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHPHFHOAFBN;
class DMGLFMNEJGL;
namespace System { class Object; }
namespace System { class String; }

#define AHPHFHOAFBN_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xEB8C6C0)
#define AHPHFHOAFBN_CCTOR_OFFSET UNITYSDK_OFFSET(0xEB8CA40)
#define AHPHFHOAFBN_CTOR_OFFSET UNITYSDK_OFFSET(0xEB8C660)
#define AHPHFHOAFBN_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xEB8C670)

	class AHPHFHOAFBN : public ::System::Object
	{
	public:
		static ::AHPHFHOAFBN** StaticGet_FMJPMFEDIJL()
		{
			return (::AHPHFHOAFBN**)UnitySDK::FromName("", "AHPHFHOAFBN")->GetStaticField(0x56FE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPHFHOAFBN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHPHFHOAFBN_CCTOR_OFFSET))();
		}

		::System::String* JBIOGKPHKKC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPHFHOAFBN_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Object* BEJAJNEFHIB(::System::String* a1, ::DMGLFMNEJGL* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + AHPHFHOAFBN_BEJAJNEFHIB_OFFSET))(this, a1, a2);
		}

	};
