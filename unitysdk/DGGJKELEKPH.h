#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class JOGGBGBENHJ;
class MNCOPNHONHO;

#define DGGJKELEKPH_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xE83DC90)
#define DGGJKELEKPH_CTOR_OFFSET UNITYSDK_OFFSET(0xE83DC80)
#define DGGJKELEKPH_DHLKAHEPKLB_OFFSET UNITYSDK_OFFSET(0xE83E140)
#define DGGJKELEKPH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE83E3F0)
#define DGGJKELEKPH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE83DDE0)
#define DGGJKELEKPH_JCOIGCGPMDJ_OFFSET UNITYSDK_OFFSET(0xE83E430)
#define DGGJKELEKPH_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xE83E2C0)

inline static constexpr unsigned int DGGJKELEKPH_TypeDefinitionIndex = 76749;

	class DGGJKELEKPH : public ::System::Object
	{
	public:
		::BABNOKHOBCF* FKINCGODJEP; // 0x10
		::MNCOPNHONHO* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + DGGJKELEKPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGJKELEKPH_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGJKELEKPH_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGJKELEKPH_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGJKELEKPH_EXECUTE_OFFSET))(this);
		}

		::System::Void JCOIGCGPMDJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGGJKELEKPH_JCOIGCGPMDJ_OFFSET))(this, a1);
		}

		::System::Void DHLKAHEPKLB(::JOGGBGBENHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOGGBGBENHJ*))((::PBYTE)hIl2Cpp + DGGJKELEKPH_DHLKAHEPKLB_OFFSET))(this, a1);
		}

	};
