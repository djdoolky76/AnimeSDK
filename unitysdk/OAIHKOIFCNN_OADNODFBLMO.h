#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJMFECAAPHD;

#define OAIHKOIFCNN_OADNODFBLMO_FEFCLBKLKMF_OFFSET UNITYSDK_OFFSET(0xFB404F0)
#define OAIHKOIFCNN_OADNODFBLMO__CTOR_OFFSET UNITYSDK_OFFSET(0xFB3FC40)

inline static constexpr unsigned int OAIHKOIFCNN_OADNODFBLMO_TypeDefinitionIndex = 79369;

class OAIHKOIFCNN_OADNODFBLMO : public ::System::Object
{
public:
	::FJMFECAAPHD* PLBEAIIJADM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIHKOIFCNN_OADNODFBLMO__CTOR_OFFSET))(this);
	}

	::System::Void FEFCLBKLKMF(::System::Boolean DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OAIHKOIFCNN_OADNODFBLMO_FEFCLBKLKMF_OFFSET))(this, DJCNCELJPOM);
	}
};
