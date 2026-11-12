#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGHLOHPCFKP;
namespace System { class Object; }

#define DGHLOHPCFKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F488B10)
#define DGHLOHPCFKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F488B40)
#define DGHLOHPCFKP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F488B50)

inline static constexpr unsigned int DGHLOHPCFKP___c_TypeDefinitionIndex = 28779;

	class DGHLOHPCFKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGHLOHPCFKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHLOHPCFKP___C_CTOR_OFFSET))(this);
		}

		::DGHLOHPCFKP* __cctor_b__18_0()
		{
			return ((::DGHLOHPCFKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHLOHPCFKP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
