#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLNAAPFCCFB.h"
#include "unitysdk/GBBGNBBECCE.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGENJKDIAIG_AMNEAHHIAIB_OFFSET UNITYSDK_OFFSET(0x135DE420)
#define AGENJKDIAIG_JNDAJLMDEPA_OFFSET UNITYSDK_OFFSET(0x135DDF90)
#define AGENJKDIAIG_KDNPIHIDIMO_OFFSET UNITYSDK_OFFSET(0x135DE050)
#define AGENJKDIAIG_NGMPLNGPCPO_OFFSET UNITYSDK_OFFSET(0x135DDF50)
#define AGENJKDIAIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x135DDE60)

inline static constexpr unsigned int AGENJKDIAIG_TypeDefinitionIndex = 70424;

class AGENJKDIAIG : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_ENBADMNHHMD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AGENJKDIAIG_TypeDefinitionIndex)->GetStaticField(0x4CB70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGENJKDIAIG__CCTOR_OFFSET))();
	}

	static ::GBBGNBBECCE NGMPLNGPCPO(::DLNAAPFCCFB BELAMCEGFGN)
	{
		return ((::GBBGNBBECCE(*)(::DLNAAPFCCFB))((::PBYTE)hIl2Cpp + AGENJKDIAIG_NGMPLNGPCPO_OFFSET))(BELAMCEGFGN);
	}

	static ::System::Boolean JNDAJLMDEPA(::System::String* EGEGIMGMJHN, ::GBBGNBBECCE& JGGFDIMINPF)
	{
		return ((::System::Boolean(*)(::System::String*, ::GBBGNBBECCE&))((::PBYTE)hIl2Cpp + AGENJKDIAIG_JNDAJLMDEPA_OFFSET))(EGEGIMGMJHN, JGGFDIMINPF);
	}

	static ::System::Boolean KDNPIHIDIMO(::System::Int32 LHBFAAGKKEI, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + AGENJKDIAIG_KDNPIHIDIMO_OFFSET))(LHBFAAGKKEI, EJGDHCIBCJH);
	}

	static ::System::Void AMNEAHHIAIB(::GBBGNBBECCE JGGFDIMINPF)
	{
		return ((::System::Void(*)(::GBBGNBBECCE))((::PBYTE)hIl2Cpp + AGENJKDIAIG_AMNEAHHIAIB_OFFSET))(JGGFDIMINPF);
	}
};
