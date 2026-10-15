#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SpecialVisionUseType.h"
#include "unitysdk/System/Object.h"

#define OAJLLOJJIFL_ALMDNILFDHK_OFFSET UNITYSDK_OFFSET(0xBD27A90)
#define OAJLLOJJIFL_CTOR_OFFSET UNITYSDK_OFFSET(0xBD279E0)
#define OAJLLOJJIFL_EHLNNODKKDJ_OFFSET UNITYSDK_OFFSET(0xBD27BC0)
#define OAJLLOJJIFL_FGICFILHMFA_OFFSET UNITYSDK_OFFSET(0xBD27C40)
#define OAJLLOJJIFL_FGICNJPNNCB_OFFSET UNITYSDK_OFFSET(0xBD27C90)
#define OAJLLOJJIFL_IJCHBCGOIII_OFFSET UNITYSDK_OFFSET(0xBD27CA0)
#define OAJLLOJJIFL_IPBNDIPOGGE_OFFSET UNITYSDK_OFFSET(0xBD27C00)
#define OAJLLOJJIFL_LFODHGBCCHF_OFFSET UNITYSDK_OFFSET(0xBD27AF0)
#define OAJLLOJJIFL_MDBNBNOPJIA_OFFSET UNITYSDK_OFFSET(0xBD27A00)

inline static constexpr unsigned int OAJLLOJJIFL_TypeDefinitionIndex = 60938;

	class OAJLLOJJIFL : public ::System::Object
	{
	public:
		::System::Boolean HNALEMBOBFE; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 AAJJFNLONHE; // 0x14
		::RPG::Client::SpecialVisionUseType BKFIOOHCNEG; // 0x18
		::System::Int32 LOEOFAHDCDL; // 0x1C
		::System::Single GCCNCAOOEHF; // 0x20
		::System::Single ELEGFCENBGP; // 0x24
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
