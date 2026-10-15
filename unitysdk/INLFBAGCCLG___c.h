#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INLFBAGCCLG;
namespace System { class Object; }

#define INLFBAGCCLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E698800)
#define INLFBAGCCLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E698840)
#define INLFBAGCCLG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E698850)

inline static constexpr unsigned int INLFBAGCCLG___c_TypeDefinitionIndex = 32041;

	class INLFBAGCCLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INLFBAGCCLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INLFBAGCCLG___C_CTOR_OFFSET))(this);
		}

		::INLFBAGCCLG* __cctor_b__18_0()
		{
			return ((::INLFBAGCCLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + INLFBAGCCLG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
