#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAKDIMFCIIL;
namespace System { class Object; }

#define GAKDIMFCIIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F70E070)
#define GAKDIMFCIIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F70E0B0)
#define GAKDIMFCIIL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F70E0C0)

inline static constexpr unsigned int GAKDIMFCIIL___c_TypeDefinitionIndex = 35955;

	class GAKDIMFCIIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAKDIMFCIIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKDIMFCIIL___C_CTOR_OFFSET))(this);
		}

		::GAKDIMFCIIL* __cctor_b__28_0()
		{
			return ((::GAKDIMFCIIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKDIMFCIIL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
