#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKFPPPBNJNH;
namespace System { class Object; }

#define OKFPPPBNJNH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE6B6B0)
#define OKFPPPBNJNH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6B6F0)
#define OKFPPPBNJNH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE6B700)

inline static constexpr unsigned int OKFPPPBNJNH___c_TypeDefinitionIndex = 33062;

	class OKFPPPBNJNH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKFPPPBNJNH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFPPPBNJNH___C_CTOR_OFFSET))(this);
		}

		::OKFPPPBNJNH* __cctor_b__23_0()
		{
			return ((::OKFPPPBNJNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFPPPBNJNH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
