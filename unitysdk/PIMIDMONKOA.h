#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGDGNJBCMBE;
class KKMFINOMOHP;
namespace RPG::GameCore { class DebateTestimonySetting; }
namespace RPG::GameCore { class TaskContext; }

#define PIMIDMONKOA_CPCEGGCABHE_OFFSET UNITYSDK_OFFSET(0xC271330)
#define PIMIDMONKOA_CPFPKFEJIJG_OFFSET UNITYSDK_OFFSET(0xC271230)
#define PIMIDMONKOA_CTOR_OFFSET UNITYSDK_OFFSET(0xC270E40)
#define PIMIDMONKOA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC270E50)
#define PIMIDMONKOA_DOCCLCPLBLO_OFFSET UNITYSDK_OFFSET(0xC271290)
#define PIMIDMONKOA_EKDENEOMGHH_OFFSET UNITYSDK_OFFSET(0xC2713D0)
#define PIMIDMONKOA_FHBIHDJHGGO_OFFSET UNITYSDK_OFFSET(0xC271190)
#define PIMIDMONKOA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xC271470)
#define PIMIDMONKOA_OMNLHPMGJCF_OFFSET UNITYSDK_OFFSET(0xC270ED0)
#define PIMIDMONKOA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xC271480)

	class PIMIDMONKOA : public ::System::Object
	{
	public:
		::KKMFINOMOHP* DAJMGOFEFCG; // 0x10
		::BGDGNJBCMBE* POMDJKCJGON; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KKMFINOMOHP* ANLOKFCFKNI; // 0x28
		::System::Int32 _Index_k__BackingField; // 0x30
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::TaskContext* a2, ::BGDGNJBCMBE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::TaskContext*, ::BGDGNJBCMBE*))((::PBYTE)hIl2Cpp + PIMIDMONKOA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMIDMONKOA_DISPOSE_OFFSET))(this);
		}

		::System::Void OMNLHPMGJCF(::RPG::GameCore::DebateTestimonySetting* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DebateTestimonySetting*))((::PBYTE)hIl2Cpp + PIMIDMONKOA_OMNLHPMGJCF_OFFSET))(this, a1);
		}

		::System::Void FHBIHDJHGGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMIDMONKOA_FHBIHDJHGGO_OFFSET))(this);
		}

		::System::Void DOCCLCPLBLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMIDMONKOA_DOCCLCPLBLO_OFFSET))(this);
		}

		::System::Boolean CPCEGGCABHE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMIDMONKOA_CPCEGGCABHE_OFFSET))(this);
		}

		::System::Void EKDENEOMGHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMIDMONKOA_EKDENEOMGHH_OFFSET))(this);
		}

		::KKMFINOMOHP* CPFPKFEJIJG()
		{
			return ((::KKMFINOMOHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMIDMONKOA_CPFPKFEJIJG_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMIDMONKOA_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIMIDMONKOA_SET_INDEX_OFFSET))(this, a1);
		}

	};
