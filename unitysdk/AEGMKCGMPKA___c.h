#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAKFAEEILGA;
namespace System { class Action; }
namespace System { class Object; }

#define AEGMKCGMPKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB150C70)
#define AEGMKCGMPKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB150CB0)
#define AEGMKCGMPKA___C__SENDSETLINEUPCSREQ_B__8_1_OFFSET UNITYSDK_OFFSET(0xB150CC0)
#define AEGMKCGMPKA___C__SENDSTARTCSREQ_B__9_0_OFFSET UNITYSDK_OFFSET(0xB150CD0)

inline static constexpr unsigned int AEGMKCGMPKA___c_TypeDefinitionIndex = 63938;

	class AEGMKCGMPKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C4C0);
		}

		static ::System::Action** StaticGet___9__8_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C4C8);
		}

		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C4D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEGMKCGMPKA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGMKCGMPKA___C_CTOR_OFFSET))(this);
		}

		::System::Void _SendSetLineupCsReq_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGMKCGMPKA___C__SENDSETLINEUPCSREQ_B__8_1_OFFSET))(this);
		}

		::System::Void _SendStartCsReq_b__9_0(::AAKFAEEILGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAKFAEEILGA*))((::PBYTE)hIl2Cpp + AEGMKCGMPKA___C__SENDSTARTCSREQ_B__9_0_OFFSET))(this, a1);
		}

	};
