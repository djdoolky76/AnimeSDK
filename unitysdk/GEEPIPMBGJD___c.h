#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEEPIPMBGJD;
namespace System { class Object; }

#define GEEPIPMBGJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E456500)
#define GEEPIPMBGJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E456540)
#define GEEPIPMBGJD___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E456550)

inline static constexpr unsigned int GEEPIPMBGJD___c_TypeDefinitionIndex = 27068;

	class GEEPIPMBGJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x123B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEEPIPMBGJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEPIPMBGJD___C_CTOR_OFFSET))(this);
		}

		::GEEPIPMBGJD* __cctor_b__43_0()
		{
			return ((::GEEPIPMBGJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEPIPMBGJD___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
