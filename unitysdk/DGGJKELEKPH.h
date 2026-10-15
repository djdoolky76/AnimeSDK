#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class JOGGBGBENHJ;
class MNCOPNHONHO;

#define DGGJKELEKPH_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xE848AA0)
#define DGGJKELEKPH_CTOR_OFFSET UNITYSDK_OFFSET(0xE848A90)
#define DGGJKELEKPH_DHLKAHEPKLB_OFFSET UNITYSDK_OFFSET(0xE848F60)
#define DGGJKELEKPH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE849210)
#define DGGJKELEKPH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE848C00)
#define DGGJKELEKPH_JCOIGCGPMDJ_OFFSET UNITYSDK_OFFSET(0xE849250)
#define DGGJKELEKPH_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xE8490E0)

inline static constexpr unsigned int DGGJKELEKPH_TypeDefinitionIndex = 76750;

	class DGGJKELEKPH : public ::System::Object
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x10
		::BABNOKHOBCF* FKINCGODJEP; // 0x18
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
