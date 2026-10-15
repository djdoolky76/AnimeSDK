#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGDFPDHNOKO;
namespace System { class Object; }

#define EGDFPDHNOKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2930F0)
#define EGDFPDHNOKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E293130)
#define EGDFPDHNOKO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E293140)

inline static constexpr unsigned int EGDFPDHNOKO___c_TypeDefinitionIndex = 30258;

	class EGDFPDHNOKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGDFPDHNOKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDFPDHNOKO___C_CTOR_OFFSET))(this);
		}

		::EGDFPDHNOKO* __cctor_b__28_0()
		{
			return ((::EGDFPDHNOKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDFPDHNOKO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
