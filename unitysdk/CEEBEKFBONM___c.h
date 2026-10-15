#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEBEKFBONM;
namespace System { class Object; }

#define CEEBEKFBONM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E064860)
#define CEEBEKFBONM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0648A0)
#define CEEBEKFBONM___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E0648B0)

inline static constexpr unsigned int CEEBEKFBONM___c_TypeDefinitionIndex = 31911;

	class CEEBEKFBONM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFDC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEEBEKFBONM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBEKFBONM___C_CTOR_OFFSET))(this);
		}

		::CEEBEKFBONM* __cctor_b__48_0()
		{
			return ((::CEEBEKFBONM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEBEKFBONM___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
