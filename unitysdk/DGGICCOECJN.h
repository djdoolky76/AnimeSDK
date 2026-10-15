#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"
class BCADAPOHGKB;
class CKCJOCJGHKC;
class DGGICCOECJN_GMOMAEFHNHJ;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define DGGICCOECJN_CTOR_OFFSET UNITYSDK_OFFSET(0xE848090)
#define DGGICCOECJN_IGECFKBDNHK_OFFSET UNITYSDK_OFFSET(0xE847670)
#define DGGICCOECJN_KHGLPBDLMDP_OFFSET UNITYSDK_OFFSET(0xE847610)
#define DGGICCOECJN_OBBAHBNIDEC_OFFSET UNITYSDK_OFFSET(0xE8475B0)
#define DGGICCOECJN_OEJKNLKJCHP_OFFSET UNITYSDK_OFFSET(0xE8473F0)
#define DGGICCOECJN_OLFCBKHEBJH_1_OFFSET UNITYSDK_OFFSET(0xE847DE0)
#define DGGICCOECJN_OLFCBKHEBJH_OFFSET UNITYSDK_OFFSET(0xE847C50)
#define DGGICCOECJN_PJKNMPOCDDC_OFFSET UNITYSDK_OFFSET(0xE848000)

inline static constexpr unsigned int DGGICCOECJN_TypeDefinitionIndex = 63126;

	class DGGICCOECJN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChallengeGroupType, ::System::Object*>* DPHNABJHCFI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGICCOECJN_CTOR_OFFSET))(this);
		}

		::DGGICCOECJN_GMOMAEFHNHJ* OEJKNLKJCHP(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::DGGICCOECJN_GMOMAEFHNHJ*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + DGGICCOECJN_OEJKNLKJCHP_OFFSET))(this, a1);
		}

		::System::Int32 OBBAHBNIDEC(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + DGGICCOECJN_OBBAHBNIDEC_OFFSET))(this, a1);
		}

		::System::Boolean KHGLPBDLMDP(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + DGGICCOECJN_KHGLPBDLMDP_OFFSET))(this, a1);
		}

		::System::Void IGECFKBDNHK(::System::Collections::Generic::IEnumerable_1<::BCADAPOHGKB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::BCADAPOHGKB*>*))((::PBYTE)hIl2Cpp + DGGICCOECJN_IGECFKBDNHK_OFFSET))(this, a1);
		}

		::System::Void OLFCBKHEBJH(::RPG::Client::ChallengeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + DGGICCOECJN_OLFCBKHEBJH_OFFSET))(this, a1);
		}

		::System::Void OLFCBKHEBJH_1(::CKCJOCJGHKC* a1, ::RPG::Client::ChallengeGroupData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CKCJOCJGHKC*, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + DGGICCOECJN_OLFCBKHEBJH_1_OFFSET))(this, a1, a2);
		}

		::System::Void PJKNMPOCDDC(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + DGGICCOECJN_PJKNMPOCDDC_OFFSET))(this, a1);
		}

	};
