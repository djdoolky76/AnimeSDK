#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAOMNBIBCNP;
namespace System { class Object; }

#define IAOMNBIBCNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F909D90)
#define IAOMNBIBCNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F909DD0)
#define IAOMNBIBCNP___C___CCTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x1F909DE0)

inline static constexpr unsigned int IAOMNBIBCNP___c_TypeDefinitionIndex = 28675;

	class IAOMNBIBCNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x472F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAOMNBIBCNP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOMNBIBCNP___C_CTOR_OFFSET))(this);
		}

		::IAOMNBIBCNP* __cctor_b__78_0()
		{
			return ((::IAOMNBIBCNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOMNBIBCNP___C___CCTOR_B__78_0_OFFSET))(this);
		}

	};
