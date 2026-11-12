#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/WhiteBoxValidationSeverity.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Object; }

#define GDHCJAOOKDB_CTOR_OFFSET UNITYSDK_OFFSET(0x168D31A0)
#define GDHCJAOOKDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x168D3140)

inline static constexpr unsigned int GDHCJAOOKDB_TypeDefinitionIndex = 50009;

	class GDHCJAOOKDB : public ::System::Object
	{
	public:
		::System::String* CAJPAGKBBML; // 0x10
		::System::String* KOKJDEKFPDH; // 0x18
		::System::String* OOPKIKDJLOK; // 0x20
		::UnityEngine::Object* MCLLALGABAB; // 0x28
		::System::String* GGCIGGGOLHG; // 0x30
		::System::Single IEIDJBIPIKG; // 0x38
		::RPGTools::LDWhiteBox::WhiteBoxValidationSeverity CJFGCAMPOFI; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHCJAOOKDB_CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHCJAOOKDB_TOSTRING_OFFSET))(this);
		}

	};
