#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayVideoQTEStageState.h"
#include "unitysdk/RPG/Client/PlayVideoQTEVideoPrepareState.h"
#include "unitysdk/System/Object.h"
class AGOAPPMIPPG;

#define MKGPKMODMHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B905D20)
#define MKGPKMODMHM_EECNDHCCPGM_OFFSET UNITYSDK_OFFSET(0x1B9062C0)
#define MKGPKMODMHM_HDGLCGKDAOK_OFFSET UNITYSDK_OFFSET(0x1B9063A0)
#define MKGPKMODMHM_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x1B906220)
#define MKGPKMODMHM_IMKMHOFCOEM_OFFSET UNITYSDK_OFFSET(0x1B906270)
#define MKGPKMODMHM_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0x1B905D30)
#define MKGPKMODMHM_JJODCOEMFJJ_OFFSET UNITYSDK_OFFSET(0x1B9064F0)
#define MKGPKMODMHM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B906120)
#define MKGPKMODMHM_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1B905F70)
#define MKGPKMODMHM_MKCCAINALDI_OFFSET UNITYSDK_OFFSET(0x1B905D90)
#define MKGPKMODMHM_OOLJPIMGOBM_OFFSET UNITYSDK_OFFSET(0x1B906470)

inline static constexpr unsigned int MKGPKMODMHM_TypeDefinitionIndex = 74961;

	class MKGPKMODMHM : public ::System::Object
	{
	public:
		::AGOAPPMIPPG* EEFMDEHLLFI; // 0x10
		::RPG::Client::PlayVideoQTEStageState DLNIGFGLPLJ; // 0x18
		::System::Single FFPEAEOANBB; // 0x1C
		::RPG::Client::PlayVideoQTEVideoPrepareState EGBAEOKAAOE; // 0x20
		::System::UInt32 CJGFFOILGPG; // 0x24
		::System::Void _ctor(::AGOAPPMIPPG* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::AGOAPPMIPPG*, ::System::UInt32))((::PBYTE)hIl2Cpp + MKGPKMODMHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JIGJDOFEJMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGPKMODMHM_JIGJDOFEJMI_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGPKMODMHM_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MKGPKMODMHM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGPKMODMHM_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Boolean IMKMHOFCOEM(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKGPKMODMHM_IMKMHOFCOEM_OFFSET))(this, a1);
		}

		::System::Boolean EECNDHCCPGM(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MKGPKMODMHM_EECNDHCCPGM_OFFSET))(this, a1);
		}

		::System::Void MKCCAINALDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGPKMODMHM_MKCCAINALDI_OFFSET))(this);
		}

		::System::Void HDGLCGKDAOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGPKMODMHM_HDGLCGKDAOK_OFFSET))(this);
		}

		::System::Void OOLJPIMGOBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGPKMODMHM_OOLJPIMGOBM_OFFSET))(this);
		}

		::System::Void JJODCOEMFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGPKMODMHM_JJODCOEMFJJ_OFFSET))(this);
		}

	};
