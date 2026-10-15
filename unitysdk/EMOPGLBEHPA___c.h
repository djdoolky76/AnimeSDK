#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMOPGLBEHPA;
namespace System { class Object; }

#define EMOPGLBEHPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2BA690)
#define EMOPGLBEHPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2BA6D0)
#define EMOPGLBEHPA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2BA6E0)

inline static constexpr unsigned int EMOPGLBEHPA___c_TypeDefinitionIndex = 30347;

	class EMOPGLBEHPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMOPGLBEHPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPGLBEHPA___C_CTOR_OFFSET))(this);
		}

		::EMOPGLBEHPA* __cctor_b__23_0()
		{
			return ((::EMOPGLBEHPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPGLBEHPA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
