#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKELMFPNKJC;
namespace System { class Object; }

#define LKELMFPNKJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F990720)
#define LKELMFPNKJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F990760)
#define LKELMFPNKJC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F990770)

inline static constexpr unsigned int LKELMFPNKJC___c_TypeDefinitionIndex = 26434;

	class LKELMFPNKJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DE10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKELMFPNKJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKELMFPNKJC___C_CTOR_OFFSET))(this);
		}

		::LKELMFPNKJC* __cctor_b__33_0()
		{
			return ((::LKELMFPNKJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKELMFPNKJC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
