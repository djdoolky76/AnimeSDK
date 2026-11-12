#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IELMGLNMLFN.h"
class AIDNGNILOAF;
class DMGLFMNEJGL;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define JKBLNHFAAIB_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA3A210)
#define JKBLNHFAAIB_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3A200)
#define JKBLNHFAAIB_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0xBA39CE0)
#define JKBLNHFAAIB_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xBA39C70)

inline static constexpr unsigned int JKBLNHFAAIB_TypeDefinitionIndex = 75475;

	class JKBLNHFAAIB : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_ELEDGDBNMNL()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("", "JKBLNHFAAIB")->GetStaticField(0x10ED0);
		}

		static ::System::Text::RegularExpressions::Regex** StaticGet_JPLECFMABNF()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("", "JKBLNHFAAIB")->GetStaticField(0x10ED8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBLNHFAAIB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKBLNHFAAIB_CCTOR_OFFSET))();
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBLNHFAAIB_MLMGEFIOION_OFFSET))(this);
		}

		::System::String* JBGIFBGMLMF(::System::String* a1, ::IELMGLNMLFN a2, ::DMGLFMNEJGL* a3, ::AIDNGNILOAF* a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::IELMGLNMLFN, ::DMGLFMNEJGL*, ::AIDNGNILOAF*))((::PBYTE)hIl2Cpp + JKBLNHFAAIB_JBGIFBGMLMF_OFFSET))(this, a1, a2, a3, a4);
		}

	};
