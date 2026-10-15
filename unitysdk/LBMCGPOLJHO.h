#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJFENMHNNEP;
class CHMKEEOCPAB;

#define LBMCGPOLJHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C56E240)
#define LBMCGPOLJHO_EIHKDBFDKON_OFFSET UNITYSDK_OFFSET(0x1C56E0C0)
#define LBMCGPOLJHO_FGIEJBPGGNF_OFFSET UNITYSDK_OFFSET(0x1C56E140)
#define LBMCGPOLJHO_GLBFBDCCDIN_OFFSET UNITYSDK_OFFSET(0x1C56E040)
#define LBMCGPOLJHO_PEGGENCMGJC_OFFSET UNITYSDK_OFFSET(0x1C56E1C0)

	class LBMCGPOLJHO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMCGPOLJHO_CTOR_OFFSET))(this);
		}

		::System::Boolean GLBFBDCCDIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMCGPOLJHO_GLBFBDCCDIN_OFFSET))(this);
		}

		::CHMKEEOCPAB* EIHKDBFDKON()
		{
			return ((::CHMKEEOCPAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMCGPOLJHO_EIHKDBFDKON_OFFSET))(this);
		}

		::System::Boolean FGIEJBPGGNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMCGPOLJHO_FGIEJBPGGNF_OFFSET))(this);
		}

		::BJFENMHNNEP* PEGGENCMGJC()
		{
			return ((::BJFENMHNNEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMCGPOLJHO_PEGGENCMGJC_OFFSET))(this);
		}

	};
