#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OABAALAHIIA;
namespace System { class Object; }

#define OABAALAHIIA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB773E0)
#define OABAALAHIIA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB77420)
#define OABAALAHIIA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB77430)

inline static constexpr unsigned int OABAALAHIIA___c_TypeDefinitionIndex = 32240;

	class OABAALAHIIA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OABAALAHIIA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABAALAHIIA___C_CTOR_OFFSET))(this);
		}

		::OABAALAHIIA* __cctor_b__23_0()
		{
			return ((::OABAALAHIIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABAALAHIIA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
