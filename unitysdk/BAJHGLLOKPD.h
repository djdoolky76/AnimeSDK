#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemFilterType.h"
class FMACLPPJNMB;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define BAJHGLLOKPD_CTOR_OFFSET UNITYSDK_OFFSET(0x15E638C0)
#define BAJHGLLOKPD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E63F10)
#define BAJHGLLOKPD_LBNAMFKJBHP_OFFSET UNITYSDK_OFFSET(0x15E63C30)
#define BAJHGLLOKPD_NJPCLELIKCN_OFFSET UNITYSDK_OFFSET(0x15E63F50)
#define BAJHGLLOKPD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E63940)
#define BAJHGLLOKPD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E63EC0)

inline static constexpr unsigned int BAJHGLLOKPD_TypeDefinitionIndex = 52672;

	class BAJHGLLOKPD
	{
	public:
		::NGFHCJIAOLH* CKCHKBCBNIJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FMACLPPJNMB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FMACLPPJNMB*))((::PBYTE)hIl2Cpp + BAJHGLLOKPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJHGLLOKPD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJHGLLOKPD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJHGLLOKPD_DISPOSE_OFFSET))(this);
		}

		::System::Int32 LBNAMFKJBHP(::RPG::GameCore::ChenLingFesItemFilterType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ChenLingFesItemFilterType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BAJHGLLOKPD_LBNAMFKJBHP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NJPCLELIKCN(::NGFHCJIAOLH* a1, ::RPG::GameCore::ChenLingFesItemFilterType a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*, ::RPG::GameCore::ChenLingFesItemFilterType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BAJHGLLOKPD_NJPCLELIKCN_OFFSET))(this, a1, a2, a3, a4);
		}

	};
