#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CJHAOHLEIKC_EKADAHGAODD___C_HNLPJLNFKDF_OFFSET UNITYSDK_OFFSET(0x145CCDA0)
#define CJHAOHLEIKC_EKADAHGAODD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x145CCD50)
#define CJHAOHLEIKC_EKADAHGAODD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x145CCD90)

inline static constexpr unsigned int CJHAOHLEIKC_EKADAHGAODD___c_TypeDefinitionIndex = 86479;

class CJHAOHLEIKC_EKADAHGAODD___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__7_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CJHAOHLEIKC_EKADAHGAODD___c_TypeDefinitionIndex)->GetStaticField(0x370F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CJHAOHLEIKC_EKADAHGAODD___c_TypeDefinitionIndex)->GetStaticField(0x370F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJHAOHLEIKC_EKADAHGAODD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHAOHLEIKC_EKADAHGAODD___C__CTOR_OFFSET))(this);
	}

	::System::Void HNLPJLNFKDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHAOHLEIKC_EKADAHGAODD___C_HNLPJLNFKDF_OFFSET))(this);
	}
};
