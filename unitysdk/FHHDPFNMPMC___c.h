#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHHDPFNMPMC;
namespace System { class Object; }

#define FHHDPFNMPMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38C850)
#define FHHDPFNMPMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38C890)
#define FHHDPFNMPMC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E38C8A0)

inline static constexpr unsigned int FHHDPFNMPMC___c_TypeDefinitionIndex = 26803;

	class FHHDPFNMPMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHHDPFNMPMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHDPFNMPMC___C_CTOR_OFFSET))(this);
		}

		::FHHDPFNMPMC* __cctor_b__38_0()
		{
			return ((::FHHDPFNMPMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHDPFNMPMC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
