#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class AGOFDNJAOMA;
class CENEFPOMFKG;
class PNNPEPDNFEA_PEAIKOGICOC;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EPEBKCOIKNK_CTOR_OFFSET UNITYSDK_OFFSET(0x155D2460)
#define EPEBKCOIKNK_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x155D2200)
#define EPEBKCOIKNK_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x155D2330)

inline static constexpr unsigned int EPEBKCOIKNK_TypeDefinitionIndex = 54136;

	class EPEBKCOIKNK : public ::System::Object
	{
	public:
		::PNNPEPDNFEA_PEAIKOGICOC* NKCPNIPOACB; // 0x10
		::AGOFDNJAOMA* EMOAGCAHICO; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CIKDOOGLNDF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEBKCOIKNK_CTOR_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG(::CENEFPOMFKG* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + EPEBKCOIKNK_JDEKJLHMPLG_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB(::CENEFPOMFKG* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EPEBKCOIKNK_KFGJEKJHIMB_OFFSET))(this, a1, a2, a3);
		}

	};
