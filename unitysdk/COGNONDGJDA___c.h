#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COGNONDGJDA;
namespace System { class Object; }

#define COGNONDGJDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E133FA0)
#define COGNONDGJDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E133FE0)
#define COGNONDGJDA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E133FF0)

inline static constexpr unsigned int COGNONDGJDA___c_TypeDefinitionIndex = 34263;

	class COGNONDGJDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x216F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COGNONDGJDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COGNONDGJDA___C_CTOR_OFFSET))(this);
		}

		::COGNONDGJDA* __cctor_b__23_0()
		{
			return ((::COGNONDGJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + COGNONDGJDA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
