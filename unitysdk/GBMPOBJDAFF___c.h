#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBMPOBJDAFF;
namespace System { class Object; }

#define GBMPOBJDAFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC53550)
#define GBMPOBJDAFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC53590)
#define GBMPOBJDAFF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC535A0)

inline static constexpr unsigned int GBMPOBJDAFF___c_TypeDefinitionIndex = 29399;

	class GBMPOBJDAFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBMPOBJDAFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMPOBJDAFF___C_CTOR_OFFSET))(this);
		}

		::GBMPOBJDAFF* __cctor_b__28_0()
		{
			return ((::GBMPOBJDAFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMPOBJDAFF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
