#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBEHBNOCLMM;
namespace System { class Object; }

#define OBEHBNOCLMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBAE050)
#define OBEHBNOCLMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBAE090)
#define OBEHBNOCLMM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EBAE0A0)

inline static constexpr unsigned int OBEHBNOCLMM___c_TypeDefinitionIndex = 31782;

	class OBEHBNOCLMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBEHBNOCLMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEHBNOCLMM___C_CTOR_OFFSET))(this);
		}

		::OBEHBNOCLMM* __cctor_b__28_0()
		{
			return ((::OBEHBNOCLMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEHBNOCLMM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
