#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPJOINCGBBP;
namespace System { class Object; }

#define LPJOINCGBBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A3910)
#define LPJOINCGBBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A3940)
#define LPJOINCGBBP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9A3950)

inline static constexpr unsigned int LPJOINCGBBP___c_TypeDefinitionIndex = 28649;

	class LPJOINCGBBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPJOINCGBBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJOINCGBBP___C_CTOR_OFFSET))(this);
		}

		::LPJOINCGBBP* __cctor_b__33_0()
		{
			return ((::LPJOINCGBBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJOINCGBBP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
