#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;

#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B2D3A0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14B2D3E0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__FINISHANDSENDREQUEST_B__16_0_OFFSET UNITYSDK_OFFSET(0x14B2D410)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__FINISHANDSENDREQUEST_B__16_1_OFFSET UNITYSDK_OFFSET(0x14B2D420)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__STARTBEATMAP_B__8_0_OFFSET UNITYSDK_OFFSET(0x14B2D3F0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__STARTBEATMAP_B__8_1_OFFSET UNITYSDK_OFFSET(0x14B2D400)

namespace MoleMole
{
	inline static constexpr unsigned int SummerShootingLogSubsystem___c_TypeDefinitionIndex = 73150;

	class SummerShootingLogSubsystem___c : public ::System::Object
	{
	public:
		static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__8_0()
		{
			return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(SummerShootingLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x48800);
		}
		static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__16_0()
		{
			return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(SummerShootingLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x48808);
		}
		static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__8_1()
		{
			return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(SummerShootingLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x48810);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(SummerShootingLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x48818);
		}
		static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__16_1()
		{
			return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(SummerShootingLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x48820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _StartBeatmap_b__8_0(::OAEFGCLEHHO* msg)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__STARTBEATMAP_B__8_0_OFFSET))(this, msg);
		}

		::System::Void _StartBeatmap_b__8_1(::OAEFGCLEHHO* error)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__STARTBEATMAP_B__8_1_OFFSET))(this, error);
		}

		::System::Void _FinishAndSendRequest_b__16_0(::OAEFGCLEHHO* msg)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__FINISHANDSENDREQUEST_B__16_0_OFFSET))(this, msg);
		}

		::System::Void _FinishAndSendRequest_b__16_1(::OAEFGCLEHHO* error)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__FINISHANDSENDREQUEST_B__16_1_OFFSET))(this, error);
		}
	};
}
