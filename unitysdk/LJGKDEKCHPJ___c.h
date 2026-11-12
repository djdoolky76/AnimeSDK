#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJGKDEKCHPJ;
namespace System { class Object; }

#define LJGKDEKCHPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC9D910)
#define LJGKDEKCHPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC9D950)
#define LJGKDEKCHPJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FC9D960)

inline static constexpr unsigned int LJGKDEKCHPJ___c_TypeDefinitionIndex = 30964;

	class LJGKDEKCHPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJGKDEKCHPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGKDEKCHPJ___C_CTOR_OFFSET))(this);
		}

		::LJGKDEKCHPJ* __cctor_b__33_0()
		{
			return ((::LJGKDEKCHPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGKDEKCHPJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
