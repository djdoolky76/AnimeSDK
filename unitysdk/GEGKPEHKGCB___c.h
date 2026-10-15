#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEGKPEHKGCB;
namespace System { class Object; }

#define GEGKPEHKGCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E42AE30)
#define GEGKPEHKGCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E42AE70)
#define GEGKPEHKGCB___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E42AE80)

inline static constexpr unsigned int GEGKPEHKGCB___c_TypeDefinitionIndex = 26820;

	class GEGKPEHKGCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEGKPEHKGCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGKPEHKGCB___C_CTOR_OFFSET))(this);
		}

		::GEGKPEHKGCB* __cctor_b__63_0()
		{
			return ((::GEGKPEHKGCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGKPEHKGCB___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
