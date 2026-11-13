#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define IGNKFJIPMEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAD8B00)
#define IGNKFJIPMEN_EOJBCLHBEGA_OFFSET UNITYSDK_OFFSET(0x1CB0DD50)

inline static constexpr unsigned int IGNKFJIPMEN_TypeDefinitionIndex = 36201;

	class IGNKFJIPMEN : public ::System::Object
	{
	public:
		::System::String* NHHLMDLDMIL; // 0x10
		::System::String* CANHPBEBAML; // 0x18
		::System::String* OGHKHLCKFOG; // 0x20
		::System::String* IIMPLGFMIBK; // 0x28
		::System::String* FMKLNIIEDCM; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNKFJIPMEN_CTOR_OFFSET))(this);
		}

		::System::String* EOJBCLHBEGA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNKFJIPMEN_EOJBCLHBEGA_OFFSET))(this);
		}

	};
