#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMAGFGIHLJC;
namespace System { class Object; }

#define IMAGFGIHLJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206BA820)
#define IMAGFGIHLJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206BA860)
#define IMAGFGIHLJC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x206BA870)

inline static constexpr unsigned int IMAGFGIHLJC___c_TypeDefinitionIndex = 32550;

	class IMAGFGIHLJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DAF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMAGFGIHLJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAGFGIHLJC___C_CTOR_OFFSET))(this);
		}

		::IMAGFGIHLJC* __cctor_b__33_0()
		{
			return ((::IMAGFGIHLJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAGFGIHLJC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
