#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGDGOMKKEJI.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GHNMNFHDCME;
class IJFIHJJPHNA;
class PLAJONHLDJN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHMBINMCDGN_ACKKLEOAMCH_OFFSET UNITYSDK_OFFSET(0x1C5FFC10)
#define EHMBINMCDGN_BHEMCMFHINL_OFFSET UNITYSDK_OFFSET(0x1C600460)
#define EHMBINMCDGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6005B0)
#define EHMBINMCDGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FFAC0)
#define EHMBINMCDGN_PAANCLMIACD_OFFSET UNITYSDK_OFFSET(0x1C6003E0)
#define EHMBINMCDGN_PCGCDDDBMFE_OFFSET UNITYSDK_OFFSET(0x1C6001A0)

inline static constexpr unsigned int EHMBINMCDGN_TypeDefinitionIndex = 36279;

	class EHMBINMCDGN : public ::EGDGOMKKEJI
	{
	public:
		::PLAJONHLDJN* NPJFFHDPPMO; // 0x38
		::GHNMNFHDCME* EAEJGPLLGMI; // 0x40
		static ::RPG::GameCore::StringHash* StaticGet_CHHAAANMKKB()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EHMBINMCDGN")->GetStaticField(0x13C90);
		}

		::System::Void _ctor(::PLAJONHLDJN* a1, ::IJFIHJJPHNA* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PLAJONHLDJN*, ::IJFIHJJPHNA*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + EHMBINMCDGN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHMBINMCDGN_CCTOR_OFFSET))();
		}

		::IJFIHJJPHNA* ACKKLEOAMCH(::RPG::GameCore::DiceCombatTarget a1)
		{
			return ((::IJFIHJJPHNA*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + EHMBINMCDGN_ACKKLEOAMCH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::IJFIHJJPHNA*>* PCGCDDDBMFE(::RPG::GameCore::DiceCombatTarget a1)
		{
			return ((::System::Collections::Generic::List_1<::IJFIHJJPHNA*>*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + EHMBINMCDGN_PCGCDDDBMFE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint PAANCLMIACD()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMBINMCDGN_PAANCLMIACD_OFFSET))(this);
		}

		::System::Boolean BHEMCMFHINL(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EHMBINMCDGN_BHEMCMFHINL_OFFSET))(this, a1, a2);
		}

	};
