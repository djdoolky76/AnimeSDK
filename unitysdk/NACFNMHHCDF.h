#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class JEANAIHDCAA;
class NACFNMHHCDF;
namespace RPG::Client { class MatchThreeBoard; }

#define NACFNMHHCDF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA4FE80)
#define NACFNMHHCDF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA50030)
#define NACFNMHHCDF_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0xBA4FFE0)
#define NACFNMHHCDF_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBA4FF00)

inline static constexpr unsigned int NACFNMHHCDF_TypeDefinitionIndex = 65877;

	class NACFNMHHCDF : public ::FNIDIOCNBBI
	{
	public:
		::JEANAIHDCAA* IEGFCMEEEKC; // 0x28
		::System::Boolean GNPDMIGGLPF; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2Int PECPBEOHOJC; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACFNMHHCDF_CTOR_OFFSET))(this);
		}

		static ::NACFNMHHCDF* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::NACFNMHHCDF*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + NACFNMHHCDF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACFNMHHCDF_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACFNMHHCDF_LGAOOKPFIMF_OFFSET))(this);
		}

	};
