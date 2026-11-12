#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelPedestrianV2MemberExtendFreeStyle; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KOJLADIPNKE_GLECDFJALMG_CTOR_OFFSET UNITYSDK_OFFSET(0xBDEE060)
#define KOJLADIPNKE_GLECDFJALMG_JCDELMOLANL_OFFSET UNITYSDK_OFFSET(0xBDEE1D0)
#define KOJLADIPNKE_GLECDFJALMG_JJGGPFELPON_OFFSET UNITYSDK_OFFSET(0xBDEE0C0)

inline static constexpr unsigned int KOJLADIPNKE_GLECDFJALMG_TypeDefinitionIndex = 71234;

	class KOJLADIPNKE_GLECDFJALMG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle*>* LHDBMGGLFCA; // 0x10
		::System::Single POMALHEBAGE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJLADIPNKE_GLECDFJALMG_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle* JCDELMOLANL()
		{
			return ((::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJLADIPNKE_GLECDFJALMG_JCDELMOLANL_OFFSET))(this);
		}

		::System::Void JJGGPFELPON(::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle*))((::PBYTE)hIl2Cpp + KOJLADIPNKE_GLECDFJALMG_JJGGPFELPON_OFFSET))(this, a1);
		}

	};
