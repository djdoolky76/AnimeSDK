#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBGHEJOMOAL;
namespace System { class Object; }

#define JBGHEJOMOAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA00AB0)
#define JBGHEJOMOAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA00AF0)
#define JBGHEJOMOAL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA00B00)

inline static constexpr unsigned int JBGHEJOMOAL___c_TypeDefinitionIndex = 28754;

	class JBGHEJOMOAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B7B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBGHEJOMOAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGHEJOMOAL___C_CTOR_OFFSET))(this);
		}

		::JBGHEJOMOAL* __cctor_b__23_0()
		{
			return ((::JBGHEJOMOAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGHEJOMOAL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
