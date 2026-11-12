#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMDNFIKKJHK;
namespace System { class Object; }

#define IMDNFIKKJHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9BD690)
#define IMDNFIKKJHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9BD6D0)
#define IMDNFIKKJHK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F9BD6E0)

inline static constexpr unsigned int IMDNFIKKJHK___c_TypeDefinitionIndex = 25617;

	class IMDNFIKKJHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x545A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMDNFIKKJHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDNFIKKJHK___C_CTOR_OFFSET))(this);
		}

		::IMDNFIKKJHK* __cctor_b__33_0()
		{
			return ((::IMDNFIKKJHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDNFIKKJHK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
