#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHLBIPIKFEJ.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
class BBOFEHOPCEC;
class FHLBIPIKFEJ;
namespace RPG::GameCore { class StateTreeSubTreeConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define PAMIGLDMHFH_BLNCFDKFHCO_OFFSET UNITYSDK_OFFSET(0xBFD09E0)
#define PAMIGLDMHFH_CTOR_OFFSET UNITYSDK_OFFSET(0xBFD0290)
#define PAMIGLDMHFH_ECIJJGIHGNJ_OFFSET UNITYSDK_OFFSET(0xBFD0980)
#define PAMIGLDMHFH_EONPIKKPLLA_OFFSET UNITYSDK_OFFSET(0xBFD0930)
#define PAMIGLDMHFH_GAHIJOOEMFF_OFFSET UNITYSDK_OFFSET(0xBFD0680)
#define PAMIGLDMHFH_JAENAEMJIOC_OFFSET UNITYSDK_OFFSET(0xBFD07C0)
#define PAMIGLDMHFH_KIGCIICCFBB_OFFSET UNITYSDK_OFFSET(0xBFD0700)
#define PAMIGLDMHFH_LDFEEJOHIDL_OFFSET UNITYSDK_OFFSET(0xBFD0A40)
#define PAMIGLDMHFH_NFANNGGMHAI_OFFSET UNITYSDK_OFFSET(0xBFD0620)
#define PAMIGLDMHFH_OBAOGFHPPFC_OFFSET UNITYSDK_OFFSET(0xBFD08B0)
#define PAMIGLDMHFH_PFNDPAILDJP_OFFSET UNITYSDK_OFFSET(0xBFD0A50)
#define PAMIGLDMHFH_PHLHELLLGNN_OFFSET UNITYSDK_OFFSET(0xBFD0840)

inline static constexpr unsigned int PAMIGLDMHFH_TypeDefinitionIndex = 53639;

	class PAMIGLDMHFH : public ::FHLBIPIKFEJ
	{
	public:
		::BBOFEHOPCEC* BOABKEFHFAA; // 0x58
		::RPG::GameCore::StateTreeSubTreeConfig* OFKGLJOAMLD; // 0x60
		::System::Boolean PMECLILMEDH; // 0x68
		::System::Void _ctor(::RPG::GameCore::StateTreeSubTreeConfig* a1, ::RPG::GameCore::TaskContext* a2, ::FHLBIPIKFEJ* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StateTreeSubTreeConfig*, ::RPG::GameCore::TaskContext*, ::FHLBIPIKFEJ*, ::System::Int32))((::PBYTE)hIl2Cpp + PAMIGLDMHFH_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NFANNGGMHAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMIGLDMHFH_NFANNGGMHAI_OFFSET))(this);
		}

		::System::Void GAHIJOOEMFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMIGLDMHFH_GAHIJOOEMFF_OFFSET))(this);
		}

		::RPG::GameCore::TaskState JAENAEMJIOC(::System::Single a1)
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PAMIGLDMHFH_JAENAEMJIOC_OFFSET))(this, a1);
		}

		::System::Void PHLHELLLGNN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PAMIGLDMHFH_PHLHELLLGNN_OFFSET))(this, a1);
		}

		::System::Void OBAOGFHPPFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMIGLDMHFH_OBAOGFHPPFC_OFFSET))(this);
		}

		::System::Int32 EONPIKKPLLA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMIGLDMHFH_EONPIKKPLLA_OFFSET))(this);
		}

		::System::String* ECIJJGIHGNJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMIGLDMHFH_ECIJJGIHGNJ_OFFSET))(this);
		}

		::System::String* BLNCFDKFHCO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMIGLDMHFH_BLNCFDKFHCO_OFFSET))(this);
		}

		::System::Void KIGCIICCFBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMIGLDMHFH_KIGCIICCFBB_OFFSET))(this);
		}

		::BBOFEHOPCEC* LDFEEJOHIDL()
		{
			return ((::BBOFEHOPCEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMIGLDMHFH_LDFEEJOHIDL_OFFSET))(this);
		}

		::System::String* PFNDPAILDJP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMIGLDMHFH_PFNDPAILDJP_OFFSET))(this);
		}

	};
