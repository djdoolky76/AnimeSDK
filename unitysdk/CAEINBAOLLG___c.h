#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAEINBAOLLG;
namespace System { class Object; }

#define CAEINBAOLLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E02ADD0)
#define CAEINBAOLLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E02AE10)
#define CAEINBAOLLG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E02AE20)

inline static constexpr unsigned int CAEINBAOLLG___c_TypeDefinitionIndex = 35021;

	class CAEINBAOLLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAEINBAOLLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEINBAOLLG___C_CTOR_OFFSET))(this);
		}

		::CAEINBAOLLG* __cctor_b__28_0()
		{
			return ((::CAEINBAOLLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEINBAOLLG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
