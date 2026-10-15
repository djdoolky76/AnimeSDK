#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class HIOEAKHGILF;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class Action; }

#define MHINANAPELB_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C92AD40)
#define MHINANAPELB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92AE10)

	class MHINANAPELB : public ::System::Object
	{
	public:
		::HIOEAKHGILF* OANLEPICPEA; // 0x10
		::HIOEAKHGILF* BHKEFIKOHFK; // 0x18
		::System::Action* KLDCLEOAJFD; // 0x20
		::RPG::PoolList_1<::HIOEAKHGILF*>* JJJNPLOLJGE; // 0x28
		::System::Action* MMKJLGLBDMI; // 0x30
		::RPG::PoolList_1<::HIOEAKHGILF*>* MNFCJNLHEJN; // 0x38
		::System::Action* BFDFDGGJCHJ; // 0x40
		::HIOEAKHGILF* OKPKEHBENDC; // 0x48
		::System::Boolean FONIBCIGOLE; // 0x50
		::System::Byte _padding0[0x1];
		::System::UInt16 AHDAKOBKAIK; // 0x52
		::System::Single LONFDBHBLHG; // 0x54
		::System::Single ADHEDCEKLDD; // 0x58
		::UnityEngine::Vector2 MLLHDIABIDD; // 0x5C
		::System::Int32 OCMBIIIDMLL; // 0x64
		::System::Single DHBFEJHFGAJ; // 0x68
		::System::Int32 HFDEKKAIDBO; // 0x6C
		::System::Int32 DKKNALIFGPM; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHINANAPELB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHINANAPELB_CLEAR_OFFSET))(this);
		}

	};
