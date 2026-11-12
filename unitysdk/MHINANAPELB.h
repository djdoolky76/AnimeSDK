#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class HIOEAKHGILF;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { template <typename T> class Action_1; }

#define MHINANAPELB_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DAEC270)
#define MHINANAPELB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEC340)

inline static constexpr unsigned int MHINANAPELB_TypeDefinitionIndex = 44552;

	class MHINANAPELB : public ::System::Object
	{
	public:
		::System::Action_1<::HIOEAKHGILF*>* MMKJLGLBDMI; // 0x10
		::RPG::PoolList_1<::HIOEAKHGILF*>* JJJNPLOLJGE; // 0x18
		::HIOEAKHGILF* OANLEPICPEA; // 0x20
		::System::Action_1<::HIOEAKHGILF*>* BFDFDGGJCHJ; // 0x28
		::RPG::PoolList_1<::HIOEAKHGILF*>* MNFCJNLHEJN; // 0x30
		::HIOEAKHGILF* BHKEFIKOHFK; // 0x38
		::System::Action_1<::HIOEAKHGILF*>* KLDCLEOAJFD; // 0x40
		::HIOEAKHGILF* OKPKEHBENDC; // 0x48
		::System::Int32 HFDEKKAIDBO; // 0x50
		::System::Single DHBFEJHFGAJ; // 0x54
		::System::Boolean FONIBCIGOLE; // 0x58
		::System::Byte _padding0[0x1];
		::System::UInt16 AHDAKOBKAIK; // 0x5A
		::System::Single ADHEDCEKLDD; // 0x5C
		::System::Int32 OCMBIIIDMLL; // 0x60
		::System::Int32 DKKNALIFGPM; // 0x64
		::System::Single LONFDBHBLHG; // 0x68
		::UnityEngine::Vector2 MLLHDIABIDD; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHINANAPELB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHINANAPELB_CLEAR_OFFSET))(this);
		}

	};
