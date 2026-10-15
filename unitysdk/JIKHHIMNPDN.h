#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODHMHHGKCJP.h"
#include "unitysdk/RPG/GameCore/RtSubPropertyType.h"
#include "unitysdk/HJIOMFDJLLA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class JIKHHIMNPDN;
class MOMODPMFIKE;
class OIKDEOMMOAM;

#define JIKHHIMNPDN_ABOFOMGHGJM_OFFSET UNITYSDK_OFFSET(0xB1FC500)
#define JIKHHIMNPDN_ACCDKJGBBJF_OFFSET UNITYSDK_OFFSET(0xB1FC0B0)
#define JIKHHIMNPDN_BKMEEDIKBLP_OFFSET UNITYSDK_OFFSET(0xB1FC460)
#define JIKHHIMNPDN_CKNKAFNNIPH_OFFSET UNITYSDK_OFFSET(0xB1FC3D0)
#define JIKHHIMNPDN_CLEAR_OFFSET UNITYSDK_OFFSET(0xB1FC2D0)
#define JIKHHIMNPDN_CTOR_OFFSET UNITYSDK_OFFSET(0xB1FC580)
#define JIKHHIMNPDN_JBFOGGHEPIC_OFFSET UNITYSDK_OFFSET(0xB1FC1E0)

inline static constexpr unsigned int JIKHHIMNPDN_TypeDefinitionIndex = 53996;

	class JIKHHIMNPDN : public ::ODHMHHGKCJP
	{
	public:
		::MOMODPMFIKE* ANPAHODBCOB; // 0x38
		::MOMODPMFIKE* NJDNFIDCBCE; // 0x40
		::MOMODPMFIKE* KKDPDKDICJN; // 0x48
		::MOMODPMFIKE* OEHHIIEPDIK; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKHHIMNPDN_CTOR_OFFSET))(this);
		}

		::JIKHHIMNPDN* ACCDKJGBBJF(::MOMODPMFIKE* a1, ::MOMODPMFIKE* a2, ::MOMODPMFIKE* a3, ::MOMODPMFIKE* a4)
		{
			return ((::JIKHHIMNPDN*(*)(::PVOID, ::MOMODPMFIKE*, ::MOMODPMFIKE*, ::MOMODPMFIKE*, ::MOMODPMFIKE*))((::PBYTE)hIl2Cpp + JIKHHIMNPDN_ACCDKJGBBJF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKHHIMNPDN_CLEAR_OFFSET))(this);
		}

		::MOMODPMFIKE* CKNKAFNNIPH(::RPG::GameCore::RtSubPropertyType a1)
		{
			return ((::MOMODPMFIKE*(*)(::PVOID, ::RPG::GameCore::RtSubPropertyType))((::PBYTE)hIl2Cpp + JIKHHIMNPDN_CKNKAFNNIPH_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint BKMEEDIKBLP(::RPG::GameCore::RtSubPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtSubPropertyType))((::PBYTE)hIl2Cpp + JIKHHIMNPDN_BKMEEDIKBLP_OFFSET))(this, a1);
		}

		::System::Void ABOFOMGHGJM(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + JIKHHIMNPDN_ABOFOMGHGJM_OFFSET))(this, a1);
		}

		::System::Void JBFOGGHEPIC(::HJIOMFDJLLA a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + JIKHHIMNPDN_JBFOGGHEPIC_OFFSET))(this, a1);
		}

	};
