#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBBJLHBAGCJ;
namespace System { class Object; }

#define EBBJLHBAGCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2313D0)
#define EBBJLHBAGCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E231410)
#define EBBJLHBAGCJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E231420)

inline static constexpr unsigned int EBBJLHBAGCJ___c_TypeDefinitionIndex = 25585;

	class EBBJLHBAGCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBBJLHBAGCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ___C_CTOR_OFFSET))(this);
		}

		::EBBJLHBAGCJ* __cctor_b__28_0()
		{
			return ((::EBBJLHBAGCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJLHBAGCJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
