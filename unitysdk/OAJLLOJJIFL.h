#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SpecialVisionUseType.h"
#include "unitysdk/System/Object.h"

#define OAJLLOJJIFL_ALMDNILFDHK_OFFSET UNITYSDK_OFFSET(0x1AB629A0)
#define OAJLLOJJIFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB628F0)
#define OAJLLOJJIFL_EHLNNODKKDJ_OFFSET UNITYSDK_OFFSET(0x1AB62AD0)
#define OAJLLOJJIFL_FGICFILHMFA_OFFSET UNITYSDK_OFFSET(0x1AB62B50)
#define OAJLLOJJIFL_FGICNJPNNCB_OFFSET UNITYSDK_OFFSET(0x1AB62BA0)
#define OAJLLOJJIFL_IJCHBCGOIII_OFFSET UNITYSDK_OFFSET(0x1AB62BB0)
#define OAJLLOJJIFL_IPBNDIPOGGE_OFFSET UNITYSDK_OFFSET(0x1AB62B10)
#define OAJLLOJJIFL_LFODHGBCCHF_OFFSET UNITYSDK_OFFSET(0x1AB62A00)
#define OAJLLOJJIFL_MDBNBNOPJIA_OFFSET UNITYSDK_OFFSET(0x1AB62910)

inline static constexpr unsigned int OAJLLOJJIFL_TypeDefinitionIndex = 62314;

	class OAJLLOJJIFL : public ::System::Object
	{
	public:
		::System::Single GCCNCAOOEHF; // 0x10
		::System::Boolean HNALEMBOBFE; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 LOEOFAHDCDL; // 0x18
		::System::Int32 AAJJFNLONHE; // 0x1C
		::System::Single ELEGFCENBGP; // 0x20
		::RPG::Client::SpecialVisionUseType BKFIOOHCNEG; // 0x24
		::System::Void _ctor(::RPG::Client::SpecialVisionUseType a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpecialVisionUseType, ::System::Int32, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + OAJLLOJJIFL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean MDBNBNOPJIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJLLOJJIFL_MDBNBNOPJIA_OFFSET))(this);
		}

		::System::Void ALMDNILFDHK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OAJLLOJJIFL_ALMDNILFDHK_OFFSET))(this, a1);
		}

		::System::Void LFODHGBCCHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJLLOJJIFL_LFODHGBCCHF_OFFSET))(this);
		}

		::System::Int32 EHLNNODKKDJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJLLOJJIFL_EHLNNODKKDJ_OFFSET))(this);
		}

		::System::Int32 IPBNDIPOGGE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJLLOJJIFL_IPBNDIPOGGE_OFFSET))(this);
		}

		::System::Void FGICFILHMFA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OAJLLOJJIFL_FGICFILHMFA_OFFSET))(this, a1);
		}

		::System::Boolean FGICNJPNNCB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJLLOJJIFL_FGICNJPNNCB_OFFSET))(this);
		}

		::System::Void IJCHBCGOIII(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OAJLLOJJIFL_IJCHBCGOIII_OFFSET))(this, a1);
		}

	};
