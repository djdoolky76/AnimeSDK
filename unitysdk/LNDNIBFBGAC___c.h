#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNDNIBFBGAC;
namespace System { class Object; }

#define LNDNIBFBGAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E985F60)
#define LNDNIBFBGAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E985FA0)
#define LNDNIBFBGAC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E985FB0)

inline static constexpr unsigned int LNDNIBFBGAC___c_TypeDefinitionIndex = 28705;

	class LNDNIBFBGAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FD20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNDNIBFBGAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDNIBFBGAC___C_CTOR_OFFSET))(this);
		}

		::LNDNIBFBGAC* __cctor_b__43_0()
		{
			return ((::LNDNIBFBGAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDNIBFBGAC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
