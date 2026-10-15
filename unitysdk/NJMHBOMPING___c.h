#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJMHBOMPING;
namespace System { class Object; }

#define NJMHBOMPING___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB20880)
#define NJMHBOMPING___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB208C0)
#define NJMHBOMPING___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB208D0)

inline static constexpr unsigned int NJMHBOMPING___c_TypeDefinitionIndex = 29786;

	class NJMHBOMPING___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJMHBOMPING___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBOMPING___C_CTOR_OFFSET))(this);
		}

		::NJMHBOMPING* __cctor_b__28_0()
		{
			return ((::NJMHBOMPING*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBOMPING___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
