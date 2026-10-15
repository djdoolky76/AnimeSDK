#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFNHFPJPMMO_DistanceState.h"
#include "unitysdk/System/Object.h"
class KDJNAAOFMMJ;
namespace RPG::GameCore { class TransformComponent; }

#define NFNHFPJPMMO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB9C820)
#define NFNHFPJPMMO_DGOGMOKCEPL_OFFSET UNITYSDK_OFFSET(0xBB9C9D0)
#define NFNHFPJPMMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB9C860)
#define NFNHFPJPMMO_HBMKEMKPKLM_OFFSET UNITYSDK_OFFSET(0xBB9CE00)
#define NFNHFPJPMMO_IONJAKAPCOE_OFFSET UNITYSDK_OFFSET(0xBB9CF80)
#define NFNHFPJPMMO_JCGGEMKJBDM_OFFSET UNITYSDK_OFFSET(0xBB9CBF0)
#define NFNHFPJPMMO_JKOODKMMFEH_OFFSET UNITYSDK_OFFSET(0xBB9CF10)
#define NFNHFPJPMMO_KHAJCIPMHEA_OFFSET UNITYSDK_OFFSET(0xBB9CCA0)
#define NFNHFPJPMMO_TICK_OFFSET UNITYSDK_OFFSET(0xBB9C8D0)

inline static constexpr unsigned int NFNHFPJPMMO_TypeDefinitionIndex = 57232;

	class NFNHFPJPMMO : public ::System::Object
	{
	public:
		::KDJNAAOFMMJ* KAGKOIFMDNK; // 0x10
		::RPG::GameCore::TransformComponent* FOKJNOBHOIP; // 0x18
		::KDJNAAOFMMJ* EEKCLONKFAJ; // 0x20
		::NFNHFPJPMMO_DistanceState KOOBKNDEKBD; // 0x28
		::System::Single JFNJIELNNHO; // 0x2C
		::System::Single EFKCJMFANEB; // 0x30
		::System::Single NMNNICPPECP; // 0x34
		::System::Single KCMOHJEDEMK; // 0x38
		::System::Boolean EMHAOMPOJBF; // 0x3C
		::System::Void _ctor(::RPG::GameCore::TransformComponent* a1, ::System::Single a2, ::System::Single a3, ::KDJNAAOFMMJ* a4, ::System::Single a5, ::KDJNAAOFMMJ* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::System::Single, ::System::Single, ::KDJNAAOFMMJ*, ::System::Single, ::KDJNAAOFMMJ*))((::PBYTE)hIl2Cpp + NFNHFPJPMMO_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNHFPJPMMO_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFNHFPJPMMO_TICK_OFFSET))(this, a1);
		}

		::System::Void DGOGMOKCEPL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFNHFPJPMMO_DGOGMOKCEPL_OFFSET))(this, a1);
		}

		::System::Single KHAJCIPMHEA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNHFPJPMMO_KHAJCIPMHEA_OFFSET))(this);
		}

		::System::Void HBMKEMKPKLM(::NFNHFPJPMMO_DistanceState a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFNHFPJPMMO_DistanceState))((::PBYTE)hIl2Cpp + NFNHFPJPMMO_HBMKEMKPKLM_OFFSET))(this, a1);
		}

		::System::Void JKOODKMMFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNHFPJPMMO_JKOODKMMFEH_OFFSET))(this);
		}

		::System::Void IONJAKAPCOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNHFPJPMMO_IONJAKAPCOE_OFFSET))(this);
		}

		::System::Void JCGGEMKJBDM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFNHFPJPMMO_JCGGEMKJBDM_OFFSET))(this, a1);
		}

	};
