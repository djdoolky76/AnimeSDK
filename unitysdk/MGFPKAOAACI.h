#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class PKCEKMCOLPF;
namespace RPG::Client { class LimaoNewsDutyCheckOptionTalkInfo; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MGFPKAOAACI_AHFOPPFEICG_OFFSET UNITYSDK_OFFSET(0xC1CEA60)
#define MGFPKAOAACI_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0xC1CF4C0)
#define MGFPKAOAACI_CEDHPNMJGOP_OFFSET UNITYSDK_OFFSET(0xC1CF690)
#define MGFPKAOAACI_CTOR_OFFSET UNITYSDK_OFFSET(0xC1CE710)
#define MGFPKAOAACI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1CF050)
#define MGFPKAOAACI_GOJELIBLKIN_OFFSET UNITYSDK_OFFSET(0xC1CF530)
#define MGFPKAOAACI_HPBLOCKNNGA_OFFSET UNITYSDK_OFFSET(0xC1CF380)
#define MGFPKAOAACI_KLALKNALJMB_OFFSET UNITYSDK_OFFSET(0xC1CF7E0)
#define MGFPKAOAACI_OLDMJOGOFDN_OFFSET UNITYSDK_OFFSET(0xC1CECD0)
#define MGFPKAOAACI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1CE780)
#define MGFPKAOAACI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC1CF1E0)
#define MGFPKAOAACI_PBNOCMEKDDI_OFFSET UNITYSDK_OFFSET(0xC1CF760)
#define MGFPKAOAACI_TICK_OFFSET UNITYSDK_OFFSET(0xC1CF260)

inline static constexpr unsigned int MGFPKAOAACI_TypeDefinitionIndex = 54110;

	class MGFPKAOAACI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* FIEMBFNHGEH; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* AMDDFDJAHCG; // 0x28
		::PKCEKMCOLPF* OFKGLJOAMLD; // 0x30
		::System::String* HJLHFOPGJMI; // 0x38
		::System::Boolean FJBAHEOKFII; // 0x40
		::System::Boolean HMBGEPKBBBJ; // 0x41
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PKCEKMCOLPF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PKCEKMCOLPF*))((::PBYTE)hIl2Cpp + MGFPKAOAACI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFPKAOAACI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFPKAOAACI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFPKAOAACI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGFPKAOAACI_TICK_OFFSET))(this, a1);
		}

		::System::Void BKCPMPMKLFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGFPKAOAACI_BKCPMPMKLFI_OFFSET))(this, a1);
		}

		::System::Void GOJELIBLKIN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGFPKAOAACI_GOJELIBLKIN_OFFSET))(this, a1);
		}

		::System::Void CEDHPNMJGOP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGFPKAOAACI_CEDHPNMJGOP_OFFSET))(this, a1);
		}

		::System::Void PBNOCMEKDDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGFPKAOAACI_PBNOCMEKDDI_OFFSET))(this, a1);
		}

		::System::Void OLDMJOGOFDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFPKAOAACI_OLDMJOGOFDN_OFFSET))(this);
		}

		::System::Void AHFOPPFEICG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFPKAOAACI_AHFOPPFEICG_OFFSET))(this);
		}

		::System::Void KLALKNALJMB(::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*))((::PBYTE)hIl2Cpp + MGFPKAOAACI_KLALKNALJMB_OFFSET))(this, a1);
		}

		::System::Boolean HPBLOCKNNGA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MGFPKAOAACI_HPBLOCKNNGA_OFFSET))(this, a1);
		}

	};
