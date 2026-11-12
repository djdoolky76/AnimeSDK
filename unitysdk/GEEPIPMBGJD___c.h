#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEEPIPMBGJD;
namespace System { class Object; }

#define GEEPIPMBGJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F744340)
#define GEEPIPMBGJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F744380)
#define GEEPIPMBGJD___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F744390)

inline static constexpr unsigned int GEEPIPMBGJD___c_TypeDefinitionIndex = 27599;

	class GEEPIPMBGJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58640);
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
