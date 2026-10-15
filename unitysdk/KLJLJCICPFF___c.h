#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLJLJCICPFF;
namespace System { class Object; }

#define KLJLJCICPFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88F960)
#define KLJLJCICPFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88F990)
#define KLJLJCICPFF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E88F9A0)

inline static constexpr unsigned int KLJLJCICPFF___c_TypeDefinitionIndex = 25304;

	class KLJLJCICPFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJLJCICPFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJLJCICPFF___C_CTOR_OFFSET))(this);
		}

		::KLJLJCICPFF* __cctor_b__28_0()
		{
			return ((::KLJLJCICPFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJLJCICPFF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
