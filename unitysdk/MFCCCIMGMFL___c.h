#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFCCCIMGMFL;
namespace System { class Object; }

#define MFCCCIMGMFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA16B50)
#define MFCCCIMGMFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA16B80)
#define MFCCCIMGMFL___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EA16B90)

inline static constexpr unsigned int MFCCCIMGMFL___c_TypeDefinitionIndex = 26605;

	class MFCCCIMGMFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCCCIMGMFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCCCIMGMFL___C_CTOR_OFFSET))(this);
		}

		::MFCCCIMGMFL* __cctor_b__43_0()
		{
			return ((::MFCCCIMGMFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCCCIMGMFL___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
