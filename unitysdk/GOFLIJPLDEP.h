#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GOFLIJPLDEP_CTOR_OFFSET UNITYSDK_OFFSET(0x187B37D0)
#define GOFLIJPLDEP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x187B3730)
#define GOFLIJPLDEP_LOHADNFAFOJ_OFFSET UNITYSDK_OFFSET(0x187B37B0)
#define GOFLIJPLDEP_OEDLCCKBABE_OFFSET UNITYSDK_OFFSET(0x187B37C0)

inline static constexpr unsigned int GOFLIJPLDEP_TypeDefinitionIndex = 58798;

	class GOFLIJPLDEP : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_LGECFPPLDMH()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GOFLIJPLDEP")->GetStaticField(0x15E60);
		}

		static ::System::Boolean* StaticGet_JHNDMPFIKCE()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GOFLIJPLDEP")->GetStaticField(0x15E61);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFLIJPLDEP_CTOR_OFFSET))(this);
		}

		static ::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOFLIJPLDEP_KPJGDHLENIP_OFFSET))();
		}

		static ::System::Boolean LOHADNFAFOJ()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GOFLIJPLDEP_LOHADNFAFOJ_OFFSET))();
		}

		static ::System::Boolean OEDLCCKBABE()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GOFLIJPLDEP_OEDLCCKBABE_OFFSET))();
		}

	};
