#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLockTarget; }
namespace MoleMole::Config { class ConfigLockTargetMiscInfo; }
namespace MoleMole::Config { class ConfigLockTargets; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GEFNKALACAL_BJHGPBFNJLL_OFFSET UNITYSDK_OFFSET(0xBB87E90)
#define GEFNKALACAL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xBB88200)
#define GEFNKALACAL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xBB88110)
#define GEFNKALACAL_EDPILHFFNPF_OFFSET UNITYSDK_OFFSET(0xBB88300)
#define GEFNKALACAL_HALAIONJAHO_OFFSET UNITYSDK_OFFSET(0xBB88580)
#define GEFNKALACAL_LELCCKLNCFC_OFFSET UNITYSDK_OFFSET(0xBB88F10)
#define GEFNKALACAL_LLKDBDPCCON_OFFSET UNITYSDK_OFFSET(0xBB888B0)
#define GEFNKALACAL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xBB89120)
#define GEFNKALACAL_OIJIEOINLPL_OFFSET UNITYSDK_OFFSET(0xBB88A90)
#define GEFNKALACAL__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB87E80)

inline static constexpr unsigned int GEFNKALACAL_TypeDefinitionIndex = 53696;

class GEFNKALACAL : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigLockTargetMiscInfo** StaticGet_EMHBMDOAHIJ()
	{
		return (::MoleMole::Config::ConfigLockTargetMiscInfo**)Il2CppClass::FromTypeDefinitionIndex(GEFNKALACAL_TypeDefinitionIndex)->GetStaticField(0x44100);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLockTarget*>** StaticGet_LEAILOPLBON()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLockTarget*>**)Il2CppClass::FromTypeDefinitionIndex(GEFNKALACAL_TypeDefinitionIndex)->GetStaticField(0x44108);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEFNKALACAL__CCTOR_OFFSET))();
	}

	static ::System::Void BJHGPBFNJLL(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + GEFNKALACAL_BJHGPBFNJLL_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + GEFNKALACAL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigLockTarget* EDPILHFFNPF(::System::String* CPEGDIGMGBC)
	{
		return ((::MoleMole::Config::ConfigLockTarget*(*)(::System::String*))((::PBYTE)hIl2Cpp + GEFNKALACAL_EDPILHFFNPF_OFFSET))(CPEGDIGMGBC);
	}

	static ::System::Single HALAIONJAHO(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + GEFNKALACAL_HALAIONJAHO_OFFSET))(ABHBKFJKINO);
	}

	static ::System::Void OIJIEOINLPL(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLockTargets*>* DJFADOLBOEB)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLockTargets*>*))((::PBYTE)hIl2Cpp + GEFNKALACAL_OIJIEOINLPL_OFFSET))(DJFADOLBOEB);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + GEFNKALACAL_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEFNKALACAL_NPOLNFDBOOD_OFFSET))();
	}

	static ::System::Void LELCCKLNCFC(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + GEFNKALACAL_LELCCKLNCFC_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigLockTargetMiscInfo* LLKDBDPCCON()
	{
		return ((::MoleMole::Config::ConfigLockTargetMiscInfo*(*)())((::PBYTE)hIl2Cpp + GEFNKALACAL_LLKDBDPCCON_OFFSET))();
	}
};
