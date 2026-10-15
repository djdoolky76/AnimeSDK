#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PDDJHEABHBG_OFGJIFKNJCA_CTOR_OFFSET UNITYSDK_OFFSET(0xC0077F0)
#define PDDJHEABHBG_OFGJIFKNJCA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC007790)
#define PDDJHEABHBG_OFGJIFKNJCA_NBFHOJLICAO_OFFSET UNITYSDK_OFFSET(0xC0078D0)
#define PDDJHEABHBG_OFGJIFKNJCA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC007860)

inline static constexpr unsigned int PDDJHEABHBG_OFGJIFKNJCA_TypeDefinitionIndex = 60943;

	class PDDJHEABHBG_OFGJIFKNJCA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* NCDHBNLJIOI; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* BMHMMIMOAIJ; // 0x18
		::System::Int32 HDHPNOOMAGE; // 0x20
		::System::Single NHALNBENJAM; // 0x24
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDDJHEABHBG_OFGJIFKNJCA_CTOR_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDJHEABHBG_OFGJIFKNJCA_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDJHEABHBG_OFGJIFKNJCA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void NBFHOJLICAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDJHEABHBG_OFGJIFKNJCA_NBFHOJLICAO_OFFSET))(this);
		}

	};
