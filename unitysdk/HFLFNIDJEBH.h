#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOHPODHIAA.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }

#define HFLFNIDJEBH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DAA1070)
#define HFLFNIDJEBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA1160)
#define HFLFNIDJEBH_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1DAA0FD0)

inline static constexpr unsigned int HFLFNIDJEBH_TypeDefinitionIndex = 44514;

	class HFLFNIDJEBH : public ::NOOHPODHIAA
	{
	public:
		::RPG::PoolList_1<::UnityEngine::Collider*>* MMEILEPDKJB; // 0x338
		::System::Boolean BLFCFLEPLJC; // 0x340
		::System::Boolean BCJJEDCKHPN; // 0x341
		::System::Boolean AFLPGJFHKPO; // 0x342
		::System::Boolean FPJEKELOBCH; // 0x343
		::System::Boolean LLNCMNLNFKL; // 0x344
		::System::Boolean MGEOBDIMBPD; // 0x345
		::System::Byte _padding0[0x2];
		::System::Single MHJFFHDKOMP; // 0x348
		::UnityEngine::Vector3 EBJMNMCEGMA; // 0x34C
		::UnityEngine::Vector3 ACKDLFEPFMC; // 0x358
		::System::Single MFALMACPJPJ; // 0x364
		::System::Boolean DGIBAMJGDNE; // 0x368
		::System::Boolean AAKPHPEPKCB; // 0x369
		::System::Boolean IFHPLBMILIN; // 0x36A
		::System::Boolean DKIHCKOJMCH; // 0x36B
		::System::Int32 JPFABEJGBCB; // 0x36C
		::UnityEngine::Vector3 CALBFECHHOF; // 0x370
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLFNIDJEBH_CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLFNIDJEBH_ONALLOC_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLFNIDJEBH_CLEAR_OFFSET))(this);
		}

	};
