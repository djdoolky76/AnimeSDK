#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KELNHIOMCNF;
namespace System { class Object; }

#define KELNHIOMCNF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E2760)
#define KELNHIOMCNF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E27A0)
#define KELNHIOMCNF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E7E27B0)

inline static constexpr unsigned int KELNHIOMCNF___c_TypeDefinitionIndex = 30313;

	class KELNHIOMCNF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KELNHIOMCNF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELNHIOMCNF___C_CTOR_OFFSET))(this);
		}

		::KELNHIOMCNF* __cctor_b__18_0()
		{
			return ((::KELNHIOMCNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELNHIOMCNF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
