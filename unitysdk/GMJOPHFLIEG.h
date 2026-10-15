#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AILeadWayState.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
class AMOPLAGOOLP;
class FOOIINCDBFA;
class OLMLKNCEDKN;
namespace RPG::Client { class Map; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define GMJOPHFLIEG_AAOCAOJDBOG_OFFSET UNITYSDK_OFFSET(0x15AC85D0)
#define GMJOPHFLIEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x15AC90F0)
#define GMJOPHFLIEG_CGJDDLLDLMO_OFFSET UNITYSDK_OFFSET(0x15AC7AC0)
#define GMJOPHFLIEG_CTOR_OFFSET UNITYSDK_OFFSET(0x15AC71F0)
#define GMJOPHFLIEG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AC73E0)
#define GMJOPHFLIEG_EAMEMNIFPOO_OFFSET UNITYSDK_OFFSET(0x15AC8FD0)
#define GMJOPHFLIEG_EJPGEFGACBA_OFFSET UNITYSDK_OFFSET(0x15AC8EE0)
#define GMJOPHFLIEG_HNALGDBPDMB_OFFSET UNITYSDK_OFFSET(0x15AC7D70)
#define GMJOPHFLIEG_IIECMNAACJI_OFFSET UNITYSDK_OFFSET(0x15AC8C30)
#define GMJOPHFLIEG_IIOBOBCMFFI_OFFSET UNITYSDK_OFFSET(0x15AC89B0)
#define GMJOPHFLIEG_JGCMKLBDHEL_OFFSET UNITYSDK_OFFSET(0x15AC7830)
#define GMJOPHFLIEG_KKEDFCNJHKB_OFFSET UNITYSDK_OFFSET(0x15AC8B10)
#define GMJOPHFLIEG_LLCDDOBNLBJ_OFFSET UNITYSDK_OFFSET(0x15AC88F0)
#define GMJOPHFLIEG_NCDLAIAFBGP_OFFSET UNITYSDK_OFFSET(0x15AC7E50)
#define GMJOPHFLIEG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AC7430)
#define GMJOPHFLIEG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AC8A50)
#define GMJOPHFLIEG_TICK_OFFSET UNITYSDK_OFFSET(0x15AC7F10)

inline static constexpr unsigned int GMJOPHFLIEG_TypeDefinitionIndex = 52208;

	class GMJOPHFLIEG
	{
	public:
		::OLMLKNCEDKN* CPPIBGEOGNI; // 0x28
		::RPG::GameCore::TransformComponent* GGLEFOFHHCN; // 0x30
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x38
		::FOOIINCDBFA* CNPNMBNLKFJ; // 0x40
		::System::Single COALOIELFND; // 0x48
		::System::Single IFPNFAEJNBI; // 0x4C
		::System::Single NGAEMPHCOAI; // 0x50
		::System::Boolean PLOJEHCOJPD; // 0x54
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AILeadWayState JKGJBAPLKAF; // 0x58
		static ::System::Single* StaticGet_LAJAKIACCLH()
		{
			return (::System::Single*)UnitySDK::FromName("", "GMJOPHFLIEG")->GetStaticField(0x151E0);
		}

		static ::System::Single* StaticGet_JFAIPJJIBKF()
		{
			return (::System::Single*)UnitySDK::FromName("", "GMJOPHFLIEG")->GetStaticField(0x151E4);
		}

		static ::System::Single* StaticGet_MEMKAJABEON()
		{
			return (::System::Single*)UnitySDK::FromName("", "GMJOPHFLIEG")->GetStaticField(0x151E8);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AMOPLAGOOLP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AMOPLAGOOLP*))((::PBYTE)hIl2Cpp + GMJOPHFLIEG_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMJOPHFLIEG_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJOPHFLIEG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJOPHFLIEG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GMJOPHFLIEG_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJOPHFLIEG_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean JGCMKLBDHEL(::RPG::Client::Map* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Map*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GMJOPHFLIEG_JGCMKLBDHEL_OFFSET))(this, a1, a2, a3);
		}

		::System::Single AAOCAOJDBOG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GMJOPHFLIEG_AAOCAOJDBOG_OFFSET))(this, a1);
		}

		::System::Boolean CGJDDLLDLMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJOPHFLIEG_CGJDDLLDLMO_OFFSET))(this);
		}

		::System::Void LLCDDOBNLBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJOPHFLIEG_LLCDDOBNLBJ_OFFSET))(this);
		}

		::System::Void IIECMNAACJI(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + GMJOPHFLIEG_IIECMNAACJI_OFFSET))(this, a1);
		}

		::System::Void EJPGEFGACBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJOPHFLIEG_EJPGEFGACBA_OFFSET))(this);
		}

		::System::Void HNALGDBPDMB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GMJOPHFLIEG_HNALGDBPDMB_OFFSET))(this, a1);
		}

		::System::Void NCDLAIAFBGP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GMJOPHFLIEG_NCDLAIAFBGP_OFFSET))(this, a1);
		}

		::System::Void IIOBOBCMFFI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GMJOPHFLIEG_IIOBOBCMFFI_OFFSET))(this, a1);
		}

		::System::Void EAMEMNIFPOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJOPHFLIEG_EAMEMNIFPOO_OFFSET))(this);
		}

		::System::Void KKEDFCNJHKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJOPHFLIEG_KKEDFCNJHKB_OFFSET))(this);
		}

	};
