#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAKDIMFCIIL;
namespace System { class Object; }

#define GAKDIMFCIIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F2D70)
#define GAKDIMFCIIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F2DB0)
#define GAKDIMFCIIL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3F2DC0)

inline static constexpr unsigned int GAKDIMFCIIL___c_TypeDefinitionIndex = 35027;

	class GAKDIMFCIIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xAB10);
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
