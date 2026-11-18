#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FHGHJDPHHEL;

#define IGEHHJBPJGI_GNFJFFABOIO_OFFSET UNITYSDK_OFFSET(0x1A39DC70)
#define IGEHHJBPJGI_KPOEPPJFPGM_OFFSET UNITYSDK_OFFSET(0x1A39E5D0)
#define IGEHHJBPJGI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A39DC60)
#define IGEHHJBPJGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39DC50)

inline static constexpr unsigned int IGEHHJBPJGI_TypeDefinitionIndex = 72812;

class IGEHHJBPJGI : public ::System::Object
{
public:
	static ::System::Single* StaticGet_AGAMCKLJPCA()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(IGEHHJBPJGI_TypeDefinitionIndex)->GetStaticField(0x11910);
	}
	static ::System::Single* StaticGet_OJHJMJMLJJJ()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(IGEHHJBPJGI_TypeDefinitionIndex)->GetStaticField(0x11914);
	}
	static ::System::Single* StaticGet_IOHPAIMLDAM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(IGEHHJBPJGI_TypeDefinitionIndex)->GetStaticField(0x11918);
	}
	static ::System::Single* StaticGet_HIBAGEHHLHN()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(IGEHHJBPJGI_TypeDefinitionIndex)->GetStaticField(0x1191C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEHHJBPJGI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGEHHJBPJGI__CCTOR_OFFSET))();
	}

	static ::System::Void GNFJFFABOIO(::FHGHJDPHHEL* AAOCANGHBDG, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::FHGHJDPHHEL*, ::System::Single))((::PBYTE)hIl2Cpp + IGEHHJBPJGI_GNFJFFABOIO_OFFSET))(AAOCANGHBDG, PBCAAADNEPK);
	}

	static ::System::Void KPOEPPJFPGM(::FHGHJDPHHEL* AAOCANGHBDG, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::FHGHJDPHHEL*, ::System::Single))((::PBYTE)hIl2Cpp + IGEHHJBPJGI_KPOEPPJFPGM_OFFSET))(AAOCANGHBDG, PBCAAADNEPK);
	}
};
