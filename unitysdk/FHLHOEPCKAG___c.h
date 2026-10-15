#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHLHOEPCKAG;
namespace System { class Object; }

#define FHLHOEPCKAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E362D10)
#define FHLHOEPCKAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E362D50)
#define FHLHOEPCKAG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E362D60)

inline static constexpr unsigned int FHLHOEPCKAG___c_TypeDefinitionIndex = 34866;

	class FHLHOEPCKAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56EA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHLHOEPCKAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHOEPCKAG___C_CTOR_OFFSET))(this);
		}

		::FHLHOEPCKAG* __cctor_b__18_0()
		{
			return ((::FHLHOEPCKAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHOEPCKAG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
