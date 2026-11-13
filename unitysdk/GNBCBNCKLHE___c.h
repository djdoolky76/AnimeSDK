#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNBCBNCKLHE;
namespace System { class Object; }

#define GNBCBNCKLHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDF84E0)
#define GNBCBNCKLHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDF8520)
#define GNBCBNCKLHE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FDF8530)

inline static constexpr unsigned int GNBCBNCKLHE___c_TypeDefinitionIndex = 26669;

	class GNBCBNCKLHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNBCBNCKLHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCBNCKLHE___C_CTOR_OFFSET))(this);
		}

		::GNBCBNCKLHE* __cctor_b__18_0()
		{
			return ((::GNBCBNCKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCBNCKLHE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
