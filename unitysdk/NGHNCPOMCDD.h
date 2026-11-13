#pragma once
#include "unitysdk/unitysdk.h"
class LNLOANLHMAA;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define NGHNCPOMCDD_CCTOR_OFFSET UNITYSDK_OFFSET(0x18E8BA20)
#define NGHNCPOMCDD_CTOR_OFFSET UNITYSDK_OFFSET(0x18E8B770)
#define NGHNCPOMCDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E8B7A0)
#define NGHNCPOMCDD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18E8B970)
#define NGHNCPOMCDD_TICK_OFFSET UNITYSDK_OFFSET(0x18E8B9C0)

inline static constexpr unsigned int NGHNCPOMCDD_TypeDefinitionIndex = 53248;

	class NGHNCPOMCDD
	{
	public:
		::NGFHCJIAOLH* DPOJGPNDPMD; // 0x28
		static ::System::Int32* StaticGet_DJFABCJPEHG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NGHNCPOMCDD")->GetStaticField(0xAEF0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LNLOANLHMAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LNLOANLHMAA*))((::PBYTE)hIl2Cpp + NGHNCPOMCDD_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGHNCPOMCDD_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHNCPOMCDD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHNCPOMCDD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NGHNCPOMCDD_TICK_OFFSET))(this, a1);
		}

	};
