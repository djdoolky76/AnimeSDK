#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;

#define MOLEMOLE_SURFLOGSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AD7440)
#define MOLEMOLE_SURFLOGSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD7480)
#define MOLEMOLE_SURFLOGSUBSYSTEM___C__FINISHANDSENDREQUEST_B__8_0_OFFSET UNITYSDK_OFFSET(0x15AD74B0)
#define MOLEMOLE_SURFLOGSUBSYSTEM___C__FINISHANDSENDREQUEST_B__8_1_OFFSET UNITYSDK_OFFSET(0x15AD74C0)
#define MOLEMOLE_SURFLOGSUBSYSTEM___C__STARTSURF_B__2_0_OFFSET UNITYSDK_OFFSET(0x15AD7490)
#define MOLEMOLE_SURFLOGSUBSYSTEM___C__STARTSURF_B__2_1_OFFSET UNITYSDK_OFFSET(0x15AD74A0)

namespace MoleMole
{
	inline static constexpr unsigned int SurfLogSubsystem___c_TypeDefinitionIndex = 91233;

	class SurfLogSubsystem___c : public ::System::Object
	{
	public:
		static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__8_0()
		{
			return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(SurfLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4F8F0);
		}
		static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__2_0()
		{
			return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(SurfLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4F8F8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(SurfLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4F900);
		}
		static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__2_1()
		{
			return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(SurfLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4F908);
		}
		static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__8_1()
		{
			return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(SurfLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4F910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _StartSurf_b__2_0(::OAEFGCLEHHO* msg)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM___C__STARTSURF_B__2_0_OFFSET))(this, msg);
		}

		::System::Void _StartSurf_b__2_1(::OAEFGCLEHHO* error)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM___C__STARTSURF_B__2_1_OFFSET))(this, error);
		}

		::System::Void _FinishAndSendRequest_b__8_0(::OAEFGCLEHHO* msg)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM___C__FINISHANDSENDREQUEST_B__8_0_OFFSET))(this, msg);
		}

		::System::Void _FinishAndSendRequest_b__8_1(::OAEFGCLEHHO* error)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM___C__FINISHANDSENDREQUEST_B__8_1_OFFSET))(this, error);
		}
	};
}
