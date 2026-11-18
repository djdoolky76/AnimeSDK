#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODJBMJLOACF.h"
#include "unitysdk/OFCHEAEHJEF.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHLFEANFAGO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15B8D070)
#define KHLFEANFAGO_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x15B8D140)
#define KHLFEANFAGO_FJOLPGBLBBH_OFFSET UNITYSDK_OFFSET(0x15B8CFD0)
#define KHLFEANFAGO_HAPMNFIILOO_OFFSET UNITYSDK_OFFSET(0x15B8D660)
#define KHLFEANFAGO_KBONDFLPOMO_OFFSET UNITYSDK_OFFSET(0x15B8D5A0)
#define KHLFEANFAGO_KMHOKFENABH_OFFSET UNITYSDK_OFFSET(0x15B8D1E0)
#define KHLFEANFAGO_NGGNBLIEHHA_OFFSET UNITYSDK_OFFSET(0x15B8D400)
#define KHLFEANFAGO__CTOR_OFFSET UNITYSDK_OFFSET(0x15B8D9A0)

inline static constexpr unsigned int KHLFEANFAGO_TypeDefinitionIndex = 50600;

class KHLFEANFAGO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::OFCHEAEHJEF>* BMMKEOPKBIE; // 0x10
	::ODJBMJLOACF KGBDIICHFEL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLFEANFAGO__CTOR_OFFSET))(this);
	}

	::System::Single FJOLPGBLBBH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLFEANFAGO_FJOLPGBLBBH_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLFEANFAGO_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLFEANFAGO_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Single KMHOKFENABH(::System::String* AELLPLBJELA)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KHLFEANFAGO_KMHOKFENABH_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void NGGNBLIEHHA(::System::Single CKELOFDFEEM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHLFEANFAGO_NGGNBLIEHHA_OFFSET))(this, CKELOFDFEEM);
	}

	::System::Void KBONDFLPOMO(::System::Single CKELOFDFEEM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHLFEANFAGO_KBONDFLPOMO_OFFSET))(this, CKELOFDFEEM);
	}

	::System::Void HAPMNFIILOO(::System::String* IPOABPNFPHJ, ::System::Single CKELOFDFEEM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + KHLFEANFAGO_HAPMNFIILOO_OFFSET))(this, IPOABPNFPHJ, CKELOFDFEEM);
	}
};
