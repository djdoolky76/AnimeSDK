#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/System/Object.h"
class CFFPEAALCPH;
class ELGOAIPHFIH;
class GIPKHEMODAD;
class JHMBGNKOIJH;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OAICOGNPGMM_AMFMJPCBIPD_OFFSET UNITYSDK_OFFSET(0xBD23FA0)
#define OAICOGNPGMM_CTOR_OFFSET UNITYSDK_OFFSET(0xBD23F40)
#define OAICOGNPGMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD23F50)
#define OAICOGNPGMM_FGDKGBKFELH_OFFSET UNITYSDK_OFFSET(0xBD24280)
#define OAICOGNPGMM_IBPDLHEHEDE_OFFSET UNITYSDK_OFFSET(0xBD24030)
#define OAICOGNPGMM_IIIABCNONNO_OFFSET UNITYSDK_OFFSET(0xBD23FF0)

inline static constexpr unsigned int OAICOGNPGMM_TypeDefinitionIndex = 55918;

	class OAICOGNPGMM : public ::System::Object
	{
	public:
		::JHMBGNKOIJH* IJOKFJBGOIL; // 0x10
		::System::String* JMPIKGJOJNG; // 0x18
		::System::Boolean FLNOOGKPONH; // 0x20
		::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + OAICOGNPGMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAICOGNPGMM_DISPOSE_OFFSET))(this);
		}

		::System::Void AMFMJPCBIPD(::JHMBGNKOIJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHMBGNKOIJH*))((::PBYTE)hIl2Cpp + OAICOGNPGMM_AMFMJPCBIPD_OFFSET))(this, a1);
		}

		::JHMBGNKOIJH* IIIABCNONNO()
		{
			return ((::JHMBGNKOIJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAICOGNPGMM_IIIABCNONNO_OFFSET))(this);
		}

		::System::Void IBPDLHEHEDE(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnimStateLogicType, ::ELGOAIPHFIH*>* a1, ::RPG::GameCore::GameEntity* a2, ::CFFPEAALCPH* a3, ::GIPKHEMODAD* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnimStateLogicType, ::ELGOAIPHFIH*>*, ::RPG::GameCore::GameEntity*, ::CFFPEAALCPH*, ::GIPKHEMODAD*))((::PBYTE)hIl2Cpp + OAICOGNPGMM_IBPDLHEHEDE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FGDKGBKFELH(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnimStateLogicType, ::ELGOAIPHFIH*>* a1, ::ELGOAIPHFIH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnimStateLogicType, ::ELGOAIPHFIH*>*, ::ELGOAIPHFIH*))((::PBYTE)hIl2Cpp + OAICOGNPGMM_FGDKGBKFELH_OFFSET))(this, a1, a2);
		}

	};
