#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMEBOJEOJPD;
namespace System { class Object; }

#define LMEBOJEOJPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A3B70)
#define LMEBOJEOJPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A3BB0)
#define LMEBOJEOJPD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E9A3BC0)

inline static constexpr unsigned int LMEBOJEOJPD___c_TypeDefinitionIndex = 26858;

	class LMEBOJEOJPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CD70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMEBOJEOJPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEBOJEOJPD___C_CTOR_OFFSET))(this);
		}

		::LMEBOJEOJPD* __cctor_b__18_0()
		{
			return ((::LMEBOJEOJPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEBOJEOJPD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
