#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFAKMCIJFCB;
namespace System { class Object; }

#define BFAKMCIJFCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA03AD0)
#define BFAKMCIJFCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA03B00)
#define BFAKMCIJFCB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA03B10)

inline static constexpr unsigned int BFAKMCIJFCB___c_TypeDefinitionIndex = 26376;

	class BFAKMCIJFCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AA30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFAKMCIJFCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKMCIJFCB___C_CTOR_OFFSET))(this);
		}

		::BFAKMCIJFCB* __cctor_b__33_0()
		{
			return ((::BFAKMCIJFCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKMCIJFCB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
