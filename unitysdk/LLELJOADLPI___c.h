#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLELJOADLPI;
namespace System { class Object; }

#define LLELJOADLPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E99A4A0)
#define LLELJOADLPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E99A4D0)
#define LLELJOADLPI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E99A4E0)

inline static constexpr unsigned int LLELJOADLPI___c_TypeDefinitionIndex = 27460;

	class LLELJOADLPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BD60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLELJOADLPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLELJOADLPI___C_CTOR_OFFSET))(this);
		}

		::LLELJOADLPI* __cctor_b__33_0()
		{
			return ((::LLELJOADLPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLELJOADLPI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
