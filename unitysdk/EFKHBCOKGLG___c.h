#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFKHBCOKGLG;
namespace System { class Object; }

#define EFKHBCOKGLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E262AB0)
#define EFKHBCOKGLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E262AE0)
#define EFKHBCOKGLG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E262AF0)

inline static constexpr unsigned int EFKHBCOKGLG___c_TypeDefinitionIndex = 32111;

	class EFKHBCOKGLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFKHBCOKGLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKHBCOKGLG___C_CTOR_OFFSET))(this);
		}

		::EFKHBCOKGLG* __cctor_b__33_0()
		{
			return ((::EFKHBCOKGLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKHBCOKGLG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
