#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMPCIBGILIE;
namespace System { class Object; }

#define PMPCIBGILIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB0870)
#define PMPCIBGILIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB08B0)
#define PMPCIBGILIE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DFB08C0)

inline static constexpr unsigned int PMPCIBGILIE___c_TypeDefinitionIndex = 25650;

	class PMPCIBGILIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E2E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMPCIBGILIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPCIBGILIE___C_CTOR_OFFSET))(this);
		}

		::PMPCIBGILIE* __cctor_b__33_0()
		{
			return ((::PMPCIBGILIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPCIBGILIE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
