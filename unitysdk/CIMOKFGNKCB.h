#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBNAFGFFJLJ.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackDir.h"
class CIMOKFGNKCB;
class JLJHFLEECLF;
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }

#define CIMOKFGNKCB_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xCF86B60)
#define CIMOKFGNKCB_BGOMKDMBLKK_OFFSET UNITYSDK_OFFSET(0xCF869C0)
#define CIMOKFGNKCB_CFINKMFANFE_OFFSET UNITYSDK_OFFSET(0xCF86D70)
#define CIMOKFGNKCB_CTOR_OFFSET UNITYSDK_OFFSET(0xCF86E20)
#define CIMOKFGNKCB_EJNEFDIIINJ_OFFSET UNITYSDK_OFFSET(0xCF86D20)
#define CIMOKFGNKCB_HDIGOEPIKPB_OFFSET UNITYSDK_OFFSET(0xCF86DC0)
#define CIMOKFGNKCB_MJNMFMEDJJM_OFFSET UNITYSDK_OFFSET(0xCF86CD0)
#define CIMOKFGNKCB_PPMCDLBNPCM_OFFSET UNITYSDK_OFFSET(0xCF86C40)

inline static constexpr unsigned int CIMOKFGNKCB_TypeDefinitionIndex = 74100;

	class CIMOKFGNKCB : public ::IBNAFGFFJLJ
	{
	public:
		::CIMOKFGNKCB* LLNIIIIIMPM; // 0x48
		::CIMOKFGNKCB* FIJCJNJMIHC; // 0x50
		::JLJHFLEECLF* ABPCNOBNHMI; // 0x58
		::CIMOKFGNKCB* EKKPPOFPEKO; // 0x60
		::CIMOKFGNKCB* CDEOGIGOHGB; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMOKFGNKCB_CTOR_OFFSET))(this);
		}

		::System::Boolean BGOMKDMBLKK(::JLJHFLEECLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLJHFLEECLF*))((::PBYTE)hIl2Cpp + CIMOKFGNKCB_BGOMKDMBLKK_OFFSET))(this, a1);
		}

		::System::Boolean ABKBOGIGAEH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMOKFGNKCB_ABKBOGIGAEH_OFFSET))(this);
		}

		::CIMOKFGNKCB* PPMCDLBNPCM(::RPG::Client::ActivityAlley::AlleyPackDir a1)
		{
			return ((::CIMOKFGNKCB*(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackDir))((::PBYTE)hIl2Cpp + CIMOKFGNKCB_PPMCDLBNPCM_OFFSET))(this, a1);
		}

		::System::Void MJNMFMEDJJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMOKFGNKCB_MJNMFMEDJJM_OFFSET))(this);
		}

		::System::Void EJNEFDIIINJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMOKFGNKCB_EJNEFDIIINJ_OFFSET))(this);
		}

		::System::Void CFINKMFANFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMOKFGNKCB_CFINKMFANFE_OFFSET))(this);
		}

		::RPG::Client::ActivityAlley::AlleyPackGoodData* HDIGOEPIKPB()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackGoodData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMOKFGNKCB_HDIGOEPIKPB_OFFSET))(this);
		}

	};
