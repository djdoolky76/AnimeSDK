#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDHIIJAJIOO;
namespace System { class Object; }

#define DDHIIJAJIOO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17DC60)
#define DDHIIJAJIOO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17DCA0)
#define DDHIIJAJIOO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E17DCB0)

	class DDHIIJAJIOO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DC00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDHIIJAJIOO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHIIJAJIOO___C_CTOR_OFFSET))(this);
		}

		::DDHIIJAJIOO* __cctor_b__23_0()
		{
			return ((::DDHIIJAJIOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHIIJAJIOO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
