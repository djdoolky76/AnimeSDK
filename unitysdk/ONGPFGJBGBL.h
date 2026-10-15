#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNGPLDGOEAI.h"
class GNGPLDGOEAI;
namespace RPG::Client { class MonoExUICamera; }

#define ONGPFGJBGBL_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xBF56AB0)
#define ONGPFGJBGBL_CTOR_OFFSET UNITYSDK_OFFSET(0xBF56A00)
#define ONGPFGJBGBL_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBF56A10)
#define ONGPFGJBGBL_PEDFLCNLIOC_OFFSET UNITYSDK_OFFSET(0xBF56BA0)
#define ONGPFGJBGBL_POAACIDJOKM_OFFSET UNITYSDK_OFFSET(0xBF56B40)

	class ONGPFGJBGBL : public ::GNGPLDGOEAI
	{
	public:
		::System::Void _ctor(::RPG::Client::MonoExUICamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera*))((::PBYTE)hIl2Cpp + ONGPFGJBGBL_CTOR_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGPFGJBGBL_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL(::GNGPLDGOEAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNGPLDGOEAI*))((::PBYTE)hIl2Cpp + ONGPFGJBGBL_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void POAACIDJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGPFGJBGBL_POAACIDJOKM_OFFSET))(this);
		}

		::System::Void PEDFLCNLIOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGPFGJBGBL_PEDFLCNLIOC_OFFSET))(this);
		}

	};
