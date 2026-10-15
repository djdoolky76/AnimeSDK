#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MarbleSealPlayAnim; }
namespace RPG::GameCore { class TaskContext; }

#define JFCKMILLNAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x166326C0)
#define JFCKMILLNAF_CTOR_OFFSET UNITYSDK_OFFSET(0x166323C0)
#define JFCKMILLNAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16632620)
#define JFCKMILLNAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x166323D0)
#define JFCKMILLNAF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x166325D0)
#define JFCKMILLNAF_TICK_OFFSET UNITYSDK_OFFSET(0x16632660)

inline static constexpr unsigned int JFCKMILLNAF_TypeDefinitionIndex = 53010;

	class JFCKMILLNAF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::MarbleSealPlayAnim* IGHAHBNLIJA; // 0x20
		static ::System::Int32* StaticGet_IILGJJADJCK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JFCKMILLNAF")->GetStaticField(0x2AD0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarbleSealPlayAnim* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarbleSealPlayAnim*))((::PBYTE)hIl2Cpp + JFCKMILLNAF_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFCKMILLNAF_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCKMILLNAF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCKMILLNAF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCKMILLNAF_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFCKMILLNAF_TICK_OFFSET))(this, a1);
		}

	};
