#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJLNNNNKBJD_CTOR_OFFSET UNITYSDK_OFFSET(0xBEB7300)
#define OJLNNNNKBJD_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xBEB71B0)
#define OJLNNNNKBJD_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBEB7260)

inline static constexpr unsigned int OJLNNNNKBJD_TypeDefinitionIndex = 65179;

	class OJLNNNNKBJD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* KEDCGMHGHHO; // 0x10
		::RPG::Client::GridFightRole* PGAGGENDODD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLNNNNKBJD_CTOR_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLNNNNKBJD_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLNNNNKBJD_PJPFIHFAHGO_OFFSET))(this);
		}

	};
