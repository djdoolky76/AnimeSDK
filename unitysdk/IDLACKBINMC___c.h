#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDLACKBINMC;
namespace System { class Object; }

#define IDLACKBINMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E602760)
#define IDLACKBINMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6027A0)
#define IDLACKBINMC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6027B0)

inline static constexpr unsigned int IDLACKBINMC___c_TypeDefinitionIndex = 25238;

	class IDLACKBINMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDLACKBINMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLACKBINMC___C_CTOR_OFFSET))(this);
		}

		::IDLACKBINMC* __cctor_b__28_0()
		{
			return ((::IDLACKBINMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLACKBINMC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
