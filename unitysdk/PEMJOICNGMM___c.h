#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEMJOICNGMM;
namespace System { class Object; }

#define PEMJOICNGMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20671940)
#define PEMJOICNGMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20671980)
#define PEMJOICNGMM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20671990)

inline static constexpr unsigned int PEMJOICNGMM___c_TypeDefinitionIndex = 32334;

	class PEMJOICNGMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEMJOICNGMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMJOICNGMM___C_CTOR_OFFSET))(this);
		}

		::PEMJOICNGMM* __cctor_b__23_0()
		{
			return ((::PEMJOICNGMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMJOICNGMM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
