#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKJOIFBLLKO;
namespace System { class Object; }

#define NKJOIFBLLKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB2CA60)
#define NKJOIFBLLKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB2CAA0)
#define NKJOIFBLLKO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB2CAB0)

inline static constexpr unsigned int NKJOIFBLLKO___c_TypeDefinitionIndex = 31977;

	class NKJOIFBLLKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKJOIFBLLKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJOIFBLLKO___C_CTOR_OFFSET))(this);
		}

		::NKJOIFBLLKO* __cctor_b__28_0()
		{
			return ((::NKJOIFBLLKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJOIFBLLKO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
