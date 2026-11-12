#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
class MGBHKCMHDOK;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTwoInOneEffect; }

#define RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDCF7780)
#define RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_FIND_OFFSET UNITYSDK_OFFSET(0xDCF7A90)
#define RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_GETMAXEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xDCF7C30)
#define RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_GETPAIREDROLEID_OFFSET UNITYSDK_OFFSET(0xDCF7D70)
#define RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_GET_MAINUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDCF7790)
#define RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_GET_SUBUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDCF77B0)
#define RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_ISMAINROLE_OFFSET UNITYSDK_OFFSET(0xDCF7860)
#define RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_ISSUBROLE_OFFSET UNITYSDK_OFFSET(0xDCF77D0)
#define RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_ISTWOINONESUB_OFFSET UNITYSDK_OFFSET(0xDCF7B50)
#define RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xDCF78F0)
#define RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_SET_MAINUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDCF77A0)
#define RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_SET_SUBUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDCF77C0)
#define RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT__FINDTWOINONEEFFECTID_OFFSET UNITYSDK_OFFSET(0xDCF7FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTwoInOneEffect_TypeDefinitionIndex = 67293;

	class GridFightTwoInOneEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::UInt32 _SubUniqueId_k__BackingField; // 0x30
		::System::UInt32 _MainUniqueId_k__BackingField; // 0x34
		static ::System::Boolean* StaticGet__TwoInOneEffectIDSearched()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GridFightTwoInOneEffect")->GetStaticField(0x4990);
		}

		static ::System::UInt32* StaticGet__TwoInOneEffectIDCache()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "GridFightTwoInOneEffect")->GetStaticField(0x4994);
		}

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_MainUniqueId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_GET_MAINUNIQUEID_OFFSET))(this);
		}

		::System::Void set_MainUniqueId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_SET_MAINUNIQUEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SubUniqueId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_GET_SUBUNIQUEID_OFFSET))(this);
		}

		::System::Void set_SubUniqueId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_SET_SUBUNIQUEID_OFFSET))(this, a1);
		}

		::System::Boolean IsSubRole(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_ISSUBROLE_OFFSET))(this, a1);
		}

		::System::Boolean IsMainRole(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_ISMAINROLE_OFFSET))(this, a1);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightTwoInOneEffect* Find()
		{
			return ((::RPG::Client::GridFightTwoInOneEffect*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_FIND_OFFSET))();
		}

		static ::System::Boolean IsTwoInOneSub(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_ISTWOINONESUB_OFFSET))(a1);
		}

		static ::System::Int32 GetMaxEquipCount(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_GETMAXEQUIPCOUNT_OFFSET))(a1);
		}

		static ::System::UInt32 GetPairedRoleID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT_GETPAIREDROLEID_OFFSET))(a1);
		}

		static ::System::UInt32 _FindTwoInOneEffectID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTWOINONEEFFECT__FINDTWOINONEEFFECTID_OFFSET))();
		}

	};
}
