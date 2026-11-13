#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class MaterialPropertyAnimBehavior_MaterialPropertyContent; }
namespace RPG::Client { class MaterialPropertyAnimMonoPlugin; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_BKIPKMFNCMJ_OFFSET UNITYSDK_OFFSET(0x1D7281A0)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D728A10)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x1D728360)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D728A00)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_FIOEFKBHKJF_OFFSET UNITYSDK_OFFSET(0x1D7287B0)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x1D727DE0)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0x1D7283C0)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_KKFMAIHHMAD_OFFSET UNITYSDK_OFFSET(0x1D727E20)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1D727B30)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x1D727FA0)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0x1D7284C0)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0x1D728420)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1D727BC0)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0x1D728480)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x1D728520)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertyAnimBehavior_TypeDefinitionIndex = 72695;

	class MaterialPropertyAnimBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>** StaticGet__MaterialPropertyDictionary()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "MaterialPropertyAnimBehavior")->GetStaticField(0x5F6E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::MaterialPropertyAnimMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::MaterialPropertyAnimMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void FIOEFKBHKJF(::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* a1, ::System::Single a2, ::UnityEngine::Vector4 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent*, ::System::Single, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_FIOEFKBHKJF_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void KKFMAIHHMAD(::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_KKFMAIHHMAD_OFFSET))(a1);
		}

		static ::System::Void BKIPKMFNCMJ(::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_BKIPKMFNCMJ_OFFSET))(a1);
		}

	};
}
