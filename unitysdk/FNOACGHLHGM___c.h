#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNOACGHLHGM;
namespace System { class Object; }

#define FNOACGHLHGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C81A0)
#define FNOACGHLHGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C81D0)
#define FNOACGHLHGM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E3C81E0)

inline static constexpr unsigned int FNOACGHLHGM___c_TypeDefinitionIndex = 31318;

	class FNOACGHLHGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNOACGHLHGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOACGHLHGM___C_CTOR_OFFSET))(this);
		}

		::FNOACGHLHGM* __cctor_b__18_0()
		{
			return ((::FNOACGHLHGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOACGHLHGM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
