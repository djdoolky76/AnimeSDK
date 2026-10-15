#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCEDCPLAPJJ;
namespace System { class Object; }

#define LCEDCPLAPJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E95B0)
#define LCEDCPLAPJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E95F0)
#define LCEDCPLAPJJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8E9600)

	class LCEDCPLAPJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x324B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCEDCPLAPJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ___C_CTOR_OFFSET))(this);
		}

		::LCEDCPLAPJJ* __cctor_b__28_0()
		{
			return ((::LCEDCPLAPJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
