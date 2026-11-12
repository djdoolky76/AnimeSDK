#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CKFCPCNGNEC.h"
class BGKBEIOJOFH;
class GJIPEHCDIBP;
class OPJIPMIPKNL;
namespace RPG::Client::ComicDessert { class ComicDessertPictureDetailDialogViewModel; }
namespace System { class String; }

#define CPNNLLAMHPD_CTOR_OFFSET UNITYSDK_OFFSET(0xE8F18E0)
#define CPNNLLAMHPD_DPFOPKIHKNO_OFFSET UNITYSDK_OFFSET(0xE8F1C30)
#define CPNNLLAMHPD_JMAEMEFEPHB_OFFSET UNITYSDK_OFFSET(0xE8F1960)

inline static constexpr unsigned int CPNNLLAMHPD_TypeDefinitionIndex = 77105;

	class CPNNLLAMHPD : public ::System::Object
	{
	public:
		::OPJIPMIPKNL* NNCCELNLHIL; // 0x10
		::GJIPEHCDIBP* MNNCCGEEKGA; // 0x18
		::BGKBEIOJOFH* FKKLAPJGLDB; // 0x20
		// static const ::System::String* GEJHHAMFLGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNNLLAMHPD_CTOR_OFFSET))(this);
		}

		::System::Void JMAEMEFEPHB(::RPG::Client::ComicDessert::ComicDessertPictureDetailDialogViewModel* a1, ::CKFCPCNGNEC a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertPictureDetailDialogViewModel*, ::CKFCPCNGNEC))((::PBYTE)hIl2Cpp + CPNNLLAMHPD_JMAEMEFEPHB_OFFSET))(this, a1, a2);
		}

		static ::System::Void DPFOPKIHKNO(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CPNNLLAMHPD_DPFOPKIHKNO_OFFSET))(a1);
		}

	};
