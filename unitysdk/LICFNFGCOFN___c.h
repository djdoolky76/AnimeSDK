#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LICFNFGCOFN;
namespace System { class Object; }

#define LICFNFGCOFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93D9D0)
#define LICFNFGCOFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93DA10)
#define LICFNFGCOFN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E93DA20)

inline static constexpr unsigned int LICFNFGCOFN___c_TypeDefinitionIndex = 32065;

	class LICFNFGCOFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LICFNFGCOFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICFNFGCOFN___C_CTOR_OFFSET))(this);
		}

		::LICFNFGCOFN* __cctor_b__23_0()
		{
			return ((::LICFNFGCOFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LICFNFGCOFN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
