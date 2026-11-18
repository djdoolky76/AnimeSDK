#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EPackageType.h"
#include "unitysdk/Share/ESceneType.h"
#include "unitysdk/System/Object.h"

#define SHARE_CSCENEHELPER_GETDEFAULTPACKAGE_OFFSET UNITYSDK_OFFSET(0x1FC26F10)
#define SHARE_CSCENEHELPER_GETFRESHDUNGEONID_OFFSET UNITYSDK_OFFSET(0x1FC26EF0)
#define SHARE_CSCENEHELPER_GETFRESHSCENEID_OFFSET UNITYSDK_OFFSET(0x1FC26F00)
#define SHARE_CSCENEHELPER_GETHALLDUNGEONID_OFFSET UNITYSDK_OFFSET(0x1FC26ED0)
#define SHARE_CSCENEHELPER_GETHALLSCENEID_OFFSET UNITYSDK_OFFSET(0x1FC26EE0)
#define SHARE_CSCENEHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC26E30)

namespace Share
{
	inline static constexpr unsigned int CSceneHelper_TypeDefinitionIndex = 9639;

	class CSceneHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Share::EPackageType>** StaticGet_m_oDefaultPackage()
		{
			return (::Il2CppArray<::Share::EPackageType>**)Il2CppClass::FromTypeDefinitionIndex(CSceneHelper_TypeDefinitionIndex)->GetStaticField(0x7790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SHARE_CSCENEHELPER__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetHallDungeonID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SHARE_CSCENEHELPER_GETHALLDUNGEONID_OFFSET))();
		}

		static ::System::Int32 GetHallSceneID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SHARE_CSCENEHELPER_GETHALLSCENEID_OFFSET))();
		}

		static ::System::Int32 GetFreshDungeonID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SHARE_CSCENEHELPER_GETFRESHDUNGEONID_OFFSET))();
		}

		static ::System::Int32 GetFreshSceneID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SHARE_CSCENEHELPER_GETFRESHSCENEID_OFFSET))();
		}

		static ::Share::EPackageType GetDefaultPackage(::Share::ESceneType eSceneType)
		{
			return ((::Share::EPackageType(*)(::Share::ESceneType))((::PBYTE)hIl2Cpp + SHARE_CSCENEHELPER_GETDEFAULTPACKAGE_OFFSET))(eSceneType);
		}
	};
}
