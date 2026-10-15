#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFPHKOAFPCJ;
namespace System { class Object; }

#define PFPHKOAFPCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2AE00)
#define PFPHKOAFPCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2AE40)
#define PFPHKOAFPCJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF2AE50)

inline static constexpr unsigned int PFPHKOAFPCJ___c_TypeDefinitionIndex = 29949;

	class PFPHKOAFPCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFPHKOAFPCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHKOAFPCJ___C_CTOR_OFFSET))(this);
		}

		::PFPHKOAFPCJ* __cctor_b__23_0()
		{
			return ((::PFPHKOAFPCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHKOAFPCJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
