#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCPCAIGEBCB;
namespace System { class Object; }

#define CCPCAIGEBCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F343940)
#define CCPCAIGEBCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F343980)
#define CCPCAIGEBCB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F343990)

inline static constexpr unsigned int CCPCAIGEBCB___c_TypeDefinitionIndex = 32626;

	class CCPCAIGEBCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCPCAIGEBCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCAIGEBCB___C_CTOR_OFFSET))(this);
		}

		::CCPCAIGEBCB* __cctor_b__23_0()
		{
			return ((::CCPCAIGEBCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCAIGEBCB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
