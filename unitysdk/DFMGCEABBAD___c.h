#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFMGCEABBAD;
namespace System { class Object; }

#define DFMGCEABBAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A7310)
#define DFMGCEABBAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A7340)
#define DFMGCEABBAD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1A7350)

inline static constexpr unsigned int DFMGCEABBAD___c_TypeDefinitionIndex = 25418;

	class DFMGCEABBAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFMGCEABBAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGCEABBAD___C_CTOR_OFFSET))(this);
		}

		::DFMGCEABBAD* __cctor_b__23_0()
		{
			return ((::DFMGCEABBAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGCEABBAD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
