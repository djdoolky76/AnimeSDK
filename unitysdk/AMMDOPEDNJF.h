#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class AMMDOPEDNJF_KODGMKBBLGB;
namespace RPG::Client { class TeamBuild; }
namespace RPG::Client { class TeamBuildRecipe; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AMMDOPEDNJF_AIPIFEIJJIC_OFFSET UNITYSDK_OFFSET(0x197DFB40)
#define AMMDOPEDNJF_BAGFFMKNKEH_OFFSET UNITYSDK_OFFSET(0x197E0AA0)
#define AMMDOPEDNJF_CTOR_OFFSET UNITYSDK_OFFSET(0x197E1190)
#define AMMDOPEDNJF_EOFKOHPIMNN_OFFSET UNITYSDK_OFFSET(0x197E0470)
#define AMMDOPEDNJF_FEJJPIAFBJK_OFFSET UNITYSDK_OFFSET(0x197DFDD0)
#define AMMDOPEDNJF_GET_HASAVATARCHECKER_OFFSET UNITYSDK_OFFSET(0x197DFAD0)
#define AMMDOPEDNJF_GET_TEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0x197DFAB0)
#define AMMDOPEDNJF_GMNGOAHOHIC_OFFSET UNITYSDK_OFFSET(0x197E0090)
#define AMMDOPEDNJF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x197DFAF0)
#define AMMDOPEDNJF_LGNOHOBGDFK_OFFSET UNITYSDK_OFFSET(0x197DF9B0)
#define AMMDOPEDNJF_NLJKNOOJKAD_OFFSET UNITYSDK_OFFSET(0x197E0FE0)
#define AMMDOPEDNJF_NNKMDKFMLGB_OFFSET UNITYSDK_OFFSET(0x197E0C90)
#define AMMDOPEDNJF_SET_HASAVATARCHECKER_OFFSET UNITYSDK_OFFSET(0x197DFAE0)
#define AMMDOPEDNJF_SET_TEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0x197DFAC0)

inline static constexpr unsigned int AMMDOPEDNJF_TypeDefinitionIndex = 70030;

	class AMMDOPEDNJF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* JCNCCBIKFJA; // 0x10
		::RPG::Client::TeamBuildRecipe* _TeamBuildRecipe_k__BackingField; // 0x18
		::System::Func_2<::System::UInt32, ::System::Boolean>* _HasAvatarChecker_k__BackingField; // 0x20
		::System::Nullable_1<::System::Int32> FALBKBBEAHG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMDOPEDNJF_CTOR_OFFSET))(this);
		}

		::System::Int32 LGNOHOBGDFK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMDOPEDNJF_LGNOHOBGDFK_OFFSET))(this);
		}

		::RPG::Client::TeamBuildRecipe* get_TeamBuildRecipe()
		{
			return ((::RPG::Client::TeamBuildRecipe*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMDOPEDNJF_GET_TEAMBUILDRECIPE_OFFSET))(this);
		}

		::System::Void set_TeamBuildRecipe(::RPG::Client::TeamBuildRecipe* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamBuildRecipe*))((::PBYTE)hIl2Cpp + AMMDOPEDNJF_SET_TEAMBUILDRECIPE_OFFSET))(this, a1);
		}

		::System::Func_2<::System::UInt32, ::System::Boolean>* get_HasAvatarChecker()
		{
			return ((::System::Func_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMDOPEDNJF_GET_HASAVATARCHECKER_OFFSET))(this);
		}

		::System::Void set_HasAvatarChecker(::System::Func_2<::System::UInt32, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + AMMDOPEDNJF_SET_HASAVATARCHECKER_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMDOPEDNJF_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void AIPIFEIJJIC(::System::Collections::Generic::ICollection_1<::RPG::Client::TeamBuild*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::TeamBuild*>*))((::PBYTE)hIl2Cpp + AMMDOPEDNJF_AIPIFEIJJIC_OFFSET))(this, a1);
		}

		::System::Void FEJJPIAFBJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMDOPEDNJF_FEJJPIAFBJK_OFFSET))(this);
		}

		::System::Void GMNGOAHOHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMDOPEDNJF_GMNGOAHOHIC_OFFSET))(this);
		}

		::RPG::Client::TeamBuild* EOFKOHPIMNN()
		{
			return ((::RPG::Client::TeamBuild*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMDOPEDNJF_EOFKOHPIMNN_OFFSET))(this);
		}

		::System::Boolean BAGFFMKNKEH(::RPG::Client::TeamBuild* a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuild*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + AMMDOPEDNJF_BAGFFMKNKEH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NNKMDKFMLGB(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AMMDOPEDNJF_NNKMDKFMLGB_OFFSET))(this, a1, a2);
		}

		::System::Boolean NLJKNOOJKAD(::System::Int32 a1, ::AMMDOPEDNJF_KODGMKBBLGB* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AMMDOPEDNJF_KODGMKBBLGB*))((::PBYTE)hIl2Cpp + AMMDOPEDNJF_NLJKNOOJKAD_OFFSET))(this, a1, a2);
		}

	};
