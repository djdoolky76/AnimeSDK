#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKMMGCDNILJ;
namespace System { class Object; }

#define HKMMGCDNILJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B5930)
#define HKMMGCDNILJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B5970)
#define HKMMGCDNILJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5B5980)

inline static constexpr unsigned int HKMMGCDNILJ___c_TypeDefinitionIndex = 28532;

	class HKMMGCDNILJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45CD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKMMGCDNILJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMMGCDNILJ___C_CTOR_OFFSET))(this);
		}

		::HKMMGCDNILJ* __cctor_b__28_0()
		{
			return ((::HKMMGCDNILJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMMGCDNILJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
