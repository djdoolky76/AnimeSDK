#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMPNPPMLNPH.h"
class BDADMJFFOLL;
namespace RPG::GameCore { class FreeStyleController; }

#define BDADMJFFOLL_DLHAMAFKPNP_CTOR_OFFSET UNITYSDK_OFFSET(0x162DF2C0)
#define BDADMJFFOLL_DLHAMAFKPNP_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x162DF450)

inline static constexpr unsigned int BDADMJFFOLL_DLHAMAFKPNP_TypeDefinitionIndex = 57276;

	class BDADMJFFOLL_DLHAMAFKPNP : public ::IMPNPPMLNPH
	{
	public:
		::System::UInt32 OHKMNJCINAE; // 0x10
		::System::Void _ctor(::BDADMJFFOLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDADMJFFOLL*))((::PBYTE)hIl2Cpp + BDADMJFFOLL_DLHAMAFKPNP_CTOR_OFFSET))(this, a1);
		}

		::System::Void PKADDEPKJFN(::RPG::GameCore::FreeStyleController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleController*))((::PBYTE)hIl2Cpp + BDADMJFFOLL_DLHAMAFKPNP_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
