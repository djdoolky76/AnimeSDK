#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHBCJNLOLMB;
namespace System { class Object; }

#define CHBCJNLOLMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F387110)
#define CHBCJNLOLMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F387150)
#define CHBCJNLOLMB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F387160)

inline static constexpr unsigned int CHBCJNLOLMB___c_TypeDefinitionIndex = 32671;

	class CHBCJNLOLMB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHBCJNLOLMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBCJNLOLMB___C_CTOR_OFFSET))(this);
		}

		::CHBCJNLOLMB* __cctor_b__23_0()
		{
			return ((::CHBCJNLOLMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBCJNLOLMB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
