#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IELMGLNMLFN.h"
class AIDNGNILOAF;
class DMGLFMNEJGL;
class LDOGDMLGLPI;
class NPECKAJCCAH;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define DOKKNLCFGHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x191ADAE0)
#define DOKKNLCFGHK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x191ACAC0)
#define DOKKNLCFGHK_CTOR_OFFSET UNITYSDK_OFFSET(0x191ACA90)
#define DOKKNLCFGHK_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0x191ACB60)
#define DOKKNLCFGHK_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x191ACAF0)
#define DOKKNLCFGHK_NOPOPGMPMGL_OFFSET UNITYSDK_OFFSET(0x191AD9D0)

inline static constexpr unsigned int DOKKNLCFGHK_TypeDefinitionIndex = 75512;

	class DOKKNLCFGHK : public ::System::Object
	{
	public:
		::NPECKAJCCAH* LFGLEFABAIJ; // 0x10
		::LDOGDMLGLPI* FLLACONDCPE; // 0x18
		static ::System::Text::RegularExpressions::Regex** StaticGet_EBGGCOCOJCC()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("", "DOKKNLCFGHK")->GetStaticField(0x70130);
		}

		// static const ::System::String* CEIJMKBACNH; // 0x0
		// static const ::System::String* DKOFDALPJDN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKKNLCFGHK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPECKAJCCAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPECKAJCCAH*))((::PBYTE)hIl2Cpp + DOKKNLCFGHK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOKKNLCFGHK_CCTOR_OFFSET))();
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKKNLCFGHK_MLMGEFIOION_OFFSET))(this);
		}

		::System::String* JBGIFBGMLMF(::System::String* a1, ::IELMGLNMLFN a2, ::DMGLFMNEJGL* a3, ::AIDNGNILOAF* a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::IELMGLNMLFN, ::DMGLFMNEJGL*, ::AIDNGNILOAF*))((::PBYTE)hIl2Cpp + DOKKNLCFGHK_JBGIFBGMLMF_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::String* NOPOPGMPMGL(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + DOKKNLCFGHK_NOPOPGMPMGL_OFFSET))(a1);
		}

	};
