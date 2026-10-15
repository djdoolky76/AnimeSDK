#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHJNOBBOFOC;
namespace System { class Object; }

#define MHJNOBBOFOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA066A0)
#define MHJNOBBOFOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA066E0)
#define MHJNOBBOFOC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA066F0)

inline static constexpr unsigned int MHJNOBBOFOC___c_TypeDefinitionIndex = 26946;

	class MHJNOBBOFOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHJNOBBOFOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJNOBBOFOC___C_CTOR_OFFSET))(this);
		}

		::MHJNOBBOFOC* __cctor_b__18_0()
		{
			return ((::MHJNOBBOFOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJNOBBOFOC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
