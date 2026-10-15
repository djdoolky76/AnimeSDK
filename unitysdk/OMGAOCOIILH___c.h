#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMGAOCOIILH;
namespace System { class Object; }

#define OMGAOCOIILH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE87790)
#define OMGAOCOIILH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE877D0)
#define OMGAOCOIILH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DE877E0)

inline static constexpr unsigned int OMGAOCOIILH___c_TypeDefinitionIndex = 28966;

	class OMGAOCOIILH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x225D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMGAOCOIILH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGAOCOIILH___C_CTOR_OFFSET))(this);
		}

		::OMGAOCOIILH* __cctor_b__33_0()
		{
			return ((::OMGAOCOIILH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGAOCOIILH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
