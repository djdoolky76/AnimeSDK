#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCLANFCKHPN;
class PMDADDHKJFB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBJFONHBNIN_BNEBCOLNNJK_OFFSET UNITYSDK_OFFSET(0x1535A000)
#define DBJFONHBNIN_EEODGDDJGKM_OFFSET UNITYSDK_OFFSET(0x153588F0)
#define DBJFONHBNIN_IEMOIBDHIIB_OFFSET UNITYSDK_OFFSET(0x153591B0)
#define DBJFONHBNIN_PKFICJHDILI_OFFSET UNITYSDK_OFFSET(0x1535A0E0)

inline static constexpr unsigned int DBJFONHBNIN_TypeDefinitionIndex = 59745;

class DBJFONHBNIN : public ::System::Object
{
public:
	static ::System::Void EEODGDDJGKM(::BCLANFCKHPN* DEEIIKPEOCK)
	{
		return ((::System::Void(*)(::BCLANFCKHPN*))((::PBYTE)hIl2Cpp + DBJFONHBNIN_EEODGDDJGKM_OFFSET))(DEEIIKPEOCK);
	}

	static ::System::Void PKFICJHDILI(::System::String* HAAJFLJEHNH, ::System::Double EGEGIMGMJHN, ::PMDADDHKJFB* IIHHLAJGPMD)
	{
		return ((::System::Void(*)(::System::String*, ::System::Double, ::PMDADDHKJFB*))((::PBYTE)hIl2Cpp + DBJFONHBNIN_PKFICJHDILI_OFFSET))(HAAJFLJEHNH, EGEGIMGMJHN, IIHHLAJGPMD);
	}

	static ::System::Void IEMOIBDHIIB(::System::Collections::Generic::List_1<::PMDADDHKJFB*>* MAGKNNLMIDI)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::PMDADDHKJFB*>*))((::PBYTE)hIl2Cpp + DBJFONHBNIN_IEMOIBDHIIB_OFFSET))(MAGKNNLMIDI);
	}

	static ::System::Boolean BNEBCOLNNJK(::System::Double MENJBPJMMHA, ::System::Double KBPLMDAFOEF, ::System::UInt32& EJAOAGGJHHA)
	{
		return ((::System::Boolean(*)(::System::Double, ::System::Double, ::System::UInt32&))((::PBYTE)hIl2Cpp + DBJFONHBNIN_BNEBCOLNNJK_OFFSET))(MENJBPJMMHA, KBPLMDAFOEF, EJAOAGGJHHA);
	}
};
