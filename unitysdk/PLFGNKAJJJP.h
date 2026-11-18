#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMJECHPNNLM.h"

namespace System { class String; }

#define PLFGNKAJJJP_HBDAKDMFDAK_OFFSET UNITYSDK_OFFSET(0x1B9F0C50)
#define PLFGNKAJJJP_HEHLKHOJJHM_OFFSET UNITYSDK_OFFSET(0x1B9F0E60)
#define PLFGNKAJJJP_NNFNOIFLLAH_OFFSET UNITYSDK_OFFSET(0x1B9F0D70)
#define PLFGNKAJJJP_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x1B9F0C00)
#define PLFGNKAJJJP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9F0CC0)
#define PLFGNKAJJJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F0B80)

inline static constexpr unsigned int PLFGNKAJJJP_TypeDefinitionIndex = 74641;

class PLFGNKAJJJP : public ::NMJECHPNNLM
{
public:
	static ::PLFGNKAJJJP** StaticGet_CKLNGEOKBIH()
	{
		return (::PLFGNKAJJJP**)Il2CppClass::FromTypeDefinitionIndex(PLFGNKAJJJP_TypeDefinitionIndex)->GetStaticField(0x4F040);
	}
	::System::Double HHGILNNMNAK; // 0xA0

	::System::Void _ctor(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + PLFGNKAJJJP__CTOR_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLFGNKAJJJP__CCTOR_OFFSET))();
	}

	::System::Double OMPFLKCBFHF()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFGNKAJJJP_OMPFLKCBFHF_OFFSET))(this);
	}

	::System::String* HBDAKDMFDAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFGNKAJJJP_HBDAKDMFDAK_OFFSET))(this);
	}

	::System::Double NNFNOIFLLAH()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFGNKAJJJP_NNFNOIFLLAH_OFFSET))(this);
	}

	::System::String* HEHLKHOJJHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFGNKAJJJP_HEHLKHOJJHM_OFFSET))(this);
	}
};
