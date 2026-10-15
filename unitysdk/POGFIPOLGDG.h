#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APLFCCFDGEG;
class JJKIGLIJCPA;
class KAKADGHNMFK;
class LMJPODEEGKK;
namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace RPG::Client { class IChimeraDuelSkillData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POGFIPOLGDG_ANAGAHONMKO_OFFSET UNITYSDK_OFFSET(0xC360CC0)
#define POGFIPOLGDG_CJOOJLNKBOA_OFFSET UNITYSDK_OFFSET(0xC360C40)
#define POGFIPOLGDG_DPHBCDJJHNF_OFFSET UNITYSDK_OFFSET(0xC3609E0)
#define POGFIPOLGDG_FEHBFBCBPDI_OFFSET UNITYSDK_OFFSET(0xC360D40)
#define POGFIPOLGDG_HGEHANDMCEN_OFFSET UNITYSDK_OFFSET(0xC360B20)
#define POGFIPOLGDG_LJNHGMGKLOI_OFFSET UNITYSDK_OFFSET(0xC3604A0)
#define POGFIPOLGDG_OAMHIBHKPGJ_OFFSET UNITYSDK_OFFSET(0xC360890)

inline static constexpr unsigned int POGFIPOLGDG_TypeDefinitionIndex = 77410;

	class POGFIPOLGDG : public ::System::Object
	{
	public:
		static ::System::String* LJNHGMGKLOI(::KAKADGHNMFK* a1)
		{
			return ((::System::String*(*)(::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + POGFIPOLGDG_LJNHGMGKLOI_OFFSET))(a1);
		}

		static ::System::String* OAMHIBHKPGJ(::KAKADGHNMFK* a1)
		{
			return ((::System::String*(*)(::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + POGFIPOLGDG_OAMHIBHKPGJ_OFFSET))(a1);
		}

		static ::System::String* DPHBCDJJHNF(::KAKADGHNMFK* a1)
		{
			return ((::System::String*(*)(::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + POGFIPOLGDG_DPHBCDJJHNF_OFFSET))(a1);
		}

		static ::System::Boolean HGEHANDMCEN(::KAKADGHNMFK* a1)
		{
			return ((::System::Boolean(*)(::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + POGFIPOLGDG_HGEHANDMCEN_OFFSET))(a1);
		}

		static ::RPG::Client::ChimeraDuelChimeraData* CJOOJLNKBOA(::JJKIGLIJCPA* a1)
		{
			return ((::RPG::Client::ChimeraDuelChimeraData*(*)(::JJKIGLIJCPA*))((::PBYTE)hIl2Cpp + POGFIPOLGDG_CJOOJLNKBOA_OFFSET))(a1);
		}

		static ::RPG::Client::IChimeraDuelSkillData* ANAGAHONMKO(::APLFCCFDGEG* a1)
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::APLFCCFDGEG*))((::PBYTE)hIl2Cpp + POGFIPOLGDG_ANAGAHONMKO_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* FEHBFBCBPDI(::KAKADGHNMFK* a1, ::LMJPODEEGKK* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::KAKADGHNMFK*, ::LMJPODEEGKK*))((::PBYTE)hIl2Cpp + POGFIPOLGDG_FEHBFBCBPDI_OFFSET))(a1, a2);
		}

	};
