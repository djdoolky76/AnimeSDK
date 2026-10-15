#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMGCEMNNPBM;
namespace System { class Object; }

#define GMGCEMNNPBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A5EE0)
#define GMGCEMNNPBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A5F20)
#define GMGCEMNNPBM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4A5F30)

inline static constexpr unsigned int GMGCEMNNPBM___c_TypeDefinitionIndex = 26768;

	class GMGCEMNNPBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1ED90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMGCEMNNPBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM___C_CTOR_OFFSET))(this);
		}

		::GMGCEMNNPBM* __cctor_b__33_0()
		{
			return ((::GMGCEMNNPBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
