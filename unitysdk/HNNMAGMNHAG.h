#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGLFMNEJGL;
class HNNMAGMNHAG;
namespace System { class Object; }
namespace System { class String; }

#define HNNMAGMNHAG_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x15DA6830)
#define HNNMAGMNHAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x15DA6A20)
#define HNNMAGMNHAG_CTOR_OFFSET UNITYSDK_OFFSET(0x15DA67D0)
#define HNNMAGMNHAG_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x15DA67E0)

inline static constexpr unsigned int HNNMAGMNHAG_TypeDefinitionIndex = 79382;

	class HNNMAGMNHAG : public ::System::Object
	{
	public:
		static ::HNNMAGMNHAG** StaticGet_FMJPMFEDIJL()
		{
			return (::HNNMAGMNHAG**)UnitySDK::FromName("", "HNNMAGMNHAG")->GetStaticField(0x34540);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNMAGMNHAG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNNMAGMNHAG_CCTOR_OFFSET))();
		}

		::System::String* JBIOGKPHKKC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNMAGMNHAG_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Object* BEJAJNEFHIB(::System::String* a1, ::DMGLFMNEJGL* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + HNNMAGMNHAG_BEJAJNEFHIB_OFFSET))(this, a1, a2);
		}

	};
