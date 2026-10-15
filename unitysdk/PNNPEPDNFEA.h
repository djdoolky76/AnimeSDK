#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEMKNPIFMBI.h"
#include "unitysdk/OONGDLIDJJJ_KGFBJAABGAN.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple.h"
class AGOFDNJAOMA;
class FOEAEFCBCOM;
class OONGDLIDJJJ;
class PNNPEPDNFEA_PEAIKOGICOC;
namespace RPG::GameCore { class ComplexSkillAIAxis; }
namespace RPG::GameCore { class ComplexSkillAIConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNNPEPDNFEA_ACOEPHJBNFN_OFFSET UNITYSDK_OFFSET(0xC353310)
#define PNNPEPDNFEA_AENPAHFGAMG_OFFSET UNITYSDK_OFFSET(0xC352CF0)
#define PNNPEPDNFEA_CCTOR_OFFSET UNITYSDK_OFFSET(0xC353390)
#define PNNPEPDNFEA_CFJGIOGPHOP_OFFSET UNITYSDK_OFFSET(0xC3528E0)
#define PNNPEPDNFEA_CTOR_OFFSET UNITYSDK_OFFSET(0xC350790)
#define PNNPEPDNFEA_EHJJFEPIIBE_OFFSET UNITYSDK_OFFSET(0xC3521C0)
#define PNNPEPDNFEA_FABKIHFNAHG_OFFSET UNITYSDK_OFFSET(0xC351060)
#define PNNPEPDNFEA_FGCABKBPHLJ_OFFSET UNITYSDK_OFFSET(0xC350E40)
#define PNNPEPDNFEA_FINMNNNNAOH_OFFSET UNITYSDK_OFFSET(0xC352280)
#define PNNPEPDNFEA_GGEKFKCPKFH_OFFSET UNITYSDK_OFFSET(0xC352A60)
#define PNNPEPDNFEA_INMLFHEFKOH_OFFSET UNITYSDK_OFFSET(0xC352B20)
#define PNNPEPDNFEA_JNNLNGPHPPC_OFFSET UNITYSDK_OFFSET(0xC352D70)
#define PNNPEPDNFEA_KEGGIIPGDEP_OFFSET UNITYSDK_OFFSET(0xC352580)
#define PNNPEPDNFEA_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0xC350830)
#define PNNPEPDNFEA_NDLIMDAMHEK_OFFSET UNITYSDK_OFFSET(0xC351E20)
#define PNNPEPDNFEA_NHJNDJKIKIJ_OFFSET UNITYSDK_OFFSET(0xC352430)
#define PNNPEPDNFEA_PBFNKBCLIPB_OFFSET UNITYSDK_OFFSET(0xC352BF0)

	class PNNPEPDNFEA : public ::BEMKNPIFMBI
	{
	public:
		::RPG::GameCore::ComplexSkillAIAxis* IGHAHBNLIJA; // 0x18
		::AGOFDNJAOMA* EMOAGCAHICO; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* JNJHHADPJKL; // 0x28
		static ::System::String** StaticGet_KOIJGPMOOIF()
		{
			return (::System::String**)UnitySDK::FromName("", "PNNPEPDNFEA")->GetStaticField(0x6FF40);
		}

		static ::System::String** StaticGet_EGEDJFGFDIN()
		{
			return (::System::String**)UnitySDK::FromName("", "PNNPEPDNFEA")->GetStaticField(0x6FF48);
		}

		::System::Void _ctor(::RPG::GameCore::ComplexSkillAIAxis* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ComplexSkillAIAxis*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNNPEPDNFEA_CCTOR_OFFSET))();
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_MNAKIEOGPDK_OFFSET))(this);
		}

		static ::System::Int32 GGEKFKCPKFH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_GGEKFKCPKFH_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* PBFNKBCLIPB(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_PBFNKBCLIPB_OFFSET))(a1);
		}

		::System::Boolean NDLIMDAMHEK(::OONGDLIDJJJ* a1, ::AGOFDNJAOMA* a2, ::RPG::GameCore::SkillData* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::OONGDLIDJJJ*, ::AGOFDNJAOMA*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_NDLIMDAMHEK_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::Int32>* FGCABKBPHLJ(::OONGDLIDJJJ* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_FGCABKBPHLJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntityList* EHJJFEPIIBE(::System::Int32 a1, ::OONGDLIDJJJ* a2)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::Int32, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_EHJJFEPIIBE_OFFSET))(this, a1, a2);
		}

		::PNNPEPDNFEA_PEAIKOGICOC* FINMNNNNAOH(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::OONGDLIDJJJ* a3)
		{
			return ((::PNNPEPDNFEA_PEAIKOGICOC*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_FINMNNNNAOH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CFJGIOGPHOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_CFJGIOGPHOP_OFFSET))(this);
		}

		static ::RPG::GameCore::ComplexSkillAIConfig* ACOEPHJBNFN(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::ComplexSkillAIConfig*(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_ACOEPHJBNFN_OFFSET))(a1, a2);
		}

		static ::System::Int32 INMLFHEFKOH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_INMLFHEFKOH_OFFSET))(a1);
		}

		static ::OONGDLIDJJJ_KGFBJAABGAN KEGGIIPGDEP(::OONGDLIDJJJ* a1, ::System::Int32 a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a5, ::PNNPEPDNFEA_PEAIKOGICOC* a6, ::AGOFDNJAOMA* a7)
		{
			return ((::OONGDLIDJJJ_KGFBJAABGAN(*)(::OONGDLIDJJJ*, ::System::Int32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::PNNPEPDNFEA_PEAIKOGICOC*, ::AGOFDNJAOMA*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_KEGGIIPGDEP_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void FABKIHFNAHG(::OONGDLIDJJJ* a1, ::AGOFDNJAOMA* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OONGDLIDJJJ*, ::AGOFDNJAOMA*, ::System::Object*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_FABKIHFNAHG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NHJNDJKIKIJ(::OONGDLIDJJJ* a1, ::RPG::GameCore::GameEntityList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OONGDLIDJJJ*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_NHJNDJKIKIJ_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple JNNLNGPHPPC(::OONGDLIDJJJ* a1, ::AGOFDNJAOMA* a2, ::RPG::GameCore::SkillData* a3)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::OONGDLIDJJJ*, ::AGOFDNJAOMA*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_JNNLNGPHPPC_OFFSET))(this, a1, a2, a3);
		}

		::FOEAEFCBCOM* AENPAHFGAMG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::FOEAEFCBCOM*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_AENPAHFGAMG_OFFSET))(this, a1);
		}

	};
