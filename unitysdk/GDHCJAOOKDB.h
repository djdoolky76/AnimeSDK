#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/WhiteBoxValidationSeverity.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Object; }

#define GDHCJAOOKDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1599C3B0)
#define GDHCJAOOKDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1599C350)

inline static constexpr unsigned int GDHCJAOOKDB_TypeDefinitionIndex = 48950;

	class GDHCJAOOKDB : public ::System::Object
	{
	public:
		::System::String* GGCIGGGOLHG; // 0x10
		::System::String* OOPKIKDJLOK; // 0x18
		::UnityEngine::Object* MCLLALGABAB; // 0x20
		::System::String* KOKJDEKFPDH; // 0x28
		::System::String* CAJPAGKBBML; // 0x30
		::RPGTools::LDWhiteBox::WhiteBoxValidationSeverity CJFGCAMPOFI; // 0x38
		::System::Single IEIDJBIPIKG; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHCJAOOKDB_CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHCJAOOKDB_TOSTRING_OFFSET))(this);
		}

	};
