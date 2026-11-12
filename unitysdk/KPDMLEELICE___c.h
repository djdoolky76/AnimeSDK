#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPDMLEELICE;
namespace System { class Object; }

#define KPDMLEELICE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBF8130)
#define KPDMLEELICE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF8160)
#define KPDMLEELICE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FBF8170)

inline static constexpr unsigned int KPDMLEELICE___c_TypeDefinitionIndex = 34200;

	class KPDMLEELICE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x200E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPDMLEELICE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDMLEELICE___C_CTOR_OFFSET))(this);
		}

		::KPDMLEELICE* __cctor_b__28_0()
		{
			return ((::KPDMLEELICE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDMLEELICE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
