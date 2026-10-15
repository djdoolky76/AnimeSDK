#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMLFDPFAPJP;
namespace System { class Object; }

#define EMLFDPFAPJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E6820)
#define EMLFDPFAPJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E6860)
#define EMLFDPFAPJP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2E6870)

inline static constexpr unsigned int EMLFDPFAPJP___c_TypeDefinitionIndex = 25556;

	class EMLFDPFAPJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMLFDPFAPJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLFDPFAPJP___C_CTOR_OFFSET))(this);
		}

		::EMLFDPFAPJP* __cctor_b__28_0()
		{
			return ((::EMLFDPFAPJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLFDPFAPJP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
