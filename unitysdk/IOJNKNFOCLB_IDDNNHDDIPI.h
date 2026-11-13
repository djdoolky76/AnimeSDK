#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define IOJNKNFOCLB_IDDNNHDDIPI_EDFDIKELADA_OFFSET UNITYSDK_OFFSET(0x208D7170)

inline static constexpr unsigned int IOJNKNFOCLB_IDDNNHDDIPI_TypeDefinitionIndex = 44926;

	class IOJNKNFOCLB_IDDNNHDDIPI : public ::System::Object
	{
	public:
		static ::System::String* EDFDIKELADA(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + IOJNKNFOCLB_IDDNNHDDIPI_EDFDIKELADA_OFFSET))(a1);
		}

	};
