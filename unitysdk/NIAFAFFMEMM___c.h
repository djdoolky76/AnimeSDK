#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIAFAFFMEMM;
namespace System { class Object; }

#define NIAFAFFMEMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE66F10)
#define NIAFAFFMEMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE66F50)
#define NIAFAFFMEMM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FE66F60)

inline static constexpr unsigned int NIAFAFFMEMM___c_TypeDefinitionIndex = 32635;

	class NIAFAFFMEMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B2E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIAFAFFMEMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAFAFFMEMM___C_CTOR_OFFSET))(this);
		}

		::NIAFAFFMEMM* __cctor_b__23_0()
		{
			return ((::NIAFAFFMEMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAFAFFMEMM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
