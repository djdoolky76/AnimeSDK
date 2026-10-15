#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define EPBKPIMAANC_CTOR_OFFSET UNITYSDK_OFFSET(0x155CECB0)
#define EPBKPIMAANC_LHFCIHCENCO_OFFSET UNITYSDK_OFFSET(0x155CEE90)
#define EPBKPIMAANC_PBAEKCNJOJF_OFFSET UNITYSDK_OFFSET(0x155CECF0)

	class EPBKPIMAANC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::System::UInt32>* FEICCPBBIHG; // 0x10
		::Il2CppArray<::System::UInt32>* BPKKKMOCFIP; // 0x18
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + EPBKPIMAANC_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 PBAEKCNJOJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBKPIMAANC_PBAEKCNJOJF_OFFSET))(this);
		}

		::System::Void LHFCIHCENCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBKPIMAANC_LHFCIHCENCO_OFFSET))(this);
		}

	};
