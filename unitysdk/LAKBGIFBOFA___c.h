#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAKBGIFBOFA;
namespace System { class Object; }

#define LAKBGIFBOFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC0CD10)
#define LAKBGIFBOFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC0CD50)
#define LAKBGIFBOFA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FC0CD60)

inline static constexpr unsigned int LAKBGIFBOFA___c_TypeDefinitionIndex = 35352;

	class LAKBGIFBOFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26130);
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
