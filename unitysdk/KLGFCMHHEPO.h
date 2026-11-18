#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PlayerAccessoryType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigPlayerAccessory; }
namespace MoleMole::Config { class PlayerAccessorySkinData; }
namespace MoleMole::Config { class PlayerAccessoryTabData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLGFCMHHEPO_BJHHNNGACFN_OFFSET UNITYSDK_OFFSET(0x157F7AA0)
#define KLGFCMHHEPO_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x157F7030)
#define KLGFCMHHEPO_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x157F72E0)
#define KLGFCMHHEPO_LFDCKMJHCGP_OFFSET UNITYSDK_OFFSET(0x157F70C0)
#define KLGFCMHHEPO_NPAHAPEAPPP_OFFSET UNITYSDK_OFFSET(0x157F7770)
#define KLGFCMHHEPO_PGNJIJGCHII_OFFSET UNITYSDK_OFFSET(0x157F7490)
#define KLGFCMHHEPO__CCTOR_OFFSET UNITYSDK_OFFSET(0x157F6F90)

inline static constexpr unsigned int KLGFCMHHEPO_TypeDefinitionIndex = 90756;

class KLGFCMHHEPO : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::PlayerAccessorySkinData*>** StaticGet_FCJOCKEOPBM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::PlayerAccessorySkinData*>**)Il2CppClass::FromTypeDefinitionIndex(KLGFCMHHEPO_TypeDefinitionIndex)->GetStaticField(0x51580);
	}
	static ::MoleMole::Config::ConfigPlayerAccessory** StaticGet_APGAJPPNFDF()
	{
		return (::MoleMole::Config::ConfigPlayerAccessory**)Il2CppClass::FromTypeDefinitionIndex(KLGFCMHHEPO_TypeDefinitionIndex)->GetStaticField(0x51588);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLGFCMHHEPO__CCTOR_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KLGFCMHHEPO_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void LFDCKMJHCGP(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KLGFCMHHEPO_LFDCKMJHCGP_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + KLGFCMHHEPO_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Boolean PGNJIJGCHII(::System::Int32 CJPLACFCFBP, ::MoleMole::PlayerAccessoryType JFHFNPIDIOA, ::MoleMole::Config::PlayerAccessoryTabData*& DJCNCELJPOM, ::System::Boolean JENMPJJHNHE)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::PlayerAccessoryType, ::MoleMole::Config::PlayerAccessoryTabData*&, ::System::Boolean))((::PBYTE)hIl2Cpp + KLGFCMHHEPO_PGNJIJGCHII_OFFSET))(CJPLACFCFBP, JFHFNPIDIOA, DJCNCELJPOM, JENMPJJHNHE);
	}

	static ::System::Void NPAHAPEAPPP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLGFCMHHEPO_NPAHAPEAPPP_OFFSET))();
	}

	static ::System::Boolean BJHHNNGACFN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLGFCMHHEPO_BJHHNNGACFN_OFFSET))();
	}
};
