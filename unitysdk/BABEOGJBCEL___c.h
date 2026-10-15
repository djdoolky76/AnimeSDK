#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABEOGJBCEL;
namespace System { class Object; }

#define BABEOGJBCEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7AE150)
#define BABEOGJBCEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AE190)
#define BABEOGJBCEL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7AE1A0)

inline static constexpr unsigned int BABEOGJBCEL___c_TypeDefinitionIndex = 25508;

	class BABEOGJBCEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BABEOGJBCEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEOGJBCEL___C_CTOR_OFFSET))(this);
		}

		::BABEOGJBCEL* __cctor_b__28_0()
		{
			return ((::BABEOGJBCEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEOGJBCEL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
