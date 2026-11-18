#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineDataExtra; }
namespace MoleMole { class TimelineDataExtra; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCFOOIDLJLI_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x14783CE0)
#define CCFOOIDLJLI_CPKBAENNJIA_OFFSET UNITYSDK_OFFSET(0x14782E70)
#define CCFOOIDLJLI_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x14783BB0)
#define CCFOOIDLJLI_FBHFDLLNOKH_OFFSET UNITYSDK_OFFSET(0x147840F0)
#define CCFOOIDLJLI_JILNCGGMFCL_OFFSET UNITYSDK_OFFSET(0x14782BF0)
#define CCFOOIDLJLI_JKHMCFEACJH_OFFSET UNITYSDK_OFFSET(0x14783730)
#define CCFOOIDLJLI_KCHMBHKELDL_OFFSET UNITYSDK_OFFSET(0x14783D30)
#define CCFOOIDLJLI_LMEGBLHMIEM_OFFSET UNITYSDK_OFFSET(0x147829C0)
#define CCFOOIDLJLI_NHMGNHOPMJH_OFFSET UNITYSDK_OFFSET(0x14783D80)
#define CCFOOIDLJLI_PMJGJNFGMEI_OFFSET UNITYSDK_OFFSET(0x14783970)
#define CCFOOIDLJLI__CCTOR_OFFSET UNITYSDK_OFFSET(0x147829B0)

inline static constexpr unsigned int CCFOOIDLJLI_TypeDefinitionIndex = 67388;

class CCFOOIDLJLI : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TimelineDataExtra*>** StaticGet_EPPIEDEOCBH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TimelineDataExtra*>**)Il2CppClass::FromTypeDefinitionIndex(CCFOOIDLJLI_TypeDefinitionIndex)->GetStaticField(0x47BF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCFOOIDLJLI__CCTOR_OFFSET))();
	}

	static ::System::Boolean LMEGBLHMIEM(::MoleMole::TimelineDataExtra* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::MoleMole::TimelineDataExtra*))((::PBYTE)hIl2Cpp + CCFOOIDLJLI_LMEGBLHMIEM_OFFSET))(LJBPECKCCEA);
	}

	static ::System::Void JILNCGGMFCL(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CCFOOIDLJLI_JILNCGGMFCL_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void CPKBAENNJIA(::System::Collections::Generic::List_1<::MoleMole::ConfigTimelineDataExtra*>* MAFFABEOJJE)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigTimelineDataExtra*>*))((::PBYTE)hIl2Cpp + CCFOOIDLJLI_CPKBAENNJIA_OFFSET))(MAFFABEOJJE);
	}

	static ::System::Boolean JKHMCFEACJH(::MoleMole::TimelineDataExtra* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::MoleMole::TimelineDataExtra*))((::PBYTE)hIl2Cpp + CCFOOIDLJLI_JKHMCFEACJH_OFFSET))(LJBPECKCCEA);
	}

	static ::System::Boolean PMJGJNFGMEI(::MoleMole::TimelineDataExtra* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::MoleMole::TimelineDataExtra*))((::PBYTE)hIl2Cpp + CCFOOIDLJLI_PMJGJNFGMEI_OFFSET))(LJBPECKCCEA);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CCFOOIDLJLI_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TimelineDataExtra*>* KCHMBHKELDL()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TimelineDataExtra*>*(*)())((::PBYTE)hIl2Cpp + CCFOOIDLJLI_KCHMBHKELDL_OFFSET))();
	}

	static ::MoleMole::TimelineDataExtra* NHMGNHOPMJH(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::TimelineDataExtra*(*)(::System::String*))((::PBYTE)hIl2Cpp + CCFOOIDLJLI_NHMGNHOPMJH_OFFSET))(ANGLHCBLFNK);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CCFOOIDLJLI_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Boolean FBHFDLLNOKH(::MoleMole::TimelineDataExtra* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::MoleMole::TimelineDataExtra*))((::PBYTE)hIl2Cpp + CCFOOIDLJLI_FBHFDLLNOKH_OFFSET))(LJBPECKCCEA);
	}
};
