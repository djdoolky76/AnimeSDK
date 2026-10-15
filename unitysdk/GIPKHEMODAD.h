#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateFsmType.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/System/Object.h"
class CEBMNLPNKFL;
class CFFPEAALCPH;
class ELGOAIPHFIH;
class JHMBGNKOIJH;
class NILCJPJGMJC;
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIPKHEMODAD_AALHEFEEHEG_OFFSET UNITYSDK_OFFSET(0x15A48A10)
#define GIPKHEMODAD_BJNCHJDCAPD_OFFSET UNITYSDK_OFFSET(0x15A48C60)
#define GIPKHEMODAD_BKAIEPJHGNP_OFFSET UNITYSDK_OFFSET(0x15A48740)
#define GIPKHEMODAD_CBMFBHCDJMA_OFFSET UNITYSDK_OFFSET(0x15A484C0)
#define GIPKHEMODAD_COJCCABILII_OFFSET UNITYSDK_OFFSET(0x15A48100)
#define GIPKHEMODAD_CTOR_OFFSET UNITYSDK_OFFSET(0x15A47880)
#define GIPKHEMODAD_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x15A48A70)
#define GIPKHEMODAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A47D80)
#define GIPKHEMODAD_EPMDJMBPFGG_OFFSET UNITYSDK_OFFSET(0x15A48BF0)
#define GIPKHEMODAD_FBHJPDAEDGI_OFFSET UNITYSDK_OFFSET(0x15A48C40)
#define GIPKHEMODAD_GET_ANIMTRACK_OFFSET UNITYSDK_OFFSET(0x15A48C20)
#define GIPKHEMODAD_GET_CURRENTSTATEELAPSED_OFFSET UNITYSDK_OFFSET(0x15A48C00)
#define GIPKHEMODAD_GET_MUTATOR_OFFSET UNITYSDK_OFFSET(0x15A48BD0)
#define GIPKHEMODAD_HGOJJLIOPPD_OFFSET UNITYSDK_OFFSET(0x15A48CD0)
#define GIPKHEMODAD_JHIKPOPKMAI_OFFSET UNITYSDK_OFFSET(0x15A48DA0)
#define GIPKHEMODAD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15A479A0)
#define GIPKHEMODAD_MCCPPKGEHAD_OFFSET UNITYSDK_OFFSET(0x15A48860)
#define GIPKHEMODAD_NCLOCKBAJLK_OFFSET UNITYSDK_OFFSET(0x15A47A00)
#define GIPKHEMODAD_NKFJHHOIOAP_OFFSET UNITYSDK_OFFSET(0x15A488F0)
#define GIPKHEMODAD_SET_ANIMTRACK_OFFSET UNITYSDK_OFFSET(0x15A48C30)
#define GIPKHEMODAD_SET_CURRENTSTATEELAPSED_OFFSET UNITYSDK_OFFSET(0x15A48C10)
#define GIPKHEMODAD_SET_MUTATOR_OFFSET UNITYSDK_OFFSET(0x15A48BE0)

inline static constexpr unsigned int GIPKHEMODAD_TypeDefinitionIndex = 55941;

	class GIPKHEMODAD : public ::System::Object
	{
	public:
		::CFFPEAALCPH* EHMMJBDLMPN; // 0x10
		::NILCJPJGMJC* _Mutator_k__BackingField; // 0x18
		::JHMBGNKOIJH* _AnimTrack_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* FEEOPODJGFN; // 0x28
		::ELGOAIPHFIH* PHAKBAPBHHB; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnimStateLogicType, ::ELGOAIPHFIH*>* ELPNIAPEDEC; // 0x38
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x40
		::System::Single _CurrentStateElapsed_k__BackingField; // 0x48
		::System::Boolean OLOHIDBMFAN; // 0x4C
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::CFFPEAALCPH* a2, ::NILCJPJGMJC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CFFPEAALCPH*, ::NILCJPJGMJC*))((::PBYTE)hIl2Cpp + GIPKHEMODAD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::AnimStateFsmType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateFsmType))((::PBYTE)hIl2Cpp + GIPKHEMODAD_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPKHEMODAD_DISPOSE_OFFSET))(this);
		}

		::System::Void COJCCABILII(::RPG::GameCore::AnimStateLogicType a1, ::CEBMNLPNKFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::CEBMNLPNKFL*))((::PBYTE)hIl2Cpp + GIPKHEMODAD_COJCCABILII_OFFSET))(this, a1, a2);
		}

		::System::Void CBMFBHCDJMA(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + GIPKHEMODAD_CBMFBHCDJMA_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AnimStateLogicType BKAIEPJHGNP()
		{
			return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPKHEMODAD_BKAIEPJHGNP_OFFSET))(this);
		}

		::System::Boolean MCCPPKGEHAD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GIPKHEMODAD_MCCPPKGEHAD_OFFSET))(this, a1);
		}

		::System::Object* NKFJHHOIOAP(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GIPKHEMODAD_NKFJHHOIOAP_OFFSET))(this, a1);
		}

		::System::Void AALHEFEEHEG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIPKHEMODAD_AALHEFEEHEG_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIPKHEMODAD_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::NILCJPJGMJC* get_Mutator()
		{
			return ((::NILCJPJGMJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPKHEMODAD_GET_MUTATOR_OFFSET))(this);
		}

		::System::Void set_Mutator(::NILCJPJGMJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NILCJPJGMJC*))((::PBYTE)hIl2Cpp + GIPKHEMODAD_SET_MUTATOR_OFFSET))(this, a1);
		}

		::CFFPEAALCPH* EPMDJMBPFGG()
		{
			return ((::CFFPEAALCPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPKHEMODAD_EPMDJMBPFGG_OFFSET))(this);
		}

		::System::Single get_CurrentStateElapsed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPKHEMODAD_GET_CURRENTSTATEELAPSED_OFFSET))(this);
		}

		::System::Void set_CurrentStateElapsed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIPKHEMODAD_SET_CURRENTSTATEELAPSED_OFFSET))(this, a1);
		}

		::JHMBGNKOIJH* get_AnimTrack()
		{
			return ((::JHMBGNKOIJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPKHEMODAD_GET_ANIMTRACK_OFFSET))(this);
		}

		::System::Void set_AnimTrack(::JHMBGNKOIJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHMBGNKOIJH*))((::PBYTE)hIl2Cpp + GIPKHEMODAD_SET_ANIMTRACK_OFFSET))(this, a1);
		}

		::RPG::Client::MockAnimator* FBHJPDAEDGI()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPKHEMODAD_FBHJPDAEDGI_OFFSET))(this);
		}

		::System::Void BJNCHJDCAPD(::RPG::Client::MockAnimator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + GIPKHEMODAD_BJNCHJDCAPD_OFFSET))(this, a1);
		}

		::System::Void NCLOCKBAJLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPKHEMODAD_NCLOCKBAJLK_OFFSET))(this);
		}

		::System::Void HGOJJLIOPPD(::RPG::GameCore::AnimStateLogicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + GIPKHEMODAD_HGOJJLIOPPD_OFFSET))(this, a1);
		}

		::RPG::GameCore::AnimStateLogicType JHIKPOPKMAI()
		{
			return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPKHEMODAD_JHIKPOPKMAI_OFFSET))(this);
		}

	};
