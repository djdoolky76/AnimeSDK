#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMBMNFLMKPI;
namespace System { class Object; }

#define GMBMNFLMKPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA48610)
#define GMBMNFLMKPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA48650)
#define GMBMNFLMKPI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA48660)

inline static constexpr unsigned int GMBMNFLMKPI___c_TypeDefinitionIndex = 29733;

	class GMBMNFLMKPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMBMNFLMKPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBMNFLMKPI___C_CTOR_OFFSET))(this);
		}

		::GMBMNFLMKPI* __cctor_b__28_0()
		{
			return ((::GMBMNFLMKPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBMNFLMKPI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
