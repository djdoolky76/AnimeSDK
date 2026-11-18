#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GBINEPNHKKO;
class IDGDIFDMIDP;
class JGLOEAGHDLL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CCNAJNFLFGP_KBLEBGELJNP_OFFSET UNITYSDK_OFFSET(0x14F191E0)
#define CCNAJNFLFGP_LEKBHMHNOLB_OFFSET UNITYSDK_OFFSET(0x14F19410)
#define CCNAJNFLFGP__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F18CE0)
#define CCNAJNFLFGP__CTOR_OFFSET UNITYSDK_OFFSET(0x14F18CD0)

inline static constexpr unsigned int CCNAJNFLFGP_TypeDefinitionIndex = 51656;

class CCNAJNFLFGP : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::JGLOEAGHDLL*>** StaticGet_KAKNBMNNNCP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::JGLOEAGHDLL*>**)Il2CppClass::FromTypeDefinitionIndex(CCNAJNFLFGP_TypeDefinitionIndex)->GetStaticField(0x310C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::JGLOEAGHDLL*>** StaticGet_HPMDGHCFOPG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::JGLOEAGHDLL*>**)Il2CppClass::FromTypeDefinitionIndex(CCNAJNFLFGP_TypeDefinitionIndex)->GetStaticField(0x310C8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNAJNFLFGP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCNAJNFLFGP__CCTOR_OFFSET))();
	}

	static ::System::String* KBLEBGELJNP(::IDGDIFDMIDP* GGODNFDLEGE, ::GBINEPNHKKO* EECDKMONJPM, ::System::Int32 LJMPPBEMEPP, ::System::String* INPMBOAGOCP, ::System::Collections::Generic::IList_1<::System::String*>* HKHFKFGFIJK, ::System::Collections::Generic::IList_1<::System::Int32>* GHIAMNCKOOM, ::System::String* NEBPLBMBPNP)
	{
		return ((::System::String*(*)(::IDGDIFDMIDP*, ::GBINEPNHKKO*, ::System::Int32, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::String*))((::PBYTE)hIl2Cpp + CCNAJNFLFGP_KBLEBGELJNP_OFFSET))(GGODNFDLEGE, EECDKMONJPM, LJMPPBEMEPP, INPMBOAGOCP, HKHFKFGFIJK, GHIAMNCKOOM, NEBPLBMBPNP);
	}

	static ::System::String* LEKBHMHNOLB(::IDGDIFDMIDP* GGODNFDLEGE, ::GBINEPNHKKO* EECDKMONJPM, ::System::Int32 LJMPPBEMEPP, ::System::String* INPMBOAGOCP, ::System::Collections::Generic::IList_1<::System::String*>* HKHFKFGFIJK, ::System::Collections::Generic::IList_1<::System::Int32>* GHIAMNCKOOM, ::System::String* NEBPLBMBPNP)
	{
		return ((::System::String*(*)(::IDGDIFDMIDP*, ::GBINEPNHKKO*, ::System::Int32, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::String*))((::PBYTE)hIl2Cpp + CCNAJNFLFGP_LEKBHMHNOLB_OFFSET))(GGODNFDLEGE, EECDKMONJPM, LJMPPBEMEPP, INPMBOAGOCP, HKHFKFGFIJK, GHIAMNCKOOM, NEBPLBMBPNP);
	}
};
