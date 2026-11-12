#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAKFAEEILGA;
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define AEGMKCGMPKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD5AC460)
#define AEGMKCGMPKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD5AC4A0)
#define AEGMKCGMPKA___C__SENDSETLINEUPCSREQ_B__8_1_OFFSET UNITYSDK_OFFSET(0xD5AC4B0)
#define AEGMKCGMPKA___C__SENDSTARTCSREQ_B__9_0_OFFSET UNITYSDK_OFFSET(0xD5AC4C0)

inline static constexpr unsigned int AEGMKCGMPKA___c_TypeDefinitionIndex = 65380;

	class AEGMKCGMPKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42890);
		}

		static ::System::Action_1<::AAKFAEEILGA*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::AAKFAEEILGA*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42898);
		}

		static ::System::Action** StaticGet___9__8_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x428A0);
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
