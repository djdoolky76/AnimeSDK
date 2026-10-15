#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEGKCMBHHJP;
namespace System { class Object; }

#define FEGKCMBHHJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E338A40)
#define FEGKCMBHHJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E338A80)
#define FEGKCMBHHJP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E338A90)

inline static constexpr unsigned int FEGKCMBHHJP___c_TypeDefinitionIndex = 33439;

	class FEGKCMBHHJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEGKCMBHHJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGKCMBHHJP___C_CTOR_OFFSET))(this);
		}

		::FEGKCMBHHJP* __cctor_b__28_0()
		{
			return ((::FEGKCMBHHJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGKCMBHHJP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
