#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOFCAOFIHCD;
namespace System { class Object; }

#define JOFCAOFIHCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E79F8A0)
#define JOFCAOFIHCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79F8E0)
#define JOFCAOFIHCD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E79F8F0)

inline static constexpr unsigned int JOFCAOFIHCD___c_TypeDefinitionIndex = 28688;

	class JOFCAOFIHCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CD90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOFCAOFIHCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFCAOFIHCD___C_CTOR_OFFSET))(this);
		}

		::JOFCAOFIHCD* __cctor_b__28_0()
		{
			return ((::JOFCAOFIHCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFCAOFIHCD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
