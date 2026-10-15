#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEBIIBBMNKG;
namespace System { class Object; }

#define HEBIIBBMNKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E557290)
#define HEBIIBBMNKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5572C0)
#define HEBIIBBMNKG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5572D0)

inline static constexpr unsigned int HEBIIBBMNKG___c_TypeDefinitionIndex = 26421;

	class HEBIIBBMNKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEBIIBBMNKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG___C_CTOR_OFFSET))(this);
		}

		::HEBIIBBMNKG* __cctor_b__28_0()
		{
			return ((::HEBIIBBMNKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
