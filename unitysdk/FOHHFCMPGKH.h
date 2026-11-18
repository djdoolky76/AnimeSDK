#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigLanguageVideo; }
namespace MoleMole { class LanguageVideo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOHHFCMPGKH_AFCBFPDAPKA_OFFSET UNITYSDK_OFFSET(0x179C16A0)
#define FOHHFCMPGKH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x179C13E0)
#define FOHHFCMPGKH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x179C1BA0)
#define FOHHFCMPGKH_OJMFFCPOLEN_OFFSET UNITYSDK_OFFSET(0x179C11E0)
#define FOHHFCMPGKH__CCTOR_OFFSET UNITYSDK_OFFSET(0x179C1140)

inline static constexpr unsigned int FOHHFCMPGKH_TypeDefinitionIndex = 75557;

class FOHHFCMPGKH : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>** StaticGet_BEAKCDNCEMI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>**)Il2CppClass::FromTypeDefinitionIndex(FOHHFCMPGKH_TypeDefinitionIndex)->GetStaticField(0x3DCB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOHHFCMPGKH__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>* OJMFFCPOLEN()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>*(*)())((::PBYTE)hIl2Cpp + FOHHFCMPGKH_OJMFFCPOLEN_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + FOHHFCMPGKH_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void AFCBFPDAPKA(::System::Collections::Generic::List_1<::MoleMole::ConfigLanguageVideo*>* KFNFOMMJFNP)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigLanguageVideo*>*))((::PBYTE)hIl2Cpp + FOHHFCMPGKH_AFCBFPDAPKA_OFFSET))(KFNFOMMJFNP);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + FOHHFCMPGKH_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
