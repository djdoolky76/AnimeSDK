#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityCausticsEffect; }
namespace MoleMole::Config { class ConfigEntityCausticsEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JOFNAEPBGGL_KLHOJEBFBJA_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x19470600)
#define JOFNAEPBGGL_KLHOJEBFBJA__CTOR_OFFSET UNITYSDK_OFFSET(0x194705F0)

inline static constexpr unsigned int JOFNAEPBGGL_KLHOJEBFBJA_TypeDefinitionIndex = 44971;

class JOFNAEPBGGL_KLHOJEBFBJA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCausticsEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFNAEPBGGL_KLHOJEBFBJA__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCausticsEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityCausticsEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCausticsEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityCausticsEffects*>*))((::PBYTE)hIl2Cpp + JOFNAEPBGGL_KLHOJEBFBJA_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
