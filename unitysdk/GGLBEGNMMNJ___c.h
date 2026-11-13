#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGLBEGNMMNJ;
namespace System { class Object; }

#define GGLBEGNMMNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2026D000)
#define GGLBEGNMMNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2026D030)
#define GGLBEGNMMNJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2026D040)

inline static constexpr unsigned int GGLBEGNMMNJ___c_TypeDefinitionIndex = 35154;

	class GGLBEGNMMNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGLBEGNMMNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ___C_CTOR_OFFSET))(this);
		}

		::GGLBEGNMMNJ* __cctor_b__33_0()
		{
			return ((::GGLBEGNMMNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
