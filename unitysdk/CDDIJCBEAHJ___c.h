#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDDIJCBEAHJ;
namespace System { class Object; }

#define CDDIJCBEAHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEC3C80)
#define CDDIJCBEAHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEC3CC0)
#define CDDIJCBEAHJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FEC3CD0)

inline static constexpr unsigned int CDDIJCBEAHJ___c_TypeDefinitionIndex = 33594;

	class CDDIJCBEAHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDDIJCBEAHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDIJCBEAHJ___C_CTOR_OFFSET))(this);
		}

		::CDDIJCBEAHJ* __cctor_b__23_0()
		{
			return ((::CDDIJCBEAHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDIJCBEAHJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
