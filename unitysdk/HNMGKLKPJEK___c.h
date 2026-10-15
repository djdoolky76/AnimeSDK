#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNMGKLKPJEK;
namespace System { class Object; }

#define HNMGKLKPJEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E1910)
#define HNMGKLKPJEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E1950)
#define HNMGKLKPJEK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5E1960)

inline static constexpr unsigned int HNMGKLKPJEK___c_TypeDefinitionIndex = 25208;

	class HNMGKLKPJEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNMGKLKPJEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMGKLKPJEK___C_CTOR_OFFSET))(this);
		}

		::HNMGKLKPJEK* __cctor_b__28_0()
		{
			return ((::HNMGKLKPJEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMGKLKPJEK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
