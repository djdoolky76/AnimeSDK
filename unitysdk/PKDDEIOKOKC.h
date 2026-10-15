#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKDDEIOKOKC_BMJHNNKJFOP_OFFSET UNITYSDK_OFFSET(0xC2AAC90)
#define PKDDEIOKOKC_CCTOR_OFFSET UNITYSDK_OFFSET(0xC2AB7A0)
#define PKDDEIOKOKC_CIEBALBKFOO_OFFSET UNITYSDK_OFFSET(0xC2AB0C0)
#define PKDDEIOKOKC_DCKKPHHODBN_OFFSET UNITYSDK_OFFSET(0xC2AB120)
#define PKDDEIOKOKC_EDGDCODACHJ_OFFSET UNITYSDK_OFFSET(0xC2AB4B0)
#define PKDDEIOKOKC_HJDLLDFDPCC_OFFSET UNITYSDK_OFFSET(0xC2AA260)
#define PKDDEIOKOKC_JHHBNKBPHJN_OFFSET UNITYSDK_OFFSET(0xC2AB200)
#define PKDDEIOKOKC_JOFODMBLPOK_OFFSET UNITYSDK_OFFSET(0xC2AA0A0)
#define PKDDEIOKOKC_KBHOMEIAEHE_OFFSET UNITYSDK_OFFSET(0xC2AA690)
#define PKDDEIOKOKC_KLLLJHDICPG_OFFSET UNITYSDK_OFFSET(0xC2AA930)
#define PKDDEIOKOKC_LBLAECKCIOH_OFFSET UNITYSDK_OFFSET(0xC2AAFA0)
#define PKDDEIOKOKC_NPCKCECDKPP_OFFSET UNITYSDK_OFFSET(0xC2AADA0)
#define PKDDEIOKOKC_OMGEDMHMDDA_OFFSET UNITYSDK_OFFSET(0xC2AA190)
#define PKDDEIOKOKC_PNHDLHIHMNI_OFFSET UNITYSDK_OFFSET(0xC2AAED0)

inline static constexpr unsigned int PKDDEIOKOKC_TypeDefinitionIndex = 60207;

	class PKDDEIOKOKC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_NJAGHGGGNAI()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("", "PKDDEIOKOKC")->GetStaticField(0x6E840);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_IOBGPAJIPDG()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("", "PKDDEIOKOKC")->GetStaticField(0x6E848);
		}

		static ::RPG::GameCore::StringHash* StaticGet_LDBMEMNMJHD()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "PKDDEIOKOKC")->GetStaticField(0x15520);
		}

		static ::RPG::GameCore::StringHash* StaticGet_GBPPBOFLHEF()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "PKDDEIOKOKC")->GetStaticField(0x15524);
		}

		// static const ::System::Object CIDONBMBIBL; // 0x0
		// static const ::System::Object KHHMEJMJNFC; // 0x0
		// static const ::System::Object POAJDDKNKFL; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKDDEIOKOKC_CCTOR_OFFSET))();
		}

		static ::System::Single JOFODMBLPOK(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + PKDDEIOKOKC_JOFODMBLPOK_OFFSET))(a1, a2);
		}

		static ::System::Void OMGEDMHMDDA(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + PKDDEIOKOKC_OMGEDMHMDDA_OFFSET))(a1, a2);
		}

		static ::System::Boolean HJDLLDFDPCC(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PKDDEIOKOKC_HJDLLDFDPCC_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::GameEntity* KBHOMEIAEHE(::RPG::GameCore::GameWorld* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameWorld*, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PKDDEIOKOKC_KBHOMEIAEHE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::String* BMJHNNKJFOP(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PKDDEIOKOKC_BMJHNNKJFOP_OFFSET))(a1);
		}

		static ::System::Void NPCKCECDKPP(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + PKDDEIOKOKC_NPCKCECDKPP_OFFSET))(a1, a2);
		}

		static ::System::Void KLLLJHDICPG(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PKDDEIOKOKC_KLLLJHDICPG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CIEBALBKFOO(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + PKDDEIOKOKC_CIEBALBKFOO_OFFSET))(a1, a2);
		}

		static ::System::Boolean PNHDLHIHMNI(::Il2CppArray<::System::Single>* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Single>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PKDDEIOKOKC_PNHDLHIHMNI_OFFSET))(a1, a2);
		}

		static ::System::Void LBLAECKCIOH(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PKDDEIOKOKC_LBLAECKCIOH_OFFSET))(a1, a2);
		}

		static ::System::Void DCKKPHHODBN(::RPG::GameCore::GameWorld* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PKDDEIOKOKC_DCKKPHHODBN_OFFSET))(a1, a2);
		}

		static ::System::Boolean JHHBNKBPHJN(::RPG::GameCore::GameWorld* a1, ::RPG::GameCore::GameEntity* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameWorld*, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PKDDEIOKOKC_JHHBNKBPHJN_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void EDGDCODACHJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PKDDEIOKOKC_EDGDCODACHJ_OFFSET))(a1);
		}

	};
