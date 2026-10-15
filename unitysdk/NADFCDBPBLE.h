#pragma once
#include "unitysdk/unitysdk.h"
class HCCMAJJLHNJ;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define NADFCDBPBLE_CTOR_OFFSET UNITYSDK_OFFSET(0xBA503C0)
#define NADFCDBPBLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA50BB0)
#define NADFCDBPBLE_FDFMNKJBADM_OFFSET UNITYSDK_OFFSET(0xBA506D0)
#define NADFCDBPBLE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA50440)
#define NADFCDBPBLE_PAHMFNJPGCD_OFFSET UNITYSDK_OFFSET(0xBA50940)

inline static constexpr unsigned int NADFCDBPBLE_TypeDefinitionIndex = 52674;

	class NADFCDBPBLE
	{
	public:
		::NGFHCJIAOLH* CKCHKBCBNIJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HCCMAJJLHNJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HCCMAJJLHNJ*))((::PBYTE)hIl2Cpp + NADFCDBPBLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADFCDBPBLE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean PAHMFNJPGCD(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + NADFCDBPBLE_PAHMFNJPGCD_OFFSET))(this, a1);
		}

		::System::Void FDFMNKJBADM(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + NADFCDBPBLE_FDFMNKJBADM_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADFCDBPBLE_DISPOSE_OFFSET))(this);
		}

	};
