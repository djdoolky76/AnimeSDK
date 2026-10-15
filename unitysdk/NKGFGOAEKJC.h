#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NKGFGOAEKJC_AFLGOJFICFH.h"
class HJKGHIFLLAO;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NKGFGOAEKJC_CCALJNGOIPK_OFFSET UNITYSDK_OFFSET(0xBC34810)
#define NKGFGOAEKJC_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC34A10)
#define NKGFGOAEKJC_GNNMKIOFKKB_OFFSET UNITYSDK_OFFSET(0xBC340A0)
#define NKGFGOAEKJC_HIIMEIFGMFF_1_OFFSET UNITYSDK_OFFSET(0xBC345D0)
#define NKGFGOAEKJC_HIIMEIFGMFF_OFFSET UNITYSDK_OFFSET(0xBC34150)
#define NKGFGOAEKJC_MEILPOCGIIK_OFFSET UNITYSDK_OFFSET(0xBC33FA0)

inline static constexpr unsigned int NKGFGOAEKJC_TypeDefinitionIndex = 78578;

	class NKGFGOAEKJC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Object*>** StaticGet_DMPIGOFPLLB()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Object*>**)UnitySDK::FromName("", "NKGFGOAEKJC")->GetStaticField(0x47B10);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::String*>** StaticGet_CAPEMEGKBPD()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::String*>**)UnitySDK::FromName("", "NKGFGOAEKJC")->GetStaticField(0x47B18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKGFGOAEKJC_CCTOR_OFFSET))();
		}

		static ::System::Void MEILPOCGIIK(::RPG::GameCore::GameEntity* a1, ::NKGFGOAEKJC_AFLGOJFICFH a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::NKGFGOAEKJC_AFLGOJFICFH))((::PBYTE)hIl2Cpp + NKGFGOAEKJC_MEILPOCGIIK_OFFSET))(a1, a2);
		}

		static ::System::Void GNNMKIOFKKB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NKGFGOAEKJC_GNNMKIOFKKB_OFFSET))(a1);
		}

		static ::HJKGHIFLLAO* HIIMEIFGMFF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::HJKGHIFLLAO*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NKGFGOAEKJC_HIIMEIFGMFF_OFFSET))(a1, a2);
		}

		static ::HJKGHIFLLAO* HIIMEIFGMFF_1(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::HJKGHIFLLAO*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NKGFGOAEKJC_HIIMEIFGMFF_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CCALJNGOIPK(::HJKGHIFLLAO* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::HJKGHIFLLAO*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NKGFGOAEKJC_CCALJNGOIPK_OFFSET))(a1, a2);
		}

	};
