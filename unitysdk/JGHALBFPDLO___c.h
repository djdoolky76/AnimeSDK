#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGHALBFPDLO;
namespace System { class Object; }

#define JGHALBFPDLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204A0F60)
#define JGHALBFPDLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204A0FA0)
#define JGHALBFPDLO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x204A0FB0)

inline static constexpr unsigned int JGHALBFPDLO___c_TypeDefinitionIndex = 34302;

	class JGHALBFPDLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGHALBFPDLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHALBFPDLO___C_CTOR_OFFSET))(this);
		}

		::JGHALBFPDLO* __cctor_b__23_0()
		{
			return ((::JGHALBFPDLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHALBFPDLO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
