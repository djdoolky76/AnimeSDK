#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAudioBasePath; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BPAFFMMJJCJ_CNECILFOMKO_OFFSET UNITYSDK_OFFSET(0x1509CDB0)
#define BPAFFMMJJCJ_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1509CD60)
#define BPAFFMMJJCJ_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1509D090)
#define BPAFFMMJJCJ_JJJBILOJGHI_OFFSET UNITYSDK_OFFSET(0x1509D1C0)
#define BPAFFMMJJCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1509CD50)

inline static constexpr unsigned int BPAFFMMJJCJ_TypeDefinitionIndex = 53774;

class BPAFFMMJJCJ : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigAudioBasePath** StaticGet_DAGNOKEOKMD()
	{
		return (::MoleMole::Config::ConfigAudioBasePath**)Il2CppClass::FromTypeDefinitionIndex(BPAFFMMJJCJ_TypeDefinitionIndex)->GetStaticField(0x50070);
	}
	// static const ::System::String* HHMLICNCJBG; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAFFMMJJCJ__CTOR_OFFSET))(this);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BPAFFMMJJCJ_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void CNECILFOMKO(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BPAFFMMJJCJ_CNECILFOMKO_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + BPAFFMMJJCJ_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigAudioBasePath* JJJBILOJGHI()
	{
		return ((::MoleMole::Config::ConfigAudioBasePath*(*)())((::PBYTE)hIl2Cpp + BPAFFMMJJCJ_JJJBILOJGHI_OFFSET))();
	}
};
