#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMFIFNOCDOF;
namespace System { class Object; }

#define AMFIFNOCDOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F3DA0)
#define AMFIFNOCDOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F3DE0)
#define AMFIFNOCDOF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4F3DF0)

inline static constexpr unsigned int AMFIFNOCDOF___c_TypeDefinitionIndex = 29424;

	class AMFIFNOCDOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x454C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMFIFNOCDOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFIFNOCDOF___C_CTOR_OFFSET))(this);
		}

		::AMFIFNOCDOF* __cctor_b__23_0()
		{
			return ((::AMFIFNOCDOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFIFNOCDOF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
