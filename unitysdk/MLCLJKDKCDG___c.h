#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLCLJKDKCDG;
namespace System { class Object; }

#define MLCLJKDKCDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA534C0)
#define MLCLJKDKCDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA53500)
#define MLCLJKDKCDG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA53510)

inline static constexpr unsigned int MLCLJKDKCDG___c_TypeDefinitionIndex = 25534;

	class MLCLJKDKCDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x561E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLCLJKDKCDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCLJKDKCDG___C_CTOR_OFFSET))(this);
		}

		::MLCLJKDKCDG* __cctor_b__33_0()
		{
			return ((::MLCLJKDKCDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCLJKDKCDG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
