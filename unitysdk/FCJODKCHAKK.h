#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Type; }

#define FCJODKCHAKK_BELNEIKHHAJ_OFFSET UNITYSDK_OFFSET(0x1EBDA3B0)
#define FCJODKCHAKK_EKELAKECLJA_OFFSET UNITYSDK_OFFSET(0x1EBDA500)

inline static constexpr unsigned int FCJODKCHAKK_TypeDefinitionIndex = 35265;

	class FCJODKCHAKK : public ::System::Object
	{
	public:
		static ::System::Int32 BELNEIKHHAJ(::System::Type* a1)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + FCJODKCHAKK_BELNEIKHHAJ_OFFSET))(a1);
		}

		static ::System::Int32 EKELAKECLJA(::System::Type* a1)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + FCJODKCHAKK_EKELAKECLJA_OFFSET))(a1);
		}

	};
