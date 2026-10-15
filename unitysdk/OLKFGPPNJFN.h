#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class ICollector; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { class IGroup; }
namespace System { class String; }

#define OLKFGPPNJFN_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0xBF0F180)
#define OLKFGPPNJFN_CCTOR_OFFSET UNITYSDK_OFFSET(0xBF0F3C0)
#define OLKFGPPNJFN_CTOR_OFFSET UNITYSDK_OFFSET(0xBF0E050)
#define OLKFGPPNJFN_DKCGLODNKFG_OFFSET UNITYSDK_OFFSET(0xBF0E7D0)
#define OLKFGPPNJFN_ELDCJMDDDOC_OFFSET UNITYSDK_OFFSET(0xBF0E4B0)
#define OLKFGPPNJFN_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBF0E780)
#define OLKFGPPNJFN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBF0E280)
#define OLKFGPPNJFN_NNKOMLNPHID_OFFSET UNITYSDK_OFFSET(0xBF0EB40)
#define OLKFGPPNJFN_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xBF0EF70)

inline static constexpr unsigned int OLKFGPPNJFN_TypeDefinitionIndex = 77121;

	class OLKFGPPNJFN : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::Entitas::IGroup* AMAPJMHAHDD; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::Entitas::ICollector* JALGFGCOAGB; // 0x28
		static ::System::String** StaticGet_AOCHFFPMLJL()
		{
			return (::System::String**)UnitySDK::FromName("", "OLKFGPPNJFN")->GetStaticField(0x58320);
		}

		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + OLKFGPPNJFN_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLKFGPPNJFN_CCTOR_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKFGPPNJFN_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKFGPPNJFN_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKFGPPNJFN_TEARDOWN_OFFSET))(this);
		}

		::System::Void ELDCJMDDDOC(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + OLKFGPPNJFN_ELDCJMDDDOC_OFFSET))(this, a1);
		}

		::System::Void DKCGLODNKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKFGPPNJFN_DKCGLODNKFG_OFFSET))(this);
		}

		::System::Void NNKOMLNPHID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKFGPPNJFN_NNKOMLNPHID_OFFSET))(this);
		}

		::System::Void AAJNAFJEDHB(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + OLKFGPPNJFN_AAJNAFJEDHB_OFFSET))(this, a1, a2);
		}

	};
