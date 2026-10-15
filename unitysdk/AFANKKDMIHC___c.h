#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFANKKDMIHC;
namespace System { class Object; }

#define AFANKKDMIHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E113020)
#define AFANKKDMIHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E113060)
#define AFANKKDMIHC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E113070)

inline static constexpr unsigned int AFANKKDMIHC___c_TypeDefinitionIndex = 28354;

	class AFANKKDMIHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DF10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFANKKDMIHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFANKKDMIHC___C_CTOR_OFFSET))(this);
		}

		::AFANKKDMIHC* __cctor_b__23_0()
		{
			return ((::AFANKKDMIHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFANKKDMIHC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
