#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOHJGOCPPMF;
namespace System { class Object; }

#define NOHJGOCPPMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5D1E0)
#define NOHJGOCPPMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5D210)
#define NOHJGOCPPMF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EB5D220)

inline static constexpr unsigned int NOHJGOCPPMF___c_TypeDefinitionIndex = 26822;

	class NOHJGOCPPMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOHJGOCPPMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHJGOCPPMF___C_CTOR_OFFSET))(this);
		}

		::NOHJGOCPPMF* __cctor_b__18_0()
		{
			return ((::NOHJGOCPPMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHJGOCPPMF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
