#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKGOKOOBANF_DKCCELBNBLM_OFFSET UNITYSDK_OFFSET(0x16C95080)
#define MKGOKOOBANF_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x16C94E60)
#define MKGOKOOBANF_OJNOGGOAGNN_OFFSET UNITYSDK_OFFSET(0x16C94D80)
#define MKGOKOOBANF__CTOR_OFFSET UNITYSDK_OFFSET(0x16C94C80)

inline static constexpr unsigned int MKGOKOOBANF_TypeDefinitionIndex = 45311;

class MKGOKOOBANF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* KFGMJBFGHMJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* JMHPCEHANPC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGOKOOBANF__CTOR_OFFSET))(this);
	}

	::System::String* OJNOGGOAGNN(::System::Int32 LIPIPGHBHFH)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MKGOKOOBANF_OJNOGGOAGNN_OFFSET))(this, LIPIPGHBHFH);
	}

	::System::Void FLHNGDLANDC(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MKGOKOOBANF_FLHNGDLANDC_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void DKCCELBNBLM(::System::String* LIPIPGHBHFH, ::System::String* BIEDEFCGJHP, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MKGOKOOBANF_DKCCELBNBLM_OFFSET))(this, LIPIPGHBHFH, BIEDEFCGJHP, AELLPLBJELA);
	}
};
