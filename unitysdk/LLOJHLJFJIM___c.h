#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLOJHLJFJIM;
namespace System { class Object; }

#define LLOJHLJFJIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9710D0)
#define LLOJHLJFJIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E971110)
#define LLOJHLJFJIM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E971120)

inline static constexpr unsigned int LLOJHLJFJIM___c_TypeDefinitionIndex = 30161;

	class LLOJHLJFJIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLOJHLJFJIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOJHLJFJIM___C_CTOR_OFFSET))(this);
		}

		::LLOJHLJFJIM* __cctor_b__38_0()
		{
			return ((::LLOJHLJFJIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOJHLJFJIM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
