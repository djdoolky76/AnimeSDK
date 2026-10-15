#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class PlayLimaoNewsOptionTalk; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLNMOAKNFBI_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0xDA1CDC0)
#define CLNMOAKNFBI_CEDHPNMJGOP_OFFSET UNITYSDK_OFFSET(0xDA1CE30)
#define CLNMOAKNFBI_CTOR_OFFSET UNITYSDK_OFFSET(0xDA1C450)
#define CLNMOAKNFBI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA1C950)
#define CLNMOAKNFBI_HAFGCHDGLPJ_OFFSET UNITYSDK_OFFSET(0xDA1C860)
#define CLNMOAKNFBI_HPBLOCKNNGA_OFFSET UNITYSDK_OFFSET(0xDA1CC50)
#define CLNMOAKNFBI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA1C4E0)
#define CLNMOAKNFBI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDA1CAA0)
#define CLNMOAKNFBI_PBNOCMEKDDI_OFFSET UNITYSDK_OFFSET(0xDA1CF00)
#define CLNMOAKNFBI_TICK_OFFSET UNITYSDK_OFFSET(0xDA1CB30)

inline static constexpr unsigned int CLNMOAKNFBI_TypeDefinitionIndex = 52952;

	class CLNMOAKNFBI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* FIEMBFNHGEH; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* AMDDFDJAHCG; // 0x28
		::System::String* HJLHFOPGJMI; // 0x30
		::RPG::Client::PlayLimaoNewsOptionTalk* OFKGLJOAMLD; // 0x38
		::System::Boolean FJBAHEOKFII; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::PlayLimaoNewsOptionTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::PlayLimaoNewsOptionTalk*))((::PBYTE)hIl2Cpp + CLNMOAKNFBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNMOAKNFBI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNMOAKNFBI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNMOAKNFBI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLNMOAKNFBI_TICK_OFFSET))(this, a1);
		}

		::System::Void BKCPMPMKLFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLNMOAKNFBI_BKCPMPMKLFI_OFFSET))(this, a1);
		}

		::System::Void CEDHPNMJGOP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLNMOAKNFBI_CEDHPNMJGOP_OFFSET))(this, a1);
		}

		::System::Void PBNOCMEKDDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLNMOAKNFBI_PBNOCMEKDDI_OFFSET))(this, a1);
		}

		::System::Boolean HAFGCHDGLPJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNMOAKNFBI_HAFGCHDGLPJ_OFFSET))(this);
		}

		::System::Boolean HPBLOCKNNGA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLNMOAKNFBI_HPBLOCKNNGA_OFFSET))(this, a1);
		}

	};
