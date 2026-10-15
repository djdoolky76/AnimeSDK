#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPDDKCNHJAB;
namespace System { class Object; }

#define KPDDKCNHJAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88D920)
#define KPDDKCNHJAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88D960)
#define KPDDKCNHJAB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E88D970)

inline static constexpr unsigned int KPDDKCNHJAB___c_TypeDefinitionIndex = 32755;

	class KPDDKCNHJAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPDDKCNHJAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDDKCNHJAB___C_CTOR_OFFSET))(this);
		}

		::KPDDKCNHJAB* __cctor_b__23_0()
		{
			return ((::KPDDKCNHJAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDDKCNHJAB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
