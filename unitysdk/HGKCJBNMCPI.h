#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HGKCJBNMCPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAD8C80)

inline static constexpr unsigned int HGKCJBNMCPI_TypeDefinitionIndex = 36202;

	class HGKCJBNMCPI : public ::System::Object
	{
	public:
		::System::String* NIENABKICAB; // 0x10
		::System::String* JFCBMDJIDAP; // 0x18
		::System::String* FHGGCDAHFMA; // 0x20
		::System::String* FMKLNIIEDCM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKCJBNMCPI_CTOR_OFFSET))(this);
		}

	};
