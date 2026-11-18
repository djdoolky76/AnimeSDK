#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityTimeSlowBase; }
namespace MoleMole::Config { class ConfigEntityTimeSlows; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KBALHDOAHEE_CAPNIPLHOLN_OFFSET UNITYSDK_OFFSET(0x16329D90)
#define KBALHDOAHEE_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x16329950)
#define KBALHDOAHEE_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x163299A0)
#define KBALHDOAHEE_HMMDLHEFKPJ_OFFSET UNITYSDK_OFFSET(0x163296D0)
#define KBALHDOAHEE_MHJOPFCOABB_OFFSET UNITYSDK_OFFSET(0x16328FC0)
#define KBALHDOAHEE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x16329630)
#define KBALHDOAHEE_PHOHBGIKHGF_OFFSET UNITYSDK_OFFSET(0x16329AD0)
#define KBALHDOAHEE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16328FB0)

inline static constexpr unsigned int KBALHDOAHEE_TypeDefinitionIndex = 44925;

class KBALHDOAHEE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTimeSlowBase*>** StaticGet_KJIHPLMEMMF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTimeSlowBase*>**)Il2CppClass::FromTypeDefinitionIndex(KBALHDOAHEE_TypeDefinitionIndex)->GetStaticField(0x4F6F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBALHDOAHEE__CCTOR_OFFSET))();
	}

	static ::System::Void MHJOPFCOABB(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityTimeSlows*>* IBHBPKPLINI)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityTimeSlows*>*))((::PBYTE)hIl2Cpp + KBALHDOAHEE_MHJOPFCOABB_OFFSET))(IBHBPKPLINI);
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBALHDOAHEE_NPOLNFDBOOD_OFFSET))();
	}

	static ::System::Void HMMDLHEFKPJ(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KBALHDOAHEE_HMMDLHEFKPJ_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KBALHDOAHEE_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + KBALHDOAHEE_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Boolean PHOHBGIKHGF(::System::String* DNOHAOIAFOP)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + KBALHDOAHEE_PHOHBGIKHGF_OFFSET))(DNOHAOIAFOP);
	}

	static ::MoleMole::Config::ConfigEntityTimeSlowBase* CAPNIPLHOLN(::System::String* DNOHAOIAFOP)
	{
		return ((::MoleMole::Config::ConfigEntityTimeSlowBase*(*)(::System::String*))((::PBYTE)hIl2Cpp + KBALHDOAHEE_CAPNIPLHOLN_OFFSET))(DNOHAOIAFOP);
	}
};
