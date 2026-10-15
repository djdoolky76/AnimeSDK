#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGLFMNEJGL;
class LMEJEHKPAPH;
namespace System { class Object; }
namespace System { class String; }

#define LMEJEHKPAPH_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xB7758C0)
#define LMEJEHKPAPH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB775C10)
#define LMEJEHKPAPH_CTOR_OFFSET UNITYSDK_OFFSET(0xB775860)
#define LMEJEHKPAPH_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xB775870)

inline static constexpr unsigned int LMEJEHKPAPH_TypeDefinitionIndex = 67174;

	class LMEJEHKPAPH : public ::System::Object
	{
	public:
		static ::LMEJEHKPAPH** StaticGet_FMJPMFEDIJL()
		{
			return (::LMEJEHKPAPH**)UnitySDK::FromName("", "LMEJEHKPAPH")->GetStaticField(0x6A260);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEJEHKPAPH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMEJEHKPAPH_CCTOR_OFFSET))();
		}

		::System::String* JBIOGKPHKKC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEJEHKPAPH_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Object* BEJAJNEFHIB(::System::String* a1, ::DMGLFMNEJGL* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + LMEJEHKPAPH_BEJAJNEFHIB_OFFSET))(this, a1, a2);
		}

	};
