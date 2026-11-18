#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityFXColorCorrection; }
namespace MoleMole::Config { class ConfigEntityFXColorCorrections; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBLFGIOFOHD_GJGOFFNKGJB_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x15B3A270)
#define HBLFGIOFOHD_GJGOFFNKGJB__CTOR_OFFSET UNITYSDK_OFFSET(0x15B3A260)

inline static constexpr unsigned int HBLFGIOFOHD_GJGOFFNKGJB_TypeDefinitionIndex = 66818;

class HBLFGIOFOHD_GJGOFFNKGJB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXColorCorrection*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBLFGIOFOHD_GJGOFFNKGJB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXColorCorrection*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityFXColorCorrections*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXColorCorrection*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityFXColorCorrections*>*))((::PBYTE)hIl2Cpp + HBLFGIOFOHD_GJGOFFNKGJB_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
