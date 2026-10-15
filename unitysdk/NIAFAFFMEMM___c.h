#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIAFAFFMEMM;
namespace System { class Object; }

#define NIAFAFFMEMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB24B40)
#define NIAFAFFMEMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB24B80)
#define NIAFAFFMEMM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB24B90)

inline static constexpr unsigned int NIAFAFFMEMM___c_TypeDefinitionIndex = 31722;

	class NIAFAFFMEMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x609A0);
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
