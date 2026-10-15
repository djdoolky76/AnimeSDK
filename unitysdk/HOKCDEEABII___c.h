#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOKCDEEABII;
namespace System { class Object; }

#define HOKCDEEABII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5EAFB0)
#define HOKCDEEABII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EAFF0)
#define HOKCDEEABII___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E5EB000)

inline static constexpr unsigned int HOKCDEEABII___c_TypeDefinitionIndex = 34713;

	class HOKCDEEABII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DCA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOKCDEEABII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKCDEEABII___C_CTOR_OFFSET))(this);
		}

		::HOKCDEEABII* __cctor_b__38_0()
		{
			return ((::HOKCDEEABII*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKCDEEABII___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
