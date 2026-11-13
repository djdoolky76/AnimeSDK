#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMICEOCOGAD;
namespace System { class Object; }

#define DMICEOCOGAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201DF8D0)
#define DMICEOCOGAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201DF910)
#define DMICEOCOGAD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x201DF920)

inline static constexpr unsigned int DMICEOCOGAD___c_TypeDefinitionIndex = 28716;

	class DMICEOCOGAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMICEOCOGAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMICEOCOGAD___C_CTOR_OFFSET))(this);
		}

		::DMICEOCOGAD* __cctor_b__28_0()
		{
			return ((::DMICEOCOGAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMICEOCOGAD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
