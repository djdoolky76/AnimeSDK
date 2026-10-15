#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NFDBCBOFLKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB7B560)
#define NFDBCBOFLKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBB7B5A0)
#define NFDBCBOFLKP___C__SYNCELATIONTEMPLATEID_B__1_0_OFFSET UNITYSDK_OFFSET(0xBB7B600)
#define NFDBCBOFLKP___C__SYNC_B__0_0_OFFSET UNITYSDK_OFFSET(0xBB7B5B0)

inline static constexpr unsigned int NFDBCBOFLKP___c_TypeDefinitionIndex = 65518;

	class NFDBCBOFLKP___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30910);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30918);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFDBCBOFLKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDBCBOFLKP___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemConfig* _Sync_b__0_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFDBCBOFLKP___C__SYNC_B__0_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* _SyncElationTemplateID_b__1_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFDBCBOFLKP___C__SYNCELATIONTEMPLATEID_B__1_0_OFFSET))(this, a1);
		}

	};
