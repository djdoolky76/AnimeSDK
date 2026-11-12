#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMOPGLBEHPA;
namespace System { class Object; }

#define EMOPGLBEHPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5CC960)
#define EMOPGLBEHPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5CC9A0)
#define EMOPGLBEHPA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F5CC9B0)

inline static constexpr unsigned int EMOPGLBEHPA___c_TypeDefinitionIndex = 31253;

	class EMOPGLBEHPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E330);
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
