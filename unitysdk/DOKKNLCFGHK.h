#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IELMGLNMLFN.h"
class AIDNGNILOAF;
class DMGLFMNEJGL;
class LDOGDMLGLPI;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define DOKKNLCFGHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x11FEF450)
#define DOKKNLCFGHK_CTOR_OFFSET UNITYSDK_OFFSET(0x11FEF430)
#define DOKKNLCFGHK_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0x11FEEB90)
#define DOKKNLCFGHK_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x11FEEB20)
#define DOKKNLCFGHK_NOPOPGMPMGL_OFFSET UNITYSDK_OFFSET(0x11FEF320)

inline static constexpr unsigned int DOKKNLCFGHK_TypeDefinitionIndex = 73393;

	class DOKKNLCFGHK : public ::System::Object
	{
	public:
		::LDOGDMLGLPI* FLLACONDCPE; // 0x10
		static ::System::Text::RegularExpressions::Regex** StaticGet_EBGGCOCOJCC()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("", "DOKKNLCFGHK")->GetStaticField(0x6F980);
		}

		// static const ::System::String* CEIJMKBACNH; // 0x0
		// static const ::System::String* DKOFDALPJDN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKKNLCFGHK_CTOR_OFFSET))(this);
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
