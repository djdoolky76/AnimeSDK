#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNLLJNFBGNF;
namespace System { class Object; }

#define MNLLJNFBGNF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDDA1E0)
#define MNLLJNFBGNF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDDA220)
#define MNLLJNFBGNF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FDDA230)

inline static constexpr unsigned int MNLLJNFBGNF___c_TypeDefinitionIndex = 34766;

	class MNLLJNFBGNF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNLLJNFBGNF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLLJNFBGNF___C_CTOR_OFFSET))(this);
		}

		::MNLLJNFBGNF* __cctor_b__28_0()
		{
			return ((::MNLLJNFBGNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLLJNFBGNF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
