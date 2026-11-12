#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OIJLBJIKKNJ.h"
class BGKBEIOJOFH;
class OPJIPMIPKNL;
namespace RPG::Client::ComicDessert { class ComicDessertComicUnlockViewModel; }
namespace System { class String; }

#define GPNJIGCAGNO_CTOR_OFFSET UNITYSDK_OFFSET(0x16AE78F0)
#define GPNJIGCAGNO_DPFOPKIHKNO_OFFSET UNITYSDK_OFFSET(0x16AE7B30)
#define GPNJIGCAGNO_JMAEMEFEPHB_OFFSET UNITYSDK_OFFSET(0x16AE7970)

inline static constexpr unsigned int GPNJIGCAGNO_TypeDefinitionIndex = 77101;

	class GPNJIGCAGNO : public ::System::Object
	{
	public:
		::BGKBEIOJOFH* KGCJIPBOKNJ; // 0x10
		::OPJIPMIPKNL* LMPLHEBBPOE; // 0x18
		// static const ::System::String* GEJHHAMFLGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNJIGCAGNO_CTOR_OFFSET))(this);
		}

		::System::Void JMAEMEFEPHB(::RPG::Client::ComicDessert::ComicDessertComicUnlockViewModel* a1, ::OIJLBJIKKNJ a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertComicUnlockViewModel*, ::OIJLBJIKKNJ))((::PBYTE)hIl2Cpp + GPNJIGCAGNO_JMAEMEFEPHB_OFFSET))(this, a1, a2);
		}

		static ::System::Void DPFOPKIHKNO(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GPNJIGCAGNO_DPFOPKIHKNO_OFFSET))(a1);
		}

	};
