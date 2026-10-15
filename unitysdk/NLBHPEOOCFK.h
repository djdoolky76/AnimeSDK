#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLAMCCBFMKK.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
class CENEFPOMFKG;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NLBHPEOOCFK_BKKFGMPIEMO_OFFSET UNITYSDK_OFFSET(0xBC5A220)
#define NLBHPEOOCFK_CEFOMFPOCJN_OFFSET UNITYSDK_OFFSET(0xBC5A2B0)
#define NLBHPEOOCFK_CTOR_OFFSET UNITYSDK_OFFSET(0xBC5A990)
#define NLBHPEOOCFK_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xBC59DF0)
#define NLBHPEOOCFK_EGJKOEJKBLC_OFFSET UNITYSDK_OFFSET(0xBC5A6A0)
#define NLBHPEOOCFK_EJNBJPPGNJF_OFFSET UNITYSDK_OFFSET(0xBC5A7A0)
#define NLBHPEOOCFK_FCLHLPLMNGI_OFFSET UNITYSDK_OFFSET(0xBC5A750)
#define NLBHPEOOCFK_KGAMJCNJJAL_OFFSET UNITYSDK_OFFSET(0xBC5A1A0)
#define NLBHPEOOCFK_KJAJEANKKEF_OFFSET UNITYSDK_OFFSET(0xBC5A440)
#define NLBHPEOOCFK_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xBC5A030)
#define NLBHPEOOCFK_NLIFDKMPCPP_OFFSET UNITYSDK_OFFSET(0xBC5A610)

inline static constexpr unsigned int NLBHPEOOCFK_TypeDefinitionIndex = 73262;

	class NLBHPEOOCFK : public ::JLAMCCBFMKK
	{
	public:
		::System::Collections::Generic::HashSet_1<::CENEFPOMFKG*>* AKJKMMBHOHK; // 0x18
		::System::Boolean BFJAPBAAGFI; // 0x20
		::System::Boolean IKLLJBNCBIJ; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBHPEOOCFK_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBHPEOOCFK_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBHPEOOCFK_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void BKKFGMPIEMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBHPEOOCFK_BKKFGMPIEMO_OFFSET))(this);
		}

		::System::Void CEFOMFPOCJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBHPEOOCFK_CEFOMFPOCJN_OFFSET))(this);
		}

		::System::Void NLIFDKMPCPP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLBHPEOOCFK_NLIFDKMPCPP_OFFSET))(this, a1);
		}

		::System::Void EGJKOEJKBLC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLBHPEOOCFK_EGJKOEJKBLC_OFFSET))(this, a1);
		}

		::System::Void KGAMJCNJJAL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLBHPEOOCFK_KGAMJCNJJAL_OFFSET))(this, a1);
		}

		::System::Void KJAJEANKKEF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLBHPEOOCFK_KJAJEANKKEF_OFFSET))(this, a1);
		}

		::System::Boolean FCLHLPLMNGI(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NLBHPEOOCFK_FCLHLPLMNGI_OFFSET))(this, a1);
		}

		::System::Void EJNBJPPGNJF(::CENEFPOMFKG* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + NLBHPEOOCFK_EJNBJPPGNJF_OFFSET))(this, a1, a2, a3);
		}

	};
