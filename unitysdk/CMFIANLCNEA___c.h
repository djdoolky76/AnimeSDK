#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMFIANLCNEA;
namespace System { class Object; }

#define CMFIANLCNEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E101480)
#define CMFIANLCNEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1014C0)
#define CMFIANLCNEA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E1014D0)

inline static constexpr unsigned int CMFIANLCNEA___c_TypeDefinitionIndex = 31951;

	class CMFIANLCNEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DFC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMFIANLCNEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFIANLCNEA___C_CTOR_OFFSET))(this);
		}

		::CMFIANLCNEA* __cctor_b__33_0()
		{
			return ((::CMFIANLCNEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFIANLCNEA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
