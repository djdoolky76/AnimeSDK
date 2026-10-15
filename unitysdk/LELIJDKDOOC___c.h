#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LELIJDKDOOC;
namespace System { class Object; }

#define LELIJDKDOOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9096A0)
#define LELIJDKDOOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9096E0)
#define LELIJDKDOOC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9096F0)

inline static constexpr unsigned int LELIJDKDOOC___c_TypeDefinitionIndex = 34480;

	class LELIJDKDOOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x322C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LELIJDKDOOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LELIJDKDOOC___C_CTOR_OFFSET))(this);
		}

		::LELIJDKDOOC* __cctor_b__28_0()
		{
			return ((::LELIJDKDOOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LELIJDKDOOC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
