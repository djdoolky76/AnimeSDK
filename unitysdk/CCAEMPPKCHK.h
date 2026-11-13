#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGLFMNEJGL;
namespace System { class Object; }
namespace System { class String; }

#define CCAEMPPKCHK_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x18FF0360)
#define CCAEMPPKCHK_CTOR_OFFSET UNITYSDK_OFFSET(0x18FF0850)
#define CCAEMPPKCHK_HDNFGEPHDMK_OFFSET UNITYSDK_OFFSET(0x18FF0660)
#define CCAEMPPKCHK_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x18FF0310)

inline static constexpr unsigned int CCAEMPPKCHK_TypeDefinitionIndex = 75495;

	class CCAEMPPKCHK : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_DOOBBAJLKME()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CCAEMPPKCHK")->GetStaticField(0x125D0);
		}

		// static const ::System::Object CBKEDPIECBE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAEMPPKCHK_CTOR_OFFSET))(this);
		}

		::System::String* JBIOGKPHKKC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAEMPPKCHK_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Object* BEJAJNEFHIB(::System::String* a1, ::DMGLFMNEJGL* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + CCAEMPPKCHK_BEJAJNEFHIB_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean HDNFGEPHDMK(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CCAEMPPKCHK_HDNFGEPHDMK_OFFSET))(a1, a2, a3, a4);
		}

	};
