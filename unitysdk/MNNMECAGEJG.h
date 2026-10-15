#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHKBPAGJIHF.h"
class CLFIGBPHLHI;
class HGDBKOHKGBI;
class MNNMECAGEJG;
class MOGBNBGMIHF;
class NJFANBADGMB;
namespace System { class String; }

#define MNNMECAGEJG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA18B40)
#define MNNMECAGEJG_CLONE_OFFSET UNITYSDK_OFFSET(0xBA18D80)
#define MNNMECAGEJG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA18C50)
#define MNNMECAGEJG_EJLDDHIMBEM_OFFSET UNITYSDK_OFFSET(0xBA18CB0)
#define MNNMECAGEJG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBA18E30)
#define MNNMECAGEJG_REVERSE_OFFSET UNITYSDK_OFFSET(0xBA18DD0)

inline static constexpr unsigned int MNNMECAGEJG_TypeDefinitionIndex = 73512;

	class MNNMECAGEJG : public ::DHKBPAGJIHF
	{
	public:
		::HGDBKOHKGBI* MHGFGPNIJFG; // 0x48
		::System::String* NIBPNKMLGPM; // 0x50
		::NJFANBADGMB* HFPBGMJOCAG; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNMECAGEJG_CTOR_OFFSET))(this);
		}

		static ::MNNMECAGEJG* BPLPBPMEODA(::MOGBNBGMIHF* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::MNNMECAGEJG*(*)(::MOGBNBGMIHF*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MNNMECAGEJG_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Boolean EJLDDHIMBEM(::MOGBNBGMIHF* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOGBNBGMIHF*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MNNMECAGEJG_EJLDDHIMBEM_OFFSET))(this, a1, a2, a3);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNMECAGEJG_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNMECAGEJG_REVERSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MNNMECAGEJG_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
