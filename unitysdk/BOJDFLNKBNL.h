#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNGPLDGOEAI.h"
class GNGPLDGOEAI;
namespace RPG::Client { class MonoExUICamera; }
namespace RPG::Client { class MonoExUICamera_CameraOutInfo; }

#define BOJDFLNKBNL_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xC192400)
#define BOJDFLNKBNL_CTOR_OFFSET UNITYSDK_OFFSET(0xC1922F0)
#define BOJDFLNKBNL_KFJLGBHOONO_OFFSET UNITYSDK_OFFSET(0xC1924D0)
#define BOJDFLNKBNL_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC192340)
#define BOJDFLNKBNL_PEDFLCNLIOC_OFFSET UNITYSDK_OFFSET(0xC192590)
#define BOJDFLNKBNL_POAACIDJOKM_OFFSET UNITYSDK_OFFSET(0xC192530)

inline static constexpr unsigned int BOJDFLNKBNL_TypeDefinitionIndex = 72956;

	class BOJDFLNKBNL : public ::GNGPLDGOEAI
	{
	public:
		::RPG::Client::MonoExUICamera_CameraOutInfo* IDKOLBAHOOL; // 0x18
		::System::Void _ctor(::RPG::Client::MonoExUICamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera*))((::PBYTE)hIl2Cpp + BOJDFLNKBNL_CTOR_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJDFLNKBNL_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL(::GNGPLDGOEAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNGPLDGOEAI*))((::PBYTE)hIl2Cpp + BOJDFLNKBNL_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void KFJLGBHOONO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJDFLNKBNL_KFJLGBHOONO_OFFSET))(this);
		}

		::System::Void POAACIDJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJDFLNKBNL_POAACIDJOKM_OFFSET))(this);
		}

		::System::Void PEDFLCNLIOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJDFLNKBNL_PEDFLCNLIOC_OFFSET))(this);
		}

	};
