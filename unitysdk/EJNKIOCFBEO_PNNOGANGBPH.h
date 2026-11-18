#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityScreenEffect; }
namespace MoleMole::Config { class ConfigEntityScreenEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJNKIOCFBEO_PNNOGANGBPH_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x14AA1AF0)
#define EJNKIOCFBEO_PNNOGANGBPH__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA1AE0)

inline static constexpr unsigned int EJNKIOCFBEO_PNNOGANGBPH_TypeDefinitionIndex = 59178;

class EJNKIOCFBEO_PNNOGANGBPH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNKIOCFBEO_PNNOGANGBPH__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityScreenEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityScreenEffects*>*))((::PBYTE)hIl2Cpp + EJNKIOCFBEO_PNNOGANGBPH_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
