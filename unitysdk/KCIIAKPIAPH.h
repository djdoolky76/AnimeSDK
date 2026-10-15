#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class RtAbilityConfig; }
namespace RPG::GameCore { class RtModifierConfig; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KCIIAKPIAPH_AABALFLGKPE_OFFSET UNITYSDK_OFFSET(0xB3331E0)
#define KCIIAKPIAPH_CAAFDHNOGHI_OFFSET UNITYSDK_OFFSET(0xB3334D0)
#define KCIIAKPIAPH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB333950)
#define KCIIAKPIAPH_DJDOPNPMPAN_OFFSET UNITYSDK_OFFSET(0xB333860)
#define KCIIAKPIAPH_FHHOGBEDHMC_OFFSET UNITYSDK_OFFSET(0xB333460)
#define KCIIAKPIAPH_FNPMJDIAOCM_OFFSET UNITYSDK_OFFSET(0xB3329E0)
#define KCIIAKPIAPH_HAKNCEPEBHG_OFFSET UNITYSDK_OFFSET(0xB333400)
#define KCIIAKPIAPH_HCALPIGELNM_OFFSET UNITYSDK_OFFSET(0xB333390)
#define KCIIAKPIAPH_KOJFJLHIIHG_OFFSET UNITYSDK_OFFSET(0xB332EC0)
#define KCIIAKPIAPH_LMHNDHFOIHO_OFFSET UNITYSDK_OFFSET(0xB332D00)
#define KCIIAKPIAPH_NLOCAAAANNG_OFFSET UNITYSDK_OFFSET(0xB333600)
#define KCIIAKPIAPH_PLKCKCEFBIM_OFFSET UNITYSDK_OFFSET(0xB333730)

inline static constexpr unsigned int KCIIAKPIAPH_TypeDefinitionIndex = 56527;

	class KCIIAKPIAPH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RtModifierConfig*>** StaticGet_OECPOEALKGF()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RtModifierConfig*>**)UnitySDK::FromName("", "KCIIAKPIAPH")->GetStaticField(0x34F70);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>** StaticGet_NJILLIKILGL()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>**)UnitySDK::FromName("", "KCIIAKPIAPH")->GetStaticField(0x34F78);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RtAbilityConfig*>** StaticGet_CALBNDOIHAE()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RtAbilityConfig*>**)UnitySDK::FromName("", "KCIIAKPIAPH")->GetStaticField(0x34F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCIIAKPIAPH_CCTOR_OFFSET))();
		}

		static ::System::Void FNPMJDIAOCM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCIIAKPIAPH_FNPMJDIAOCM_OFFSET))();
		}

		static ::System::Void AABALFLGKPE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCIIAKPIAPH_AABALFLGKPE_OFFSET))();
		}

		static ::System::Void HCALPIGELNM(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KCIIAKPIAPH_HCALPIGELNM_OFFSET))(a1, a2);
		}

		static ::System::Void HAKNCEPEBHG(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KCIIAKPIAPH_HAKNCEPEBHG_OFFSET))(a1);
		}

		static ::System::Void FHHOGBEDHMC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCIIAKPIAPH_FHHOGBEDHMC_OFFSET))();
		}

		static ::System::Void KOJFJLHIIHG(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KCIIAKPIAPH_KOJFJLHIIHG_OFFSET))(a1);
		}

		static ::System::Void LMHNDHFOIHO(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RtModifierConfig*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RtModifierConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + KCIIAKPIAPH_LMHNDHFOIHO_OFFSET))(a1, a2);
		}

		static ::System::Void CAAFDHNOGHI(::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::TaskListTemplate*>*, ::System::String*))((::PBYTE)hIl2Cpp + KCIIAKPIAPH_CAAFDHNOGHI_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::RtAbilityConfig* NLOCAAAANNG(::System::String* a1)
		{
			return ((::RPG::GameCore::RtAbilityConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + KCIIAKPIAPH_NLOCAAAANNG_OFFSET))(a1);
		}

		static ::RPG::GameCore::RtModifierConfig* PLKCKCEFBIM(::System::String* a1)
		{
			return ((::RPG::GameCore::RtModifierConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + KCIIAKPIAPH_PLKCKCEFBIM_OFFSET))(a1);
		}

		static ::RPG::GameCore::TaskListTemplate* DJDOPNPMPAN(::System::String* a1)
		{
			return ((::RPG::GameCore::TaskListTemplate*(*)(::System::String*))((::PBYTE)hIl2Cpp + KCIIAKPIAPH_DJDOPNPMPAN_OFFSET))(a1);
		}

	};
