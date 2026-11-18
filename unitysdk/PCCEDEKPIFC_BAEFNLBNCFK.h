#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityGaussianBlurEffect; }
namespace MoleMole::Config { class ConfigGaussianBlurEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCCEDEKPIFC_BAEFNLBNCFK_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x1845FA40)
#define PCCEDEKPIFC_BAEFNLBNCFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1845FA30)

inline static constexpr unsigned int PCCEDEKPIFC_BAEFNLBNCFK_TypeDefinitionIndex = 77691;

class PCCEDEKPIFC_BAEFNLBNCFK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCEDEKPIFC_BAEFNLBNCFK__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGaussianBlurEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGaussianBlurEffects*>*))((::PBYTE)hIl2Cpp + PCCEDEKPIFC_BAEFNLBNCFK_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
