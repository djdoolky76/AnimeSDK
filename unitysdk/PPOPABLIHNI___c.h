#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPOPABLIHNI;
namespace System { class Object; }

#define PPOPABLIHNI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE4CD0)
#define PPOPABLIHNI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE4D10)
#define PPOPABLIHNI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFE4D20)

	class PPOPABLIHNI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x438F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPOPABLIHNI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOPABLIHNI___C_CTOR_OFFSET))(this);
		}

		::PPOPABLIHNI* __cctor_b__28_0()
		{
			return ((::PPOPABLIHNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOPABLIHNI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
