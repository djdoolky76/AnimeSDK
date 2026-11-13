#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPOHGNLDCMM;
namespace System { class Object; }

#define JPOHGNLDCMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8E6BB0)
#define JPOHGNLDCMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E6BF0)
#define JPOHGNLDCMM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F8E6C00)

inline static constexpr unsigned int JPOHGNLDCMM___c_TypeDefinitionIndex = 32330;

	class JPOHGNLDCMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x692D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPOHGNLDCMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPOHGNLDCMM___C_CTOR_OFFSET))(this);
		}

		::JPOHGNLDCMM* __cctor_b__33_0()
		{
			return ((::JPOHGNLDCMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPOHGNLDCMM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
