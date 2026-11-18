#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole::Config { class ConfigSkinMdb; }
namespace MoleMole::Config { class SkinMdbDataOfRenderer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BCDAIEBLHPL_BJHHNNGACFN_OFFSET UNITYSDK_OFFSET(0x1423DF40)
#define BCDAIEBLHPL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1423E220)
#define BCDAIEBLHPL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1423E5B0)
#define BCDAIEBLHPL_LFDCKMJHCGP_OFFSET UNITYSDK_OFFSET(0x1423DD20)
#define BCDAIEBLHPL_MKCCAEGPIJB_OFFSET UNITYSDK_OFFSET(0x1423E2B0)
#define BCDAIEBLHPL_NPAHAPEAPPP_OFFSET UNITYSDK_OFFSET(0x1423D950)
#define BCDAIEBLHPL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1423D8B0)

inline static constexpr unsigned int BCDAIEBLHPL_TypeDefinitionIndex = 63358;

class BCDAIEBLHPL : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigSkinMdb** StaticGet_MAILDDBAAPD()
	{
		return (::MoleMole::Config::ConfigSkinMdb**)Il2CppClass::FromTypeDefinitionIndex(BCDAIEBLHPL_TypeDefinitionIndex)->GetStaticField(0x47B90);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::String*>, ::MoleMole::Config::SkinMdbDataOfRenderer*>** StaticGet_FCJOCKEOPBM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::String*>, ::MoleMole::Config::SkinMdbDataOfRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(BCDAIEBLHPL_TypeDefinitionIndex)->GetStaticField(0x47B98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCDAIEBLHPL__CCTOR_OFFSET))();
	}

	static ::System::Void NPAHAPEAPPP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCDAIEBLHPL_NPAHAPEAPPP_OFFSET))();
	}

	static ::System::Void LFDCKMJHCGP(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BCDAIEBLHPL_LFDCKMJHCGP_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Boolean BJHHNNGACFN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BCDAIEBLHPL_BJHHNNGACFN_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BCDAIEBLHPL_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Boolean MKCCAEGPIJB(::System::Int32 CJPLACFCFBP, ::System::String* EGHDEGLFOBN, ::System::Collections::Generic::List_1<::System::String*>*& DJCNCELJPOM, ::System::Boolean JENMPJJHNHE)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + BCDAIEBLHPL_MKCCAEGPIJB_OFFSET))(CJPLACFCFBP, EGHDEGLFOBN, DJCNCELJPOM, JENMPJJHNHE);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + BCDAIEBLHPL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
