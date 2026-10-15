#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAKBGIFBOFA;
namespace System { class Object; }

#define LAKBGIFBOFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A2200)
#define LAKBGIFBOFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A2240)
#define LAKBGIFBOFA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8A2250)

inline static constexpr unsigned int LAKBGIFBOFA___c_TypeDefinitionIndex = 34424;

	class LAKBGIFBOFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24D90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAKBGIFBOFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKBGIFBOFA___C_CTOR_OFFSET))(this);
		}

		::LAKBGIFBOFA* __cctor_b__23_0()
		{
			return ((::LAKBGIFBOFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKBGIFBOFA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
