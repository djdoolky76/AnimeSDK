#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKOLCOGDGEO;
class FEGNLFMDNPB;
class OLHCEJBBEJF;
namespace MoleMole { class UIHollowCardOptionsBasePopWindowController; }
namespace MoleMole { class UIHollowCardOptionsDialogContext; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BALMOGIHDOI_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x14237F70)
#define BALMOGIHDOI_DEKBALLKIDM_OFFSET UNITYSDK_OFFSET(0x14238290)
#define BALMOGIHDOI_HIKKDBMDJIK_OFFSET UNITYSDK_OFFSET(0x142382F0)
#define BALMOGIHDOI_JKPIPLLFOAE_OFFSET UNITYSDK_OFFSET(0x14237E20)
#define BALMOGIHDOI__CTOR_OFFSET UNITYSDK_OFFSET(0x14237E10)

inline static constexpr unsigned int BALMOGIHDOI_TypeDefinitionIndex = 73342;

class BALMOGIHDOI : public ::System::Object
{
public:
	::MoleMole::UIHollowCardOptionsDialogContext* DGDENJKAJDB; // 0x10
	::System::Action_2<::FEGNLFMDNPB*, ::CKOLCOGDGEO*>* IMJOLAJLCKF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BALMOGIHDOI__CTOR_OFFSET))(this);
	}

	::System::Void JKPIPLLFOAE(::System::Collections::Generic::List_1<::OLHCEJBBEJF*>* MAINFHBDABE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OLHCEJBBEJF*>*))((::PBYTE)hIl2Cpp + BALMOGIHDOI_JKPIPLLFOAE_OFFSET))(this, MAINFHBDABE);
	}

	::MoleMole::UIHollowCardOptionsBasePopWindowController* COKNIICCODC()
	{
		return ((::MoleMole::UIHollowCardOptionsBasePopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALMOGIHDOI_COKNIICCODC_OFFSET))(this);
	}

	::System::Void DEKBALLKIDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BALMOGIHDOI_DEKBALLKIDM_OFFSET))(this);
	}

	::System::Void HIKKDBMDJIK(::System::Action_2<::FEGNLFMDNPB*, ::CKOLCOGDGEO*>* EICIIBADHLD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::FEGNLFMDNPB*, ::CKOLCOGDGEO*>*))((::PBYTE)hIl2Cpp + BALMOGIHDOI_HIKKDBMDJIK_OFFSET))(this, EICIIBADHLD);
	}
};
