#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPDCHJINMMK;
namespace System { class Object; }

#define OPDCHJINMMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB1310)
#define OPDCHJINMMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB1350)
#define OPDCHJINMMK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DEB1360)

inline static constexpr unsigned int OPDCHJINMMK___c_TypeDefinitionIndex = 29018;

	class OPDCHJINMMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ACE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPDCHJINMMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDCHJINMMK___C_CTOR_OFFSET))(this);
		}

		::OPDCHJINMMK* __cctor_b__18_0()
		{
			return ((::OPDCHJINMMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDCHJINMMK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
