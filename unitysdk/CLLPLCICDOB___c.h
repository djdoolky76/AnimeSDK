#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLLPLCICDOB;
namespace System { class Object; }

#define CLLPLCICDOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FB6B0)
#define CLLPLCICDOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FB6F0)
#define CLLPLCICDOB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0FB700)

inline static constexpr unsigned int CLLPLCICDOB___c_TypeDefinitionIndex = 31456;

	class CLLPLCICDOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLLPLCICDOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLPLCICDOB___C_CTOR_OFFSET))(this);
		}

		::CLLPLCICDOB* __cctor_b__28_0()
		{
			return ((::CLLPLCICDOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLPLCICDOB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
