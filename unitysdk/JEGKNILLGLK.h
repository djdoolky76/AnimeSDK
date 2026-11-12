#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/System/Object.h"
class CENEFPOMFKG;
class FEDDCDEFDCE;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JEGKNILLGLK_CKEKHHODJOF_OFFSET UNITYSDK_OFFSET(0xB9665A0)
#define JEGKNILLGLK_CTOR_OFFSET UNITYSDK_OFFSET(0xB966A00)
#define JEGKNILLGLK_EBOHNNDEMCF_OFFSET UNITYSDK_OFFSET(0xB966000)
#define JEGKNILLGLK_EJNBJPPGNJF_OFFSET UNITYSDK_OFFSET(0xB9668A0)
#define JEGKNILLGLK_FHHJONHADIF_OFFSET UNITYSDK_OFFSET(0xB9669F0)
#define JEGKNILLGLK_FJAAHPLDOJB_OFFSET UNITYSDK_OFFSET(0xB9669E0)
#define JEGKNILLGLK_GCKONMKPBCK_OFFSET UNITYSDK_OFFSET(0xB965EB0)
#define JEGKNILLGLK_JKGHOACJHOH_OFFSET UNITYSDK_OFFSET(0xB966160)
#define JEGKNILLGLK_KFLIMCBFEHK_OFFSET UNITYSDK_OFFSET(0xB966670)
#define JEGKNILLGLK_NNIBPFEKKMK_OFFSET UNITYSDK_OFFSET(0xB965C60)
#define JEGKNILLGLK_OFEGOGFAMIK_OFFSET UNITYSDK_OFFSET(0xB9663F0)

inline static constexpr unsigned int JEGKNILLGLK_TypeDefinitionIndex = 55423;

	class JEGKNILLGLK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* IODIJGGBONA; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::FEDDCDEFDCE*>* CHNADIJCGMP; // 0x18
		::CENEFPOMFKG* OCOIDGHBAEH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGKNILLGLK_CTOR_OFFSET))(this);
		}

		::System::Boolean NNIBPFEKKMK(::CENEFPOMFKG* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::CENEFPOMFKG*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JEGKNILLGLK_NNIBPFEKKMK_OFFSET))(this, a1, a2);
		}

		::System::Boolean JKGHOACJHOH(::CENEFPOMFKG* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::CENEFPOMFKG*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JEGKNILLGLK_JKGHOACJHOH_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFLIMCBFEHK(::CENEFPOMFKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + JEGKNILLGLK_KFLIMCBFEHK_OFFSET))(this, a1);
		}

		::System::Void EJNBJPPGNJF(::CENEFPOMFKG* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + JEGKNILLGLK_EJNBJPPGNJF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EBOHNNDEMCF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JEGKNILLGLK_EBOHNNDEMCF_OFFSET))(this, a1);
		}

		::System::Void OFEGOGFAMIK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JEGKNILLGLK_OFEGOGFAMIK_OFFSET))(this, a1);
		}

		::System::Void GCKONMKPBCK(::CENEFPOMFKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + JEGKNILLGLK_GCKONMKPBCK_OFFSET))(this, a1);
		}

		::System::Void CKEKHHODJOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGKNILLGLK_CKEKHHODJOF_OFFSET))(this);
		}

		::CENEFPOMFKG* FJAAHPLDOJB()
		{
			return ((::CENEFPOMFKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGKNILLGLK_FJAAHPLDOJB_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::FEDDCDEFDCE*>* FHHJONHADIF()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::FEDDCDEFDCE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGKNILLGLK_FHHJONHADIF_OFFSET))(this);
		}

	};
