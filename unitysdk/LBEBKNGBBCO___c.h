#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBEBKNGBBCO;
namespace System { class Object; }

#define LBEBKNGBBCO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8DADD0)
#define LBEBKNGBBCO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DAE10)
#define LBEBKNGBBCO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8DAE20)

	class LBEBKNGBBCO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBEBKNGBBCO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEBKNGBBCO___C_CTOR_OFFSET))(this);
		}

		::LBEBKNGBBCO* __cctor_b__28_0()
		{
			return ((::LBEBKNGBBCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEBKNGBBCO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
