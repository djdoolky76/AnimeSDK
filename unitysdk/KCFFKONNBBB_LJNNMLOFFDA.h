#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigNapBloom; }
namespace MoleMole::Config { class ConfigNapBlooms; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KCFFKONNBBB_LJNNMLOFFDA_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x15B81A40)
#define KCFFKONNBBB_LJNNMLOFFDA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B81A30)

inline static constexpr unsigned int KCFFKONNBBB_LJNNMLOFFDA_TypeDefinitionIndex = 79004;

class KCFFKONNBBB_LJNNMLOFFDA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigNapBloom*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFFKONNBBB_LJNNMLOFFDA__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigNapBloom*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigNapBlooms*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigNapBloom*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigNapBlooms*>*))((::PBYTE)hIl2Cpp + KCFFKONNBBB_LJNNMLOFFDA_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
