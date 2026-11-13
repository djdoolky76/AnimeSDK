#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CECPPJBHMMH;
namespace System { class Object; }

#define CECPPJBHMMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204C5D50)
#define CECPPJBHMMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204C5D90)
#define CECPPJBHMMH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x204C5DA0)

inline static constexpr unsigned int CECPPJBHMMH___c_TypeDefinitionIndex = 30517;

	class CECPPJBHMMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CECPPJBHMMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CECPPJBHMMH___C_CTOR_OFFSET))(this);
		}

		::CECPPJBHMMH* __cctor_b__33_0()
		{
			return ((::CECPPJBHMMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CECPPJBHMMH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
