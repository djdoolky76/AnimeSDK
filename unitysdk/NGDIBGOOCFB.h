#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JKOIGPOFKBN;
namespace System { template <typename T> class Action_1; }

#define NGDIBGOOCFB_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x17283610)
#define NGDIBGOOCFB_CEIHDHEOELF_OFFSET UNITYSDK_OFFSET(0x17283C10)
#define NGDIBGOOCFB_DESTRUCTOR_OFFSET UNITYSDK_OFFSET(0x17283810)
#define NGDIBGOOCFB_EOPKJKHOPFE_OFFSET UNITYSDK_OFFSET(0x17283860)
#define NGDIBGOOCFB_EPLFMMGEOEB_OFFSET UNITYSDK_OFFSET(0x17283A60)
#define NGDIBGOOCFB_HEEHHNHDNCP_OFFSET UNITYSDK_OFFSET(0x17283C20)
#define NGDIBGOOCFB_MILPMAHEDAA_OFFSET UNITYSDK_OFFSET(0x17283730)
#define NGDIBGOOCFB_PBFHKDJOBFG_1_OFFSET UNITYSDK_OFFSET(0x172839D0)
#define NGDIBGOOCFB_PBFHKDJOBFG_OFFSET UNITYSDK_OFFSET(0x17283970)
#define NGDIBGOOCFB__CCTOR_OFFSET UNITYSDK_OFFSET(0x17283960)
#define NGDIBGOOCFB__CTOR_OFFSET UNITYSDK_OFFSET(0x172838F0)

inline static constexpr unsigned int NGDIBGOOCFB_TypeDefinitionIndex = 89418;

class NGDIBGOOCFB : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_KNBPIOKAEFE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NGDIBGOOCFB_TypeDefinitionIndex)->GetStaticField(0x124C0);
	}
	::Il2CppArray<::JKOIGPOFKBN*>* MJKONHDAIPN; // 0x10
	::System::Int32 _PNOGFLHPLOJ_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDIBGOOCFB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGDIBGOOCFB__CCTOR_OFFSET))();
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDIBGOOCFB_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Void Destructor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDIBGOOCFB_DESTRUCTOR_OFFSET))(this);
	}

	::System::Void MILPMAHEDAA(::System::Action_1<::JKOIGPOFKBN*>* ECJMDCNPMKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::JKOIGPOFKBN*>*))((::PBYTE)hIl2Cpp + NGDIBGOOCFB_MILPMAHEDAA_OFFSET))(this, ECJMDCNPMKF);
	}

	::System::Boolean PBFHKDJOBFG(::JKOIGPOFKBN* MPLFFDAPJLK)
	{
		return ((::System::Boolean(*)(::PVOID, ::JKOIGPOFKBN*))((::PBYTE)hIl2Cpp + NGDIBGOOCFB_PBFHKDJOBFG_OFFSET))(this, MPLFFDAPJLK);
	}

	::System::Boolean EPLFMMGEOEB(::JKOIGPOFKBN* MPLFFDAPJLK)
	{
		return ((::System::Boolean(*)(::PVOID, ::JKOIGPOFKBN*))((::PBYTE)hIl2Cpp + NGDIBGOOCFB_EPLFMMGEOEB_OFFSET))(this, MPLFFDAPJLK);
	}

	::System::Void CEIHDHEOELF(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGDIBGOOCFB_CEIHDHEOELF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EOPKJKHOPFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDIBGOOCFB_EOPKJKHOPFE_OFFSET))(this);
	}

	::System::Int32 HEEHHNHDNCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDIBGOOCFB_HEEHHNHDNCP_OFFSET))(this);
	}

	::System::Boolean PBFHKDJOBFG_1(::System::UInt32 OLENBJAGKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGDIBGOOCFB_PBFHKDJOBFG_1_OFFSET))(this, OLENBJAGKFF);
	}
};
