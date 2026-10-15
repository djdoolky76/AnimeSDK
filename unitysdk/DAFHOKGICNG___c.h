#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAFHOKGICNG;
namespace System { class Object; }

#define DAFHOKGICNG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1228C0)
#define DAFHOKGICNG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E122900)
#define DAFHOKGICNG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E122910)

inline static constexpr unsigned int DAFHOKGICNG___c_TypeDefinitionIndex = 28363;

	class DAFHOKGICNG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAFHOKGICNG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFHOKGICNG___C_CTOR_OFFSET))(this);
		}

		::DAFHOKGICNG* __cctor_b__23_0()
		{
			return ((::DAFHOKGICNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFHOKGICNG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
