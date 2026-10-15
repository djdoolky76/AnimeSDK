#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HitMotionParams; }

#define BGOBCKLPEMK_NNCOONLKENF_CIKCAFCEJFL_OFFSET UNITYSDK_OFFSET(0x15750)
#define BGOBCKLPEMK_NNCOONLKENF_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x15620)
#define BGOBCKLPEMK_NNCOONLKENF_INIGMGOCGDB_OFFSET UNITYSDK_OFFSET(0x15630)
#define BGOBCKLPEMK_NNCOONLKENF_JPMKFEMCPGN_OFFSET UNITYSDK_OFFSET(0x15930)
#define BGOBCKLPEMK_NNCOONLKENF_KNIHIMJDJEC_OFFSET UNITYSDK_OFFSET(0x156B0)
#define BGOBCKLPEMK_NNCOONLKENF_LHAAHDBLEMG_OFFSET UNITYSDK_OFFSET(0x158B0)
#define BGOBCKLPEMK_NNCOONLKENF_MJJLIFPKPMO_OFFSET UNITYSDK_OFFSET(0x15760)

inline static constexpr unsigned int BGOBCKLPEMK_NNCOONLKENF_TypeDefinitionIndex = 56957;

	struct alignas(4) BGOBCKLPEMK_NNCOONLKENF
	{
		::System::Single PELOGJFGKBK; // 0x10
		::System::Boolean ILBCMMGEGGO; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single FHPAAHGHECF; // 0x18
		::System::Single CLKBIJHEADL; // 0x1C
		::System::Single JNHLACAFLJD; // 0x20
		::System::Single HLDEHBAIGJI; // 0x24
		::System::Single LJKCONICJDH; // 0x28
		::System::Single IOBEBKNBMCK; // 0x2C
		::System::Single MMJLCGFFFCP; // 0x30
		::System::Single EMFIABBAGKP; // 0x34
		::System::Single NAOBCEGKKGA; // 0x38
		::System::Single ILKDKHIOIPC; // 0x3C
		::System::Boolean DLAILGNMFGI(::RPG::GameCore::HitMotionParams* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::HitMotionParams*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_NNCOONLKENF_DLAILGNMFGI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single INIGMGOCGDB(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_NNCOONLKENF_INIGMGOCGDB_OFFSET))(this, a1);
		}

		::System::Void KNIHIMJDJEC(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_NNCOONLKENF_KNIHIMJDJEC_OFFSET))(this, a1, a2);
		}

		::System::Single CIKCAFCEJFL(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_NNCOONLKENF_CIKCAFCEJFL_OFFSET))(this, a1);
		}

		::System::Single MJJLIFPKPMO(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_NNCOONLKENF_MJJLIFPKPMO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single LHAAHDBLEMG(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_NNCOONLKENF_LHAAHDBLEMG_OFFSET))(this, a1);
		}

		::System::Void JPMKFEMCPGN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_NNCOONLKENF_JPMKFEMCPGN_OFFSET))(this, a1);
		}

	};
