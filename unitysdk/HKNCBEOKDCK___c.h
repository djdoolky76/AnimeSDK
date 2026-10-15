#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKNCBEOKDCK;
namespace System { class Object; }

#define HKNCBEOKDCK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E589550)
#define HKNCBEOKDCK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E589590)
#define HKNCBEOKDCK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5895A0)

inline static constexpr unsigned int HKNCBEOKDCK___c_TypeDefinitionIndex = 30367;

	class HKNCBEOKDCK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKNCBEOKDCK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNCBEOKDCK___C_CTOR_OFFSET))(this);
		}

		::HKNCBEOKDCK* __cctor_b__23_0()
		{
			return ((::HKNCBEOKDCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNCBEOKDCK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
