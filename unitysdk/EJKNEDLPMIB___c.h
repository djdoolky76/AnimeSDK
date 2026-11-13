#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJKNEDLPMIB;
namespace System { class Object; }

#define EJKNEDLPMIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE52040)
#define EJKNEDLPMIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE52080)
#define EJKNEDLPMIB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FE52090)

inline static constexpr unsigned int EJKNEDLPMIB___c_TypeDefinitionIndex = 27718;

	class EJKNEDLPMIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x415E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJKNEDLPMIB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKNEDLPMIB___C_CTOR_OFFSET))(this);
		}

		::EJKNEDLPMIB* __cctor_b__28_0()
		{
			return ((::EJKNEDLPMIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKNEDLPMIB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
