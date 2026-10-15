#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFPAJBFOHLN;
namespace System { class Object; }

#define IFPAJBFOHLN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E648220)
#define IFPAJBFOHLN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E648260)
#define IFPAJBFOHLN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E648270)

inline static constexpr unsigned int IFPAJBFOHLN___c_TypeDefinitionIndex = 29327;

	class IFPAJBFOHLN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFPAJBFOHLN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPAJBFOHLN___C_CTOR_OFFSET))(this);
		}

		::IFPAJBFOHLN* __cctor_b__33_0()
		{
			return ((::IFPAJBFOHLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPAJBFOHLN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
