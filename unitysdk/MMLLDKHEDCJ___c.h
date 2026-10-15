#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMLLDKHEDCJ;
namespace System { class Object; }

#define MMLLDKHEDCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8EC30)
#define MMLLDKHEDCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8EC70)
#define MMLLDKHEDCJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA8EC80)

	class MMLLDKHEDCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMLLDKHEDCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLLDKHEDCJ___C_CTOR_OFFSET))(this);
		}

		::MMLLDKHEDCJ* __cctor_b__18_0()
		{
			return ((::MMLLDKHEDCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLLDKHEDCJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
