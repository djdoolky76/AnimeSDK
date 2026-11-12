#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJFENMHNNEP;
class CHMKEEOCPAB;

#define LBMCGPOLJHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EFBE0)
#define LBMCGPOLJHO_EIHKDBFDKON_OFFSET UNITYSDK_OFFSET(0x1D6EFA60)
#define LBMCGPOLJHO_FGIEJBPGGNF_OFFSET UNITYSDK_OFFSET(0x1D6EFAE0)
#define LBMCGPOLJHO_GLBFBDCCDIN_OFFSET UNITYSDK_OFFSET(0x1D6EF9E0)
#define LBMCGPOLJHO_PEGGENCMGJC_OFFSET UNITYSDK_OFFSET(0x1D6EFB60)

inline static constexpr unsigned int LBMCGPOLJHO_TypeDefinitionIndex = 42709;

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
