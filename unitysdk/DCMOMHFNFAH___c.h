#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCMOMHFNFAH;
namespace System { class Object; }

#define DCMOMHFNFAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1766E0)
#define DCMOMHFNFAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E176720)
#define DCMOMHFNFAH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E176730)

inline static constexpr unsigned int DCMOMHFNFAH___c_TypeDefinitionIndex = 34618;

	class DCMOMHFNFAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CF60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCMOMHFNFAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMOMHFNFAH___C_CTOR_OFFSET))(this);
		}

		::DCMOMHFNFAH* __cctor_b__33_0()
		{
			return ((::DCMOMHFNFAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMOMHFNFAH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
