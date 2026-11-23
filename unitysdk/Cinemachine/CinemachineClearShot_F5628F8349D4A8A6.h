#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cinemachine/CinemachineClearShot_E8043C1171CBD94E.h"

namespace System { template <typename T> class ADDF5F55A85EB950; }

#define CINEMACHINE_CINEMACHINECLEARSHOT_F5628F8349D4A8A6_B083AF8D9FDAE4F5_OFFSET UNITYSDK_OFFSET(0x2A43690)
#define CINEMACHINE_CINEMACHINECLEARSHOT_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2A437E0)
#define CINEMACHINE_CINEMACHINECLEARSHOT_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineClearShot_F5628F8349D4A8A6_TypeDefinitionIndex = 18317;

	class CinemachineClearShot_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::Cinemachine::CinemachineClearShot_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::Cinemachine::CinemachineClearShot_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(CinemachineClearShot_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::ADDF5F55A85EB950<::System::Object*>** StaticGet_BD37A0350DDD5BA2()
		{
			return (::System::ADDF5F55A85EB950<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineClearShot_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Int32 B083AF8D9FDAE4F5(::Cinemachine::CinemachineClearShot_E8043C1171CBD94E ED6BA5E2880F301C, ::Cinemachine::CinemachineClearShot_E8043C1171CBD94E AB470184008E3FF1)
		{
			return ((::System::Int32(*)(::PVOID, ::Cinemachine::CinemachineClearShot_E8043C1171CBD94E, ::Cinemachine::CinemachineClearShot_E8043C1171CBD94E))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT_F5628F8349D4A8A6_B083AF8D9FDAE4F5_OFFSET))(this, ED6BA5E2880F301C, AB470184008E3FF1);
		}
	};
}
