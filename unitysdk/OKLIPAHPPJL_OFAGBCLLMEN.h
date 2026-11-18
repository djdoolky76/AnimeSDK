#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityLensDirtEffect; }
namespace MoleMole::Config { class ConfigEntityLensDirtEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OKLIPAHPPJL_OFAGBCLLMEN_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x16F813E0)
#define OKLIPAHPPJL_OFAGBCLLMEN__CTOR_OFFSET UNITYSDK_OFFSET(0x16F813D0)

inline static constexpr unsigned int OKLIPAHPPJL_OFAGBCLLMEN_TypeDefinitionIndex = 83817;

class OKLIPAHPPJL_OFAGBCLLMEN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLensDirtEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLIPAHPPJL_OFAGBCLLMEN__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLensDirtEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityLensDirtEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLensDirtEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityLensDirtEffects*>*))((::PBYTE)hIl2Cpp + OKLIPAHPPJL_OFAGBCLLMEN_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
