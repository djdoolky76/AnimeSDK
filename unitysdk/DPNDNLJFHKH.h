#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class AIKNOONFCFG;
class JCMDOLKLKEL;
class NOCGHCNMOKB;
class POKKCEHMFMJ;
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPNDNLJFHKH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x12658A80)
#define DPNDNLJFHKH_CTOR_OFFSET UNITYSDK_OFFSET(0x126589F0)
#define DPNDNLJFHKH_NBLLBHEEDNK_OFFSET UNITYSDK_OFFSET(0x12658C30)

inline static constexpr unsigned int DPNDNLJFHKH_TypeDefinitionIndex = 62827;

	class DPNDNLJFHKH : public ::System::Object
	{
	public:
		::POKKCEHMFMJ* LBNAGLIGKIO; // 0x10
		::JCMDOLKLKEL* ONGDFCGGFDM; // 0x18
		::System::Void _ctor(::JCMDOLKLKEL* a1, ::POKKCEHMFMJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JCMDOLKLKEL*, ::POKKCEHMFMJ*))((::PBYTE)hIl2Cpp + DPNDNLJFHKH_CTOR_OFFSET))(this, a1, a2);
		}

		::AIKNOONFCFG* BPLPBPMEODA(::AHHNGJGLOKA a1, ::RPG::GameCore::SpecialAvatarRow* a2)
		{
			return ((::AIKNOONFCFG*(*)(::PVOID, ::AHHNGJGLOKA, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + DPNDNLJFHKH_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::NOCGHCNMOKB*>* NBLLBHEEDNK(::RPG::GameCore::SpecialAvatarRow* a1)
		{
			return ((::System::Collections::Generic::List_1<::NOCGHCNMOKB*>*(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + DPNDNLJFHKH_NBLLBHEEDNK_OFFSET))(this, a1);
		}

	};
