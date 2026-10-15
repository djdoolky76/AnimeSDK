#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDNPBALACDB;
namespace System { class Object; }

#define LDNPBALACDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E900C40)
#define LDNPBALACDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E900C80)
#define LDNPBALACDB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E900C90)

inline static constexpr unsigned int LDNPBALACDB___c_TypeDefinitionIndex = 29687;

	class LDNPBALACDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDNPBALACDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNPBALACDB___C_CTOR_OFFSET))(this);
		}

		::LDNPBALACDB* __cctor_b__23_0()
		{
			return ((::LDNPBALACDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNPBALACDB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
