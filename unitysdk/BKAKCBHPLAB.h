#pragma once
#include "unitysdk/unitysdk.h"
class ACDJHCBFNJN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define BKAKCBHPLAB_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7AC280)
#define BKAKCBHPLAB_CPCAFOACNJO_OFFSET UNITYSDK_OFFSET(0xB7ABD00)
#define BKAKCBHPLAB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7ABBC0)
#define BKAKCBHPLAB_GLDEHIOBKPB_OFFSET UNITYSDK_OFFSET(0xB7AC1B0)
#define BKAKCBHPLAB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7ABBF0)

	class BKAKCBHPLAB
	{
	public:
		static ::System::String** StaticGet_NGCPHLMENKB()
		{
			return (::System::String**)UnitySDK::FromName("", "BKAKCBHPLAB")->GetStaticField(0x6F620);
		}

		// static const ::System::Object FHHOIOAFEIF; // 0x0
		// static const ::System::Object OLLBDAOHPBI; // 0x0
		// static const ::System::Object OGKPIGECAKH; // 0x0
		// static const ::System::Object BNNDJOENBOM; // 0x0
		// static const ::System::Object BPLNKGKICHJ; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ACDJHCBFNJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ACDJHCBFNJN*))((::PBYTE)hIl2Cpp + BKAKCBHPLAB_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKAKCBHPLAB_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAKCBHPLAB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void CPCAFOACNJO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BKAKCBHPLAB_CPCAFOACNJO_OFFSET))(this, a1);
		}

		static ::System::UInt32 GLDEHIOBKPB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BKAKCBHPLAB_GLDEHIOBKPB_OFFSET))(a1);
		}

	};
