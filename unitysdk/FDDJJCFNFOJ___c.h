#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDDJJCFNFOJ;
namespace System { class Object; }

#define FDDJJCFNFOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E325D00)
#define FDDJJCFNFOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E325D40)
#define FDDJJCFNFOJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E325D50)

inline static constexpr unsigned int FDDJJCFNFOJ___c_TypeDefinitionIndex = 34868;

	class FDDJJCFNFOJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDDJJCFNFOJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ___C_CTOR_OFFSET))(this);
		}

		::FDDJJCFNFOJ* __cctor_b__23_0()
		{
			return ((::FDDJJCFNFOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
